#include <iostream>
using namespace std;

class Node {
	public :
	int data;
	Node *next;

	Node(int data) {
		this -> data = data;
		next = NULL;
	}
};

Node* takeInput_Better() {
	int data;
	cin >> data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data != -1) {
		Node *newNode = new Node(data);
		if(head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail -> next = newNode;
			tail = tail -> next;
			// OR
			// tail = newNode;
		}

		cin >> data;
	}
	return head;
}


Node* deleatNode(Node *head, int i) {
	
	Node *temp=head;
	int count=0;
	
	while(count<i-1){
		temp=temp->next;
		count++;
	}
	
Node *a=temp ->next;
Node *b=a ->next;

temp->next=b;


	
}

void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
}

int main() {

	Node *head = takeInput_Better();
	print(head);
	int i;
	cin >> i ;
	deleatNode(head, i);
	print(head);


}

