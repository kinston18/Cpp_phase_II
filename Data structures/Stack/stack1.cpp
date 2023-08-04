#include<iostream>
#include<stack>
using namespace std;

int main()
{
stack<int> stack;
stack.push(21);
stack.push(22);
stack.pop();
stack.push(32);
int num= 0;
stack.push(num);

cout<<stack.top() <<endl;
return 0;
}
