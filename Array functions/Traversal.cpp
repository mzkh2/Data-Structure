#include <iostream>
using namespace std;

int main()
{
    int array[]={32,34,65,86,23,65,34};
    int size = sizeof(array)/sizeof(array[0]); // creates a dynamic variable, you can also just do size=7;

    // visit each element atleast once
    for(int i = 0; i<size;i++ ){
        cout<<array[i]<<", ";
    }
    
    return 0;
}