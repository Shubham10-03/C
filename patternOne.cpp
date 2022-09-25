#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = n;
    while(i>=n){
        int j = n;
        while(j>=n){
            cout<<j<<" ";
            j--;
        }
        cout<<endl;
        i--;
    }
}