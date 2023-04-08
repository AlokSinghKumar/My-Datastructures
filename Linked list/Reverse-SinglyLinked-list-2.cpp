#include<bits/stdc++.h>
using namespace std;

class Node{
    public: 
        int data;
        Node *next;

        Node(int Node_data){
            this->data = Node_data;
            this->next = nullptr;
        }
};

class linkedList{
    public:
        Node *head;
        Node *tail;

    linkedList(){
        this->head = nullptr;
    }

    void insert(int Node_data){
        Node* node = new Node(Node_data);

        if(!this->head){
            this->head = node;
        } else {
            this->tail->next = node;
        }

        this->tail = node;
    }
};

void print_linked_list(Node *node){
    while(node){
        cout << node->data;
        node = node->next;

        if(node)
            cout << " -> ";
    }
}

Node* reverse(Node *node){
    Node  *mid, *nxt;
    mid = node -> next;
    nxt = mid -> next;

    node -> next = nullptr;

    while(nxt -> next){
        mid -> next = node;
        node = mid; 
        mid = nxt;
        nxt = nxt->next;
    }

    return nxt;
}

int main(){
    int n; 

    cin >> n;
    linkedList *llist = new linkedList();

    while(n--){
        int temp; 
        cin >> temp;

        llist->insert(temp);
    }

    reverse(llist -> head);
    print_linked_list(llist->head);

}