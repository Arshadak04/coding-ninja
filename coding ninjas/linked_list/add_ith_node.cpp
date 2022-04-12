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


Node* insertNode(Node *head, int i, int data) {
	Node *newNode=new Node(data);
	Node *temp=head;
	int count=0;
	
	while(count<i-1){
		temp=temp->next;
		count++;
	}
	
	Node *a=temp->next;
	temp->next=newNode;
	newNode->next=a;

	
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
	int i, data;
	cin >> i >> data;
	insertNode(head, i, data);
	print(head);


}

