#include<iostream>
using namespace std;
struct Node {
public:
	int data;
	Node* next;
};
class LinkedList {

public:
	Node* head, * tail;
	LinkedList() {
		head = NULL;
		tail = NULL;
	}
	void insert(int x) {
		Node* ptr = new Node;
		ptr->data = x; ptr->next = NULL;
		if (head == NULL) { //when only 1 node
			head = ptr; tail = ptr;
		}
		else {
			tail->next = ptr;
			tail = ptr;
		}
	}
	void merge(LinkedList l2) {
		if (this->head == NULL) {
			cout << "List 1 is Empty " << endl;
		}
		else if (l2.head == NULL) {
			cout << "List 2 is Empty " << endl;
		}
		else {
			cout << "Merged List is " << endl;
			this->tail->next = l2.head;
			this->tail = l2.head;
		}
	}
	void display() {
		Node* temp;
		temp = head;
		while (temp != NULL) { 
			cout << "Display is:" << temp->data << endl;
			temp = temp->next;
		}
	}
};

int main() {
	LinkedList l1;
	l1.insert(3); l1.insert(4); l1.insert(5);
	cout << "List 1 is " << endl;
	l1.display();
	cout << endl;
	LinkedList l2;
	l2.insert(6); l2.insert(7); l2.insert(8);
	cout << "List 2 is " << endl;
	l2.display();
	cout << endl;
	l1.merge(l2);
	l1.display();
	system("pause");
	return 0;
}