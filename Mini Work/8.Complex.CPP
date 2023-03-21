#include<iostream>
#include<string.h>
using namespace std;

class Complex
{
private:
    int real;
    int imaginary;
public:
    Complex()
    {
        real = 0;
        imaginary =0;
    }
    Complex(int x, int y)
    {
        real = x;
        imaginary =y;
    }
    void getInput()
    {
        cin>>real;
        cin>>imaginary;
    }
    Complex Add(Complex x)
    {
        Complex y;
        y.real = real+x.real;
        y.imaginary = imaginary+x.imaginary;
        return y;
    }

    void Display()
    {
        cout<<"Sum = "<<real<<" + "<<imaginary<<"i"<<endl;
    }


};

int main()
{
    Complex x1,x2;

    x1.getInput();
    x2.getInput();

    x2 = x2.Add(x1);

    x2.Display();
}
