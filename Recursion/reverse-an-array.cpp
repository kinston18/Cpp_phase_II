// #include<iostream>
// using namespace std;

// //Func to print the array

// void printArray(int arr[], int n){
//     cout<<" The reversed array is :- "<< endl;
//     for(int i=0;i<n;i++){
//         cout<<arr[i]<<" ";
//     }
// }

// //function to reverse

// void reverseArray(int arr[],int n){
//     int p1 = 0;
//     int p2 = n-1;
    
//     while(p1<p2){
//         swap(arr[p1],arr[p2]);
//         p1++;
//         p2--;
//     }
//     printArray(arr,n);
// }

// int main(){
//     int n=5;
//     int arr[] = {5,4,3,2,1};
//     reverseArray(arr,n);
//     return 0;
// }


// now let us use recursion for the same

#include<iostream>
using namespace std;

//func to print array
void printArray(int arr[],int n){
    cout<<" The reversed array is:- "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

//func to reverse arr using recursion
void reverseArray(int arr[], int start, int end){
    if(start<end){  //Base cond
        swap(arr[start],arr[end]); //processing
        reverseArray(arr,start+1,end-1);  //recursive call
    }
}

int main(){
    int n=5;
    int arr[] ={4,5,6,7,8,9};
    reverseArray(arr,0,n-1);
    printArray(arr,n);
    return 0;
}