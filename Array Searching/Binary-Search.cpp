#include <iostream>
using namespace std;

int binarySearch(int array[],int size,int key){
    int start = 0;
    int end = size-1;
    
    while(start<=end){
        int mid = (start + end) / 2;

        if( array[mid] == key ){
            return mid; // return the index of the value if found
        }
        
        if( array[mid] > key ){
            end = mid-1; // move the end pointer to mid-1 because the value is in the left half of the array
        } 
        
        if( array[mid] < key ){
            start = mid+1;  // move the start pointer to mid+1 because the value is in the right half of the array
        }
    }
    return -1; // return -1 if the value is not found in the array
}

int main()
{
    int array[]={23,27,32,36,37,42,45,48,57,68,75,79}; // sorted array
    int size = sizeof(array)/sizeof(array[0]); // creates a dynamic variable
    
    int key,result;
    cout<<"What value do you want to find: "; cin>>key;
    result = binarySearch(array,size,key);
    
    if( result != -1){ // if the value is found in the array
        cout<<endl<<"Value have been found at index: "<< result;
    }else{
        cout<<endl<<"Value does not exists";
    }
    return 0;
}