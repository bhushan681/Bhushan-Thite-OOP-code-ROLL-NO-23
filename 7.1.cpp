#include <iostream>
using namespace std;

class Area
{
public:
    
    int area(int side) {
        return side * side;
    }

    
    int area(int length, int breadth) {
        return length * breadth;
    }
};

int main() 
{
    Area a;
    int side, length, breadth;

    cout << "Enter side of Classroom : ";
    cin >> side;
    cout << "Area of Classroom = " << side*side << endl;

    cout << "\nEnter length and breadth of Laboratory: ";
    cin >> length >> breadth;
    cout << "Area of Laboratory = " << length*breadth << endl;

    return 0;
}

