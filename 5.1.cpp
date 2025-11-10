#include <iostream>
using namespace std;
class sum
{
    int n;
    public:
    
    sum()
    {
        cout<<"enter the value of n:";
        cin>>n;
    }
    
    void display()
    {
        cout << "Sum from 1 to " << n << " is: " << (n * (n + 1)) / 2 << endl;
    

    }
};
int main()
{
    sum s1;
    s1.display();
    return 0;
}
