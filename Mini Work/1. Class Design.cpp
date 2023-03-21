#include <iostream>
#include <string.h>

using namespace std;

//Vehicle Class

class Vehicle
{
private:
    int serialnumber;
    int makingyear;
    char model[100];

public:

    //getValue Function
    void getValue()
    {
        cout<<"Enter Serial: ";
        cin>>serialnumber;
        cout<<"Enter Making Year: ";
        cin>>makingyear;
        cout<<"Enter Model: ";
        cin>>model;
    }

    //setValue Function
    void setValue(int x, int y, char z[])
    {
        serialnumber=x;
        makingyear=y;
        strcpy(model,z);
    }

    //printValue Function
    void printValue()
    {
        cout<<"\n\n";
        cout<<"Serial Number: "<<serialnumber<<endl;
        cout<<"Making Year: "<<makingyear<<endl;
        cout<<"Model: "<<model<<endl;
    }
};



int main()
{
    // object 1
    Vehicle v1;
    v1.getValue();
    v1.printValue();

    // object 2
    Vehicle v2;
    v2.setValue(1001, 2020, "Y-20");
    v2.printValue();

    return 0;
}


