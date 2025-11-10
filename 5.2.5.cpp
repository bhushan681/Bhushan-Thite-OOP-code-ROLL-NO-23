#include <iostream>
#include <string>
using namespace std;

class Student {
    string name;
    int rollNo;
    float percentage;

public:
    
    Student() {
        name = "bhushan";
        rollNo = 23;
        percentage = 99;
    }

    
    Student(string n, int r) {
        name = n;
        rollNo = r;
        percentage = 89;
    }

    
    Student(string n, int r, float p) {
        name = n;
        rollNo = r;
        percentage = p;
    }

    void display() {
        cout << "Name: " << name
             << "\nRoll No: " << rollNo
             << "\nPercentage: " << percentage << "%" << endl;
    }
};

int main() {
    Student s1;
    Student s2("arjun", 26);
    Student s3("shreyas", 21, 88.5);
    s1.display();
    s2.display();
    s3.display();

    return 0;
}
