#include <iostream>
using namespace std;

long long int factorial(int N){
    if(N<=1) {
        return 1;
        }
    else{
        return N*factorial(N-1);
        }
    
}

int main(){
    int input;
    cin>>input;
    
    cout << factorial(input);
}
