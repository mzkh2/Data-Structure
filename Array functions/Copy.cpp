#include <iostream>
using namespace std;

int main()
{
    int arr1[6]={32,34,65,86,54,23};
    int arr2[6];

    for(int i=0 ; i<6 ; i++){
        arr2[i] = arr1[i]; // this will copy the value and keep the index same cuz of i    
    }
    
    // copied array
    for(int i = 0; i<6;i++ ){
        cout<<arr2[i]<<", ";
    }
    
    return 0;
}