#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<string>s;

s.push("Prajjwal");
s.push("Kush");
s.push("Harsh");


cout<<"Top element : "<<s.top()<<endl;

s.pop();
cout<<" Tom element after popping : "<<s.top()<<endl;

cout<<"Size of Stack : "<<s.size()<<endl;

}