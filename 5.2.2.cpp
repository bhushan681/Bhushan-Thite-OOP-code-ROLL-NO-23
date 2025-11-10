#include <iostream>
using namespace std;
class student
{
    string name;
    float percentage;
    public:
    
    student(float p,string n)
    {
        percentage=p;
        name=n;
        
    }
    void display()
    {
        cout<<"Percentage:"<<percentage;
        cout<<"\nName:"<<name;
    }
};
int main()
{
    student s1(90,"Bhushan");
    s1.display();
    return 0;
}
