#include<iostream>
using namespace std;
int first0cc(int arr[],int n, int key)
{
    int s=0;
    int e=n-1;

    int mid=s+(e-s)/2;
    int ans=-1;

    while (s<=e)
    {
        if(key==arr[mid]){
            ans=mid;
            e=mid-1;

        }
        if (arr[mid]<key)
        {
            s=mid+1;
        }
        else
        e=mid-1;

        mid=s+(e-s)/2;
    }
    return ans;
    
}

int last0cc(int arr[],int n, int key)
{
    int s=0;
    int e=n-1;

    int mid=s+(e-s)/2;
    int ans=-1;

    while (s<=e)
    {
        if(key==arr[mid]){
            ans=mid;
            s=mid+1;

        }
        if (arr[mid]<key)
        {
            s=mid+1;
        }
        else
        e=mid-1;

        mid=s+(e-s)/2;
    }
    return ans;
    
}

int main()
{
    int even[6]={1,2,3,4,5,3};

    cout<<first0cc(even,6,3)<<endl;
    cout<<last0cc(even,6,3)<<endl;

    return 0;
} 