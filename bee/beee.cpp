#include <iostream>
using namespace std;

int main(){
    //initialize array size
    int size = 7;
    //initialize array
    int nums[size];
    //request user input
    cout<<"Please enter "<<size<<" integers:"<<endl;
    //store the values into the array
    for(int i = 0; i < size; i++)
    {
        cin>>nums[i];
    }

    //Display the array contents
    for(int i = 0; i < size; i++)
    {
        cout<<nums[i]<<endl;
    }

    return 0;
}
