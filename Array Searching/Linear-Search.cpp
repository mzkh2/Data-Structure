#include <iostream>
using namespace std;

int main()
{
    int array[]={32,34,65,86,23,65,34};
    int size = sizeof(array)/sizeof(array[0]); // creates a dynamic variable, you can also just do size=7;
    int val;
    cout<<"What value do you want to find: "; cin>>val;
    
    // visit each element atleast once (same as Traversal)
    for(int i = 0; i<size;i++ ){ 
        if(array[i]==val){
            cout<<endl<<"Value found at index : "<<i;
            break; // brakes the loop when value is found instead of wasting resources 
        }
        
        // condition that would execute after we reach the end of array and value hasen't been found
        if(i==size-1) cout<<"Value dosent exist in the array";
    }
    return 0;
}