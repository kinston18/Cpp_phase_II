#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Geeks {
//access specifier
public:
//data members
string geekname;
//member functions
void printname(){
    cout<< "Geekname is: "<<geekname;
}
};

int main(){
    //declare objects of class geeks
    Geeks obj1;

    //accessing data member
    obj1.geekname = "Abhi";

    //accessing member fuction
    obj1.printname();
    return 0;
}