#include <iostream>
using namespace std;
//initialize array sizes
int length = 5;

//initialize arrays
int num1[5] = {1,2,3,4,5};
int num2[5] = {6,7,8,9,10};

//sum function
int sum(int arr1[], int arr2[])
{
    for(int i = 0; i < length; i++ ){
            arr1[i] += arr2[i];
    }
    for(int i = 0; i < length; i++){
        cout<<arr1[i]<<" "<<endl;
    }
}

int main()
{
    sum(num1,num2);
    return 0;
}
