#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Phone {
    private:
        string areacode;
        string exchange;
        string number;

    public:
        Phone()
        {
            areacode = "0";
            exchange = "0";
            number = "0";
        }
        Phone(string a, string b, string c) {
            areacode=a;
            exchange=b;
            number=c;
        }
        void getValue()
        {
            cout<<"Enter area: ";
            cin>>areacode;
            cout<<"Enter exchange: ";
            cin>>exchange;
            cout<<"Enter number: ";
            cin>>number;
        }

        void displayNumber() {
            cout <<"("<< areacode<<")"<<exchange<<"-"<<number<< endl;
        }
};

int main() {
    Phone phone1("212", "767", "8900");
    Phone phone2;

    phone2.getValue();

    cout<<"My number: ";
    phone1.displayNumber();

    cout<<"Your number is: ";
    phone2.displayNumber();

    return 0;
}

