//using the conversion into string method

#include<iostream>
using namespace std;

int count_digits(int n){
    string x = to_string(n);
    return x.length();
}

int main(){
    int n =458765;
    cout<<"Number of digits in "<<n<<" is "<<count_digits(n)<<endl;
}