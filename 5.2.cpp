#include <iostream>
using namespace std;

class Sum 
{
    int n;
    public:


    Sum(int num)
    {
        n = num;
    }

    void display() 
    {
        cout << "Sum from 1 to " << n << " is: " << (n * (n + 1)) / 2 << endl;
    }
};

int main() 
{
    int num;
    cout << "Enter the value of n: ";
    cin >> num;

    Sum s(num);    
    s.display();   

    return 0;
}
