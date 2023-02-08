#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>d;
    d.push_front(3);
    d.push_back(2);
    d.push_front(5);

for(int i:d)
{
    cout<<i<<" ";
    }
d.pop_front();
cout<<endl;

for(int i:d){
    cout<<i<<" ";
}

cout<<"Print 1st index"<<d.at(1)<<endl;

cout<<"front "<<d.front()<<endl;
cout<<"back "<<d.back()<<endl;
} 