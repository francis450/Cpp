#include <iostream>

using namespace std;

//Factorial function
int factorial(int num)
{
    if(num>=1)
    {
        return num * factorial(num - 1);
    }else{
        return 1;
    }
}


int main()
{
    int x;
    cout<<"Please enter a number: ";
    cin>>x;
    cout<<"Factorial: "<<factorial(x)<<endl;
    return 0;
}
