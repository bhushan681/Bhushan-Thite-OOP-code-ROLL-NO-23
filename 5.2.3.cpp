#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    float percentage;

public:
    
    Student() {
        cout << "Enter  name: ";
        cin >> name;                   
        cout << "Enter percentage: ";
        cin >> percentage;
    }

    Student(const Student &obj) {
        name = obj.name;
        percentage = obj.percentage;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() {
    Student s1;
    Student s2(s1);
    cout << "\nStudent 1 details:\n";
    s1.display();
    cout << "\nStudent 1 details (copied):\n";
    s2.display();
    return 0;
}

