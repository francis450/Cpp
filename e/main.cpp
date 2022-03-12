#include <iostream>
using namespace std;

//super class
class shapes{
public:
    void setbreadth(int b){
        width = b;
    }
    void setheight(int h){
        height = h;
    }

protected:
    int width;
    int height;
};

//sub class
class rectangle: public shapes{
public:
    int computeArea()
    {
        return (width * height);
    }
};

int main()
{
    rectangle rect;

    rect.setbreadth(56);
    rect.setheight(34);

    cout<< "Total area: "<<rect.computeArea()<<endl;

    return 0;
}
