#include <bits/stdc++.h>
using namespace std;

class Node {
	public : 
		int data;
		Node *next, *prev;

		Node (int data) {
			this -> data = data;
			this -> next = this -> prev = nullptr;
		}
};

class DoubleLinkedList {
	public : 
		Node *head = nullptr, *tail = nullptr;

		void initiateList (Node *node);
		void pushBack (int data);
		void pushFront (int data);
		void popBack ();
		void popFront ();
		void display ();
};

void DoubleLinkedList :: pushBack (int data) {
	Node *newNode = new Node (data);

	if (this -> head == nullptr || this -> tail == nullptr) {
		head = newNode;
		tail = newNode;
		return;
	}

	newNode -> prev = tail;
	tail -> next = newNode;
	tail = newNode;
}

void DoubleLinkedList :: pushFront (int data) {
	Node *newNode = new Node (data);

	if (this -> head == nullptr || this -> tail == nullptr) {
		this -> head = newNode;
		this -> tail = newNode;
		return;
	}

	newNode -> next = head;
	head -> prev = newNode;
	head = newNode;
}

void DoubleLinkedList :: display () {
	Node *tmp = this -> head;

	while (tmp != nullptr) {
		cout << tmp -> data << " ";
		tmp = tmp -> next;
	}
}

int main () {
	DoubleLinkedList list;

	list.pushBack (1);
	list.pushBack (2);
	list.pushBack (3);
	list.pushBack (4);
	list.pushFront (0);
	list.pushFront (-1);
	list.pushFront (10);

	list.display ();

	return 0;
}