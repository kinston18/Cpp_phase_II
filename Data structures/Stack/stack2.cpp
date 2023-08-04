#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <int> stack;
    stack.push(24);
    stack.push(25);
    stack.push(26);
    stack.push(27);
    stack.push(28);
    int num= 0;
    stack.push(num);
    stack.pop();
    stack.pop();


//condition
while(!stack.empty()){

    cout<<stack.top()<<endl;
    stack.pop();
}

}