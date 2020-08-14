#include<iostream>
using namespace std;
class LinkedList{
	public:
	int data;
	LinkedList* next;
	LinkedList(int data,LinkedList* next){
		(*this).data=data;
		this->next=next;
	}
	static LinkedList* createList();
	void traverse();
	int countNodes();
	void addNode();
}*head=NULL;

LinkedList* LinkedList::createList(){
	int noofnodes,data;
	LinkedList* head;
	cout<<"Enter number of nodes to be created"<<endl;
	cin>>noofnodes;
	for(int i=0;i<noofnodes;i++){
		cout<<"Enter data"<<endl;
		cin>>data;
		LinkedList* temp=new LinkedList(data,NULL);
		if(i==0){
			head=temp;
			continue;
		}
		LinkedList* p=head;
		while(p->next!=NULL)p=p->next;
		p->next=temp;
	}
	return head;
}
void LinkedList::traverse(){
	LinkedList* temp=::head;
	while(temp!=NULL){
		cout<<temp->data<<"-->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
void LinkedList::addNode(){
	int data,loc,count=0,num;
	LinkedList* p;
	LinkedList* temp=new LinkedList(data,NULL);
	LinkedList* head;
		cout<<"1-add first\n2-add last\n3-random\n";
		cin>>num;
		temp->next=NULL;
		cout<<"enter data:"<<endl;
		cin>>temp->data;
		switch(num){
			case 1: if(head==NULL){
					head=temp;
					head->next=NULL;
				}else{
				p=head;
				head=temp;
				head->next=p;
				}
				break;
			case 2: p=head;
				while(p->next!=NULL) p=p->next;
				p->next=temp;
				break;
				default: cout<<"wrong option";
		}
}
int main(){
	head=LinkedList::createList();
	head->traverse();
	head->addNode();
	head->traverse();
	return 0;
}
