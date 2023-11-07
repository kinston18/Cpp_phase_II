#include<iostream>
using namespace std;

int main(){

int s[10],v;
int i,n,r=s[0]-48;
for(i=1;i<n;i+=2){
switch (s[i])
{
case 'A':
v=s[i+1]-48;
    r=r&v;

case 'B':
v=s[i+1]-48;
    r=r|v;

case 'C':
v=s[i+1]-48;
    r=r^v;

}
}

return r;
}