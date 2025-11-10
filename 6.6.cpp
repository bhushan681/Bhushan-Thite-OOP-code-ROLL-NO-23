#include <iostream>
using namespace std;

class CollegeStudent {
protected:
    int student_id;
    string college_code;
public:
    void Aceept() {
        cout << "Enter Student ID: ";
        cin >> student_id;
        cout << "Enter College Code: ";
        cin >> college_code;
    }
    void Display() {
        cout << "Student ID: " << student_id << endl;
        cout << "College Code: " << college_code << endl;
    }
};


class Test : virtual public CollegeStudent {
protected:
    float percentage;
public:
    void accept1() {
        cout << "Enter Percentage: ";
        cin >> percentage;
    }
    void display1() {
        cout << "Percentage: " << percentage << endl;
    }
};

class Sports : virtual public CollegeStudent {
protected:
    char grade;
public:
    void accept2() {
        cout << "Enter Sports Grade: ";
        cin >> grade;
    }
    void display2() {
        cout << "Sports Grade: " << grade << endl;
    }
};

class Result : public Test, public Sports {
public:
    void accept() {
        Aceept();
        accept1();
        accept2();
    }
    void display() {
        cout << "student result\n";
        Display();
        display1();
        display2();
    }
};

int main() {
    Result r;
    r.accept();
    r.display();
    return 0;
}
