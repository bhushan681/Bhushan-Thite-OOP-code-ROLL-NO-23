#include <iostream>
using namespace std;
class student
{
    string name;
    float percentage;
    public:
     
    student()
    {
        name="bhushan";
        percentage=90;
    }
    void display()
    {
        cout<<"Name:"<<name;
        cout<<"\nPercentage:"<<percentage;
    }
};
int main()
{
    student s1;
    s1.display();
    return 0;
}
