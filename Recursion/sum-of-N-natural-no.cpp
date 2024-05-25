#include<iostream>
using namespace std;

void sum(int n){
int s = 0;
for(int i=1;i<=n;i++){
    s += i;
}
cout<<s;
}

int main(){

int n;
cin>>n;
sum(n);
cout<<n<<endl;
return 0;
}