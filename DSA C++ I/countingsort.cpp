#include<iostream>
using namespace std;

int main()
{
    int n,max=0,arr[n];
    cout<<"Enter the size of array\t";
    cin>>n;
    cout<<"Enter the elements of array\t";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i]>max)
        max=arr[i];
    }
    int res[max+1];
    for(int i=0;i<=max;i++){
        res[i]=0;
    }
    for(int i=0;i<n;i++){
        res[arr[i]]++;
    }
    for(int i=0;i<=max;i++){
        cout<<res[i]<<endl;
    }
    for(int i=0;i<=max;i++){
        for(int j=1;j<=res[i];j++)
        cout<<i<<endl;
    }
    
}