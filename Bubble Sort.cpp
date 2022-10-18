#include<iostream>
using namespace std;

void swap(int arr[], int i, int j){   //swap function
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


int main(){
    int n = 5;
    int arr[n] = {3,2,8,4,9};
    
    for (int i=0; i<n-1; i++){        //Bubble-Sort Algorithm
        for (int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                swap(arr, j, j+1);
            }
        }
    }
    
    for(int k=0; k<n; k++){            //printing array
        cout<<arr[k]<<" ";
    }
    
    return 0;
}