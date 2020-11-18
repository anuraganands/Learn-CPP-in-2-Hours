#include <iostream>
using namespace std;

template <class T>
class node {
	public:
		node(){;}
		node(T data){
			this->data = data;
			this->next = NULL;	
		}
    	T data;
    	node<T> * next;
};

template <class T>
class List{
	public:
		node<T> * head;
		node<T> * tail;
		List(){
			head = NULL;
		}	
		~List(){
			node<T> * tmpNode = head;
			node<T> * tmpHead;
			while (tmpNode != NULL)
			{
				tmpHead = tmpNode->next;
				cout<<"deleting "<<tmpNode->data<<endl;
				delete tmpNode; //a misnomer... 
				tmpNode = tmpHead;
			}	
		}
		void add(T data){
			if(head == NULL){
				head = new node<T>(data);
				tail = head;
			}else{
				tail->next = new node<T>(data);
				tail = tail->next;
			}
		}
		void print(){
			for (node<T> * tmpNode = head; tmpNode != NULL; tmpNode = tmpNode->next)
				cout << tmpNode->data<<endl;
		}
};

void addList(){
	List<char> L;
	L.add('a');
	L.add('b');
	L.add('c');
}

int main(){	
	addList();
	cout<<"Line after addList is called...."<<endl;
	
	return 0;
}
