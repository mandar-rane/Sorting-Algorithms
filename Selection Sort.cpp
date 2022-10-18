#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int arr[n] = {3,2,8,4,9};
    
    for (int i=1; i<n; i++){          //Selection-Sort algorithm
        int temp = arr[i];
        int j=i-1;
        while (temp<arr[j] && j>=0){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    
    
    
    for(int k=0; k<n; k++){            //printing array
        cout<<arr[k]<<" ";
    }
    
    return 0;
}