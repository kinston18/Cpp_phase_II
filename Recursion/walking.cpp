#include<iostream>
using namespace std;

void reachHome(int src, int dest){

    //base case
    if(src==dest)
    cout<<"pahunch gya"<<endl;
    return ;


    //recursive call
    reachHome(src+1, dest);
}

int main(){

int dest = 10;
int src = 1;

cout<<endl;

reachHome(src,dest);

    return 0;
}