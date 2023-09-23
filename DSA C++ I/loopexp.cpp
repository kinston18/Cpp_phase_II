#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<10;i++){
        cout<<"Hi"<<endl;
        for(int j=i+1;i<10;i++){
            cout<<i <<endl;
            for(int k=j+1;j<10;j++){
                cout<<i <<j <<k <<endl;
            }
        }
    }
    return 0;
}