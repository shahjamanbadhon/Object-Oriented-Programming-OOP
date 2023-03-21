#include<iostream>
using namespace std;

class time
{
private:
    int hours;
    int minutes;
    int seconds;
public:
    time()
    {
        hours=0;
        minutes=0;
        seconds=0;
    }
    time(int h,int m,int s)
    {
        hours=h;
        minutes=m;
        seconds=s;
    }


    time add_time(time t2)
    {
        time sum;

        sum.seconds=seconds+t2.seconds;
        sum.minutes=minutes+t2.minutes+(sum.seconds/60);
        sum.hours=hours+t2.hours+(sum.minutes / 60);
        sum.seconds=sum.seconds% 60;
        sum.minutes=sum.minutes%60;

        return sum;
    }

    void display()
    {
        cout<<"Time: "<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }
};


int main()
{
    time t1(2, 55, 40);
    time t2(5, 20, 30);

    cout <<"Time 1: ";
    t1.display();

    cout <<"Time 2: ";
    t2.display();

    t1=t1.add_time(t2);
    t1.display();

    return 0;
}

