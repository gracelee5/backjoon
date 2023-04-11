#include <iostream>
#include <cstring>

using namespace std;

int num;
int recursion(const char *s, int l, int r){
    
    num++;
    if(l >=r) return 1;
    else if(s[l] != s[r]) return 0;
    else return recursion(s, l+1, r-1);
}

int isPalindrome(const char *s){
    return recursion(s, 0, strlen(s)-1);
}
int main(){
    int T;
    string S;
    cin>>T;
    for ( int i; i++; i<T){
        cin>>S;
        cout<<isPalindrome(S.c_str())<<" "<<num<<endl;
        num=0;
    }
}