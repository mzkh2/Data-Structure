#include <iostream>
using namespace std;

void reversing(int arr[], int size){   // function that takes an array and its size as parameters
    int start = 0;
    int end= size-1;
    int temp;
    
    while(start<end){           // true until they get placed on the same index or overlap
        temp = arr[start];      // start value in temp
        arr[start] = arr[end];  // shift the end val to first
        arr[end] = temp;        // move the the first val that was put in temp to the end
        start++;                // move the start to the right
        end--;                  // move the end to the left
    }    
}

int main(){
    int arr[]={32,34,65,54,76,34,95};
    int size=sizeof(arr)/sizeof(arr[0]);
    
    reversing(arr,size);    // passes the array you want to resevrse and its size
    
    for(int i =0;i<size;i++) cout<<arr[i]<<" ";     // output the reversed array
    return 0;
}