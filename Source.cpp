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
		if (head == NULL) { 
			head = ptr; tail = ptr;
		}
		else {
			tail->next = ptr;
			tail = ptr;
		}
	}
	void bubbleSort(LinkedList* head) {
		int swapped;
		Node* ptr1;
		Node* lptr = NULL;
		if (head == NULL)
			return;
		do {
			swapped = 0;
			ptr1 = this->head;
			while (ptr1->next != lptr)
			{
				if (ptr1->data > ptr1->next->data)
				{
					swap(ptr1, ptr1->next);
					swapped = 1;
				}
				ptr1 = ptr1->next;
			}
			lptr = ptr1;
		} while (swapped);
	}
	void swap( Node* a,  Node* b) {
		int temp = a->data;
		a->data = b->data;
		b->data = temp;
	}
	void display() {
		Node* temp;
		temp = head;
		cout << "Liast is " << endl;
		while (temp != NULL) { 
			cout << temp->data << " ";
			temp = temp->next;
		}
		cout << endl;
	}

};
int main() {
	LinkedList *l1 = new LinkedList;
	int num;
	char ch;
	do {
		cout << "Enter Number you want to insert "; cin >> num;
		l1->insert(num);
		cout << "Enter Y if you want to insert value again "; cin >> ch;
	} while (ch == 'y' || ch == 'Y');
	l1->display();
	cout << endl;
	cout << "After sorting ";
	l1->bubbleSort(l1);
	l1->display();
	system("pause");
	return 0;
}