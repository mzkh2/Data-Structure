#include <iostream>
using namespace std;

int main()
{
    int array[8]={32,34,65,86,23,65,34};
    int size = 8;
    
    int index,val;
    cout<<"At which index do you want to insert: "; cin>>index;
    cout<<"what value do you want to insert: "; cin>>val;
    
    for(int i = size-1; i>index; i--){
        array[i] = array[i-1]; // i = i-1 because values are being shifted to the right
    }
    array[index] = val;
    
    // output the updated array
    for(int i = 0; i<size;i++ ){
        cout<<array[i]<<", "; // 
    }
    return 0;
}