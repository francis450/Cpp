#include <iostream>
using namespace std;

int add(int a, int b,int c){
    int results = a+b+c;
    cout<<results;
}
int add(float one, float two)
{
    float addition = one + two;
    cout<<addition;
}

int main()
{
    //the float add
    add(3.4,2.78);

    cout<<"\n";
    //the integer add
    add(2,4,5);
    return 0;
}
