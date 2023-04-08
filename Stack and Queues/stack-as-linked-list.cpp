#include <iostream>
#include <stdlib.h>
using namespace std;

struct node {
    int data;
    node *next;
}*front = NULL, *rear = NULL;

void enqueue(int data){
    node *newNode = new node;

    newNode -> data = data;
    newNode -> next = NULL;

    if(front == NULL){
        front = rear = newNode;
    } else {
        rear -> next = newNode;
        rear = newNode;
    }
}

void dequeue(){
    if(front == NULL){
        cout << "Queue is empty!" << endl;
        return;
    }
    
    node *temp = new node;
    temp = front; 

    front = front -> next;
    cout << temp -> data << " has been deleted!" << endl;

    delete(temp);
}

void display(){
    if(front == NULL){
        cout << "stack is empty!";
        return;
    } 
    
    node *temp = new node;
    temp = front;

    while(temp != NULL){
        cout << temp -> data << "  ";
        temp = temp -> next;
    }
    cout << endl;
}

int main(){
    int choice = 0;
    cout << "1: Enqueue\n2: Dequeue\n3: display\n4: exit";

    while(choice != 4){
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch(choice){
            case 1 : {
                        int data;
                        cout << "Enter data: ";
                        cin >> data;
                        enqueue(data);
                     }break;
            case 2 : dequeue(); break;
            case 3: display(); break;
            case 4: exit(0); break;
            default: cout << "\nWrong choice!! try again";
        }
    }
    return 0;
}