#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;

    }
};

void InsertAtHead(Node* &head, int d){

    //new node create
    Node* temp = new Node(d);
    temp -> next = head;
    
}