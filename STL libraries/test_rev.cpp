#include<vector>
#include<iostream>
using namespace std;


int reverse(int n){
vector<int>v;

while(n>0){
    v.push_back(n%10);
    n=n/10;
}
}

int main(){
    int n;
    cin>>n;
    cout<<reverse(n);

    
    return 0;
}