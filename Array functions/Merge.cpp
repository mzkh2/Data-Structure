#include <iostream>
using namespace std;

int main()
{
    int arr1[3]={32,34,65};
    int arr2[3]={54,23,65};
    int merge[6]={};
    
    for(int i=0;i<3;i++){
        merge[i]=arr1[i]; // simple Copy method with first array
    } 
    for(int i=0; i<3 ; i++){
        merge[i+3]=arr2[i]; // same copy method but next value gets put at i+3 cuz 3 is size of arr1 so thats where first array ends.
    }
    
    // Merged array
    for(int i = 0; i<6;i++ ){
        cout<<merge[i]<<", ";
    }
    
    return 0;
}