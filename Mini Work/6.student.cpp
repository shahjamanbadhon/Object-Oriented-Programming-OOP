#include<iostream>
#include<string.h>
using namespace std;

class Student
{
private:
    int id;
    string name;
    int mark;

public:
    Student()
    {
        id =0;
        name="name";
        mark = 0;
    }
    void getInput()
    {
        cout<<"ID: ";
        cin>>id;
        cout<<"Name: ";
        cin>>name;
        cout<<"Mark: ";
        cin>>mark;
    }
    Student Check(Student x)
    {
        Student z;
        z.id = id;
        z.name=name;
        z.mark = mark;

        Student w;
        w.id = x.id;
        w.name=x.name;
        w.mark = x.mark;

        if(mark>x.mark)
        {
            return z;
        }
        else
        {
            return w;
        }
    }
    void Display()
    {
        cout<<"\n\n\n";
        cout<<"Height Student ID: "<<id<<endl<<"Name: "<<name<<endl<<"Mark: "<<mark<<endl;
    }
};
int main()
{
    Student s[5];
    Student s1;
    for(int i=0;i<5;++i)
    {
        cout<<"Enter Student "<<i+1<<" Information:"<<endl;
        s[i].getInput();
    }

    s1 = s[0];
    for(int i=1;i<5;i++)
    {
        s1 = s1.Check(s[i]);

    }

    s1.Display();
}
