#include<iostream>
using namespace std;

class Node{
public :
int data;
Node* next;

Node(int data){
    this -> data
}
};


int main()
{
Node* node1=new Node();
cout<< node1 ->data<<endl;

    return 0;
}