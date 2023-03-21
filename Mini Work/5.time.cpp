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
    void getTimes()
    {
        cout<<"Enter Hours: ";
        cin>>hours;
        cout<<"Enter Minutes: ";
        cin>>minutes;
        cout<<"Enter Seconds: ";
        cin>>seconds;
    }
    void DisplayTimeInSeconds()
    {

        seconds = (60*60*hours)+(60*minutes)+seconds;
        cout<<"TotalSeconds: "<<seconds<<endl;
    }
};

int main()
{
    time T;
    T.getTimes();
    T.DisplayTimeInSeconds();
}
