#include <iostream>
using namespace std;

class academics 
{
protected:         
    int marks;
};

class sports 
{
protected:         
    int score;
};


class result : protected academics, protected sports 
{
    int total_score;
public:            
    void accept() 
    {
        cout << "Enter marks: ";
        cin >> marks;
        cout << "Enter score: ";
        cin >> score;
    }

    void calculate() 
    {
        total_score = marks + score;
        cout << "Total score = " << total_score << endl;
    }
};

int main() 
{
    result r1;
    r1.accept();
    r1.calculate();
    return 0;
}

