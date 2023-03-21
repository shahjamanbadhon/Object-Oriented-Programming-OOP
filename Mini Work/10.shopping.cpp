#include<iostream>
using namespace std;

class Shopping
{
public:
    double price;
public:
    Shopping()
    {
        price = 51.00;
    }
    Shopping(double x)
    {
        price = x;
    }

    Shopping amount(Shopping x)
    {
        Shopping y;
        y.price = price+x.price;

        return y;
    }

    Shopping calculateAfterDiscount()
    {
        Shopping y;
        if(price>=500)
        {
            y.price = price - ((price/100)*20);

            return y;

        }
        else
        {
            y.price = price - ((price/100)*2);
            return y;
        }
    }

    Shopping calculateChange()
    {
        Shopping x;
        x.price = 1000-price;

        return x;

    }
};

int main()
{
    Shopping p1(100.00);
    Shopping p2(60.00);
    Shopping p3(90.00);
    Shopping p4(150.00);
    Shopping p5(120.00);
    Shopping p6(140.00);

    p2 = p2.amount(p1);
    p3 = p3.amount(p2);
    p4 = p4.amount(p3);
    p5 = p5.amount(p4);
    p6 = p6.amount(p5);

    p6 = p6.calculateAfterDiscount();

    p6 = p6.calculateChange();

    double total = p6.price;

    cout<<"Changes: "<<total;




}
