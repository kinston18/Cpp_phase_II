//print counting


#include<iostream>
using namespace std;

void print(int n){

    //base case
    if(n==0)
    return ;

  
//recursive relation
print (n-1);

//processing
  cout<< n << endl;

}


int main(){

int n;
cin>>n;
cout<<endl;
print(n);

    return 0;
}