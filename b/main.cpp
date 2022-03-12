#include <iostream>

using namespace std;

int main()
{
    //initialize array size
    int size = 6;
    //initialize array
    int nums[size];
    //request user input
    cout<<"Please enter "<<size<<" numbers:"<<endl;
    //store the numbers in the array
    for(int i = 0; i < size; i++)
    {
        cin>>nums[i];
    }
    //display array contents
    cout<<"Array Contents:";
    for(int i = 0;i < size; i++)
    {
        cout<<nums[i]<<" ";
    }


    return 0;
}
