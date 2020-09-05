#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
}*head = NULL;

void insert(int data)
{
    node *temp = new node;

    temp -> next = head;
    temp -> data = data;
    head = temp;
}

void display(){
    if(head == NULL){
        cout << "underflow" << endl;
        return;
    }
    node *temp = new node;
    temp  = head;
    while(temp != NULL){
        cout << temp -> data << "  ";
        temp = temp -> next;
    }
    cout << endl << endl;
}

void remove(){
    if(head == NULL){
        cout << "underflow" << endl;
        return;
    }

    node *temp = new node;
    temp = head;
    head = head -> next;

    delete(temp);
}

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
                    insert(data);
                    } break;
            case 2 : remove(); break;
            case 3 : display(); break;
        }
    }
    return 0;
}