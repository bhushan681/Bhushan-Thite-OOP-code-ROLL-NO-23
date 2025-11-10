#include <iostream>
using namespace std;
class person
{
    protected:
    int age;
    string name;
};
class students:public person
{
    int roll_no;
    public:

void accept()
{
    cout<<"enter age:";
    cin>>age;
    cout<<"enter name:";
    cin>>name;
    cout<<"enter roll no:";
    cin>>roll_no;
}
void display()
{
    cout<<"your age="<<age;
    cout<<"\nyour name="<<name;
    cout<<"\nyour rol no ="<<roll_no;
}
};
int main ()
{
    students s1;
    s1.accept();
    s1.display();
    return 0;
}

