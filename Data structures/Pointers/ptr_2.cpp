#include<iostream>
using namespace std;

int main(){
    //pointer to int is created, and pointing to some garbage address
//int *p = 0;

//cout<< *p <<endl;
int i =5;

int *q = &i;
cout<<q<<endl;
cout<<*q<<endl;

int *p = 0;
p=&i;

cout<< p <<endl;
cout<<*p<<endl;

cout<<endl;

int num=5;
int a=num;
a++;


cout<<num<<endl;

int *t =&num;
cout<<"before : " <<num<<endl;
(*t)++;
cout<<"after : " <<num<<endl;

return 0;

}