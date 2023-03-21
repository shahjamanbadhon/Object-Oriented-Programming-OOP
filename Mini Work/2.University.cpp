#include<iostream>
using namespace std;

class University
{
private:
    string name;
    string location;
    string mobilenumber;
    int year;
    int numberofstudent;
public:
    void getData()
    {
        cout<<"Enter University Name : ";
        cin>>name;
        cout<<"Enter University Location : ";
        cin>>location;
        cout<<"Enter University Mobile Number:";
        cin>>mobilenumber;
        cout<<"Enter University Stablish Year : ";
        cin>>year;
        cout<<"Enter Number of Universty's Stuent : ";
        cin>>numberofstudent;
        cout<<"\n";
    }
    displayData()
    {
        cout<<"\n";
        cout<<"University Name : ";
        cout<<name<<endl;
        cout<<"University Location : ";
        cout<<location<<endl;
        cout<<"University Mobile Number:";
        cout<<mobilenumber<<endl;
        cout<<"University Stablish Year : ";
        cout<<year<<endl;
        cout<<"Number of Universty's Stuent : ";
        cout<<numberofstudent<<endl;

    }
};
int main()
{
    University O[3];

    for(int i=0; i<3; ++i)
    {
        cout<<"Details For Univesity ("<<i+1<<") :"<<endl;
        O[i].getData();
    }

    for(int i=0;i<3;++i)
    {
        O[i].displayData();
    }
}
