#include <iostream>
using namespace std;

class abc
{
public: 
    int A;
    void operator - ()
    {
        A = -A; 
    }
};

int main()
{
    abc B;   
    B.A = 25;  

    cout << "Before: " << B.A << endl; 

    -B; 

    cout << "After: " << B.A << endl;  
    return 0;
    

}


