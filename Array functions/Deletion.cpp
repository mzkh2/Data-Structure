// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int array[]={32,34,65,86,23,65,34};
    int size = sizeof(array)/sizeof(array[0]);
    
    int index;
    cout<<"Which index do you want to delete :"; cin>>index;

    for(int i = index; i<size; i++){
        array[i] = array[i+1]; //  i = i+1 because elements are shifted to the left
    } 
    size--; // -- because one array size is reduced by one
    
    // output the updated array
    for(int i = 0; i<size;i++ ){
        cout<<array[i]<<", ";
    }
    return 0;
    
}