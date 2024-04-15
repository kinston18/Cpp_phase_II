#include<iostream>
using namespace std;

void print(int i,int n){
    //base case
    if(i<1)
    return;

    cout<<i<<endl;

    print(i-1,n);

}

int main(){
    int n;
    cin>>n;
    cout<<endl;
    print(n,n);
    return 0;
}