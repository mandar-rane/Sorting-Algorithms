#include<iostream>
using namespace std;

void swap(int arr[], int i, int j){   //swap function
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main(){
    int n = 5;
    int arr[n] = {7,4,10,8,3};
    
    for (int i = 0; i<n-1; i++){      //Selction-Sort algorithm
        int min = i;
        for (int j=i+1; j<n; j++){
            if (arr[j]<arr[min]){
                min = j;
            }
        }
        if (min != i){
            swap(arr, min, i);
        }
    }
    
    
    for(int k=0; k<n; k++){            //printing array
        cout<<arr[k]<<" ";
    }
    
    return 0;
}