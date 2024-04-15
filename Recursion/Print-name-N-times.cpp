#include<iostream>
using namespace std;

void printName(int i,int n){

//base condn
if(i>n)
return;

//processing
cout<<"Prajjwal"<<endl;

//recursive relation
printName(i+1,n);

}

int main(){

int n;
cin>>n;
cout<<endl;
printName(1,n);
return 0;
}