#include<iostream>
using namespace std;

int main()
{
    string s="r12a78j9", c=" ";
    int sum = 0, v;
    for(int i=0;i<s.length();i++){
        if(s[i]>=97 && s[i]<=122)
        c+=s[i];
        else
        {
            v=s[i]-48;
        sum += v;
        }
    }

    cout<<"\n Sum = "<<sum;
    cout<<"\n Concatenation = "<<c;
    return 0;
}