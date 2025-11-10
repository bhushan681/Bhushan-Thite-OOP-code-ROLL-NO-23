#include <iostream>
using namespace std;

class Sum 
{
    public:
    
    int sum(int a1,int a2,int a3,int a4,int a5,int a6,int a7,int a8,int a9,int a10) 
    {
        return a1+a2+a3+a4+a5+a6+a7+a8+a9+a10;
    }
    
    float sum(float f1,float f2,float f3,float f4,float f5) 
    {
        return f1+f2+f3+f4+f5;
    }
};

int main() 
{
    Sum s;
    int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10;
    cout<<"Enter 10 integer values: ";
    cin>>a1>>a2>>a3>>a4>>a5>>a6>>a7>>a8>>a9>>a10;
    cout<<"Sum of 10 integers = "<<a1+a2+a3+a4+a5+a6+a7+a8+a9+a10<<endl;
    float f1,f2,f3,f4,f5;
    cout<<"\nEnter 5 float values: ";
    cin>>f1>>f2>>f3>>f4>>f5;
    cout<<"Sum of 5 floats = "<<f1+f2+f3+f4+f5<<endl;

    return 0;
}


