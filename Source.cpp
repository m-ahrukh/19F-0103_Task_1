#include<iostream>
using namespace std;
struct Node {
public:
	int data;
	Node* next;
};
class LinkedList {
	Node* head, * tail;
public:
	LinkedList() {
		head = NULL;
		tail = NULL;
	}
	void insert(int x) {
		Node* ptr = new Node;
		ptr->data = x; ptr->next = NULL;
		if (head == NULL) {
			head = ptr; tail = ptr;
		}
		else {
			tail->next = ptr;
			tail = ptr;
		}
	}
	void pairWiseSwap(){
		Node* temp = head;
		while (temp != NULL && temp->next != NULL) {
			swap(temp->data,temp->next->data);
			temp = temp->next->next;
		}
	}
	void display() {
		Node* temp;
		temp = head;
		cout << "List is " << endl;
		while (temp != NULL) {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}
};
int main() {
	LinkedList* l1 = new LinkedList;
	l1->insert(5);
	l1->insert(3);
	l1->insert(6);
	l1->insert(1);
	l1->display();
	cout << endl;
	l1->pairWiseSwap();
	l1->display();
	cout << endl;
	system("pause");
	return 0;

}