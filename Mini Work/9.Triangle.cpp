#include<iostream>
#include <cmath>
using namespace std;

class Triangle
{
private:
    double h;
    double b;
public:
    Triangle()
    {
        h=0;
        b=0;
    }

    Triangle(double x, double y)
    {
        h=x;
        b=y;
    }
    Triangle(double x, int y)
    {
        h=x;
        b=y;
    }
    Triangle(int& x, double& y)
    {
        h=x;
        b=y;
    }
    Triangle(int x, int y)
    {
        h=x;
        b=y;
    }
    Triangle(const Triangle& ob)
    {
        h= ob.h;
        b= ob.b;
    }

    double area() const {
        return 0.5 * h * b;
    }

    ~Triangle() {
        cout << "Triangle object destroyed" << endl;
    }
};

int main()
{
    Triangle t1(2.0, 3);

    // pass by reference
    int b = 8;
    double h = 12.0;
    Triangle t2(b, h);


    cout << "Area of t1: " << t1.area() << endl;
    cout << "Area of t2: " << t2.area() << endl;

}
