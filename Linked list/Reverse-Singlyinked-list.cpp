#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    node *before;
}*tail = NULL;

void insert(int data){
    node *temp = new node;

    temp -> data = data;
    temp-> before = NULL;
    
    if(tail == NULL)
        tail = temp;
    else {
        temp -> before = tail;
        tail = temp;
    }
}

void display_reverse(){
    node *temp = new node;
    temp = tail;

    while(temp != NULL){
        cout << temp -> data << " -> ";
        temp = temp -> before;
    }

    cout << "NULL" << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, temp;
        cin >> n;

        while(n--){
            cin >> temp;
            insert(temp);
        }

        display_reverse();
    }

    return 0;
}