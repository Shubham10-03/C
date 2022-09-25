#include<iostream>
using namespace std;


bool binSearch(int arr[], int n,int size){
    int s = 0, e = size-1;
    int mid = s + (e-s)/2;
    while(s<e){
        if(arr[mid] == n){
            return true;
        }
        if (n < arr[mid] ){
            e = mid-1;
        }
        if(n > arr[mid]){
            s = mid+1;
        }
        mid = s + (e-s)/2;
    }
    return false;
}

int main(){
    int n,num;
    cin>>n;
    int arr[n];
    for(int i = 0; i< n;i++){
        cin>>arr[i];
    }
    cin>>num;
    cout << binSearch(arr,num,n);
}