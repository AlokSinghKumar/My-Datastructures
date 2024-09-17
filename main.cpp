#define ONLINE_JUDGE
#include <bits/stdc++.h>
using namespace std;

void imp(){
    #ifdef ONLINE_JUDGE
        if (freopen("input.txt", "r", stdin) == NULL) {
            perror("Error redirecting stdin");
            exit(1);
        }
        if (freopen("output.txt", "w", stdout) == NULL) {
            perror("Error redirecting stdout");
            exit(1);
        }
    #endif
}

class Node {
	public : 
		int data;
		Node *next;

		Node () {
			this -> data = 0;
			this -> next = nullptr;
		}
};

class LinkedList {
	Node *head;

	public : 
		LinkedList () { this -> head = nullptr; }

		void pushFront (int);
		void pushBack (int);
		void popBack ();
		void popFront (); 
		int remove (int data);
		int find (int data);
};

void LinkedList :: pushFront (int data) {

}

int main () {
	imp ();
	cout << "alok";

}
