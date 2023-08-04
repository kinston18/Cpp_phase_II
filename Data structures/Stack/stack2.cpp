#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <int> stack;
    stack.push(24);
    stack.push(25);
    stack.push(26);
    stack.push(27);
    int num= 0;
    stack.push(num);
    stack.pop();
    stack.pop();


//codition
while(!stack.empty()){

    cout<<stack.top()<<endl;
    stack.pop();
}

}