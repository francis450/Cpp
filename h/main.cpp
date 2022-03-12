#include <iostream>

using namespace std;
int balance = 9000;
int withdraw(int amount){
    while(amount < balance){
        cout<< "withdrawal successful";
    }
    cout<<"Withdrawal failed";
}

int main()
{
    int x;
    cout<<"Enter amount:";
    cin>>x;
    withdraw(x);
    return 0;
}
