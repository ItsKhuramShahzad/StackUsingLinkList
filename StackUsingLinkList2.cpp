#include<iostream>
using namespace std;
class node{
	public:
	node *link;
	int data;
	
};
node *top= new node();

 void push(int data){
 	node *temp= new node();
 	temp->data=data;
 	temp->link= top;
 	top= temp;
 }

node * pop(){
	node* temp= new node();
	temp= top;
	top= top->link;
	temp->link= NULL;
	delete(temp);
	
}

void printStack(){
	node* temp = new node();
	temp= top;
     while (temp->link!=NULL)
     {
     	cout<<"\t"<< temp->data;
     	temp= temp->link;
	 }
}
int main (){
	push(3);
	push(57);
	push(57);
	push(57);
	push(5);
	push(34);
	push(5);
	pop();
	printStack();
	return 0;
}
