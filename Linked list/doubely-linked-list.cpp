#include <iostream>
using namespace std;

struct node{
    int data;
    node *next;
    node *before;
}*head = NULL;

void Insert(int);
void Delete();
void Display();

int main(){
     int choice = 0;
    cout << "1: insert\n2: remove\n3: display\n4: exit";
    while(choice != 4){
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch(choice){
            case 1: {int data;
                    cout << "Enter data: ";
                    cin >> data;
                    Insert(data);
                    } break;
            case 2 : Delete(); break;
            case 3 : Display(); break;
        }
    }  
}

void Insert(int data){
    node *newNode = new node;
    newNode -> data = data;
    newNode -> next = NULL;
    newNode -> before = NULL;

    if(head == NULL)
        head = newNode;
    else{
        head -> before = newNode;
        newNode -> next = head;
        head = newNode;
    }
}

void Delete(){
    if(head == NULL){
        cout << "The list is empty";
        return;
    } 

    node *temp = new node;
    temp = head;

    cout << endl << temp -> data << " had been deleted. " << endl;
    //pointing to next node and making
    //and makinh the before pointer of next node NULL
    head = head -> next;
    head -> before = NULL;

    delete(temp);
}

void Display(){
    if(head == NULL){
        cout << "The list is empty";
        return;
    }

    node *temp = new node;
    temp = head;

    cout << "Displaying in reverse order: ";
    while(temp -> next != NULL){
        cout << temp -> data << "  ";
        temp = temp -> next;
    }
    cout << temp -> data << endl;

    cout << "Displaying in normal order: ";
    while(temp != NULL){
        cout << temp -> data << "  ";
        temp = temp -> before;
    }
}