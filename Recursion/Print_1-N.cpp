#include<iostream>
using namespace std;

void print(int i,int n){
    
    //base case
    if(i>n)
    return;

//processing
cout<<i<<endl;

//recursive relation
print(i+1,n);

}
int main(){

int n;
cin>>n;
cout<<endl;
print(1,n);
return 0;
}