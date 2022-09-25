#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i< n;i++){
        cin>>arr[i];
    }

    /* -12 11 -13 -5 6 -7 5 -3 -6 */
    /* -12 11 -13 -5 6 -7 5 -3 -6 */
                        // i       j      
    /* -12 -13 -5 -7 -3 11 5 6 -6 */




    int i = 0,j = 1;
    while (i<=j && j<n){
        if(arr[i] > 0 && arr[j] < 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j++;
        }
        else if (arr[i] < 0){
            i++;
        }
        else if( j < n)
        j++;
    }
            
    for(int i = 0;i<n;i++){
        cout << arr[i] << " ";
    }

}