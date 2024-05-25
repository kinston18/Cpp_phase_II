#include<iostream>
#include<string>
using namespace std;

bool Palindrome(int i, const string &s){

    if(i>=s.size()/2)
    return true;

    if(s[i] != s[s.size()-i-1])
    return false;

    return Palindrome(i+1,s);
}

int main(){
    string s = "madam";
    cout<<Palindrome(0,s);
    cout<<endl;

    return 0;
}


// #include <iostream>
// #include <string>

// using namespace std;

// bool Palindrome(int i, const string &s) {
//     if (i >= s.size() / 2)
//         return true;
//     if (s[i] != s[s.size() - i - 1])
//         return false;
//     return Palindrome(i + 1, s);
// }

// int main() {
//     string s = "racecar";
//     cout << (Palindrome(0, s) ? "Palindrome" : "Not a palindrome") << endl;
//     return 0;
// }
