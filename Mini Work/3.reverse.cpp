#include <iostream>
using namespace std;

class Reverse {
private:
    int num;
public:
    Reverse()
    {
        num=0;
    }

    void getInput()
    {
        cout << "Enter an integer: ";
        cin >> num;
    }

    void doReverse()
    {
        int rev;
        while(num)
        {
            rev = (rev*10)+(num%10);
            num = num/10;
        }
        cout<<"Reverse Value: "<<rev<<endl;
    }
};

int main() {
    Reverse rev;
    rev.getInput();
    rev.doReverse();

    return 0;
}

