#include<iostream>
using namespace std;

bool isPrime(int n){
    int i = 2;
    bool ans = true;
    while(i<n){
        if (n%i == 0){
            ans = false;
        }
        i++;
    }
    return ans;
}
int main(){
    int i = 2;
    int n;
    cin>>n;
    if(isPrime(n)){
        cout<<"Prime\n";
    }
    else{
        cout<<"Not Prime\n";
    }
    
}