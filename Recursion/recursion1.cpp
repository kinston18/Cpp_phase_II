//factorial of a no.


#include<iostream>
using namespace std;


int factorial(int n){

    //base case
    if(n==0)
    return 1;

//recursive relation
    int chhoti = factorial(n-1);
    int badi = n * chhoti;

    return badi;

}
int main(){

int n;
cin>>n;

int ans= factorial(n);

cout<<ans<<endl;
    return 0;
}