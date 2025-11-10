include <iostream>
#include <string>

using namespace std;

// Base class Ilogin
class Ilogin {
protected:
    string name;
    string password;

public:
    
    virtual void accept() {
        cout << "Enter User Name: ";
        cin >> name;
        cout << "Enter Password: ";
        cin >> password;
    }

    
    virtual void display() {
        cout << "User Name: " << name << endl;
        cout << "Password: " << password << endl;
    }
};


class emaillogin : public Ilogin {
private:
    string email_id;

public:
    
    void accept() override {
        Ilogin::accept(); 
        cout << "Enter Email ID: ";
        cin >> email_id;
    }

    
    void display() override {
        cout << "\n--- Email Login Details ---" << endl;
        Ilogin::display(); 
        cout << "Email ID: " << email_id << endl;
    }
};


class memberlogin : public Ilogin {
private:
    string membership_id;

public:
    
    void accept() override {
        Ilogin::accept(); 
        cout << "Enter Membership ID: ";
        cin >> membership_id;
    }

    
    void display() override {
        cout << "\n--- Membership Login Details ---" << endl;
        Ilogin::display(); 
        cout << "Membership ID: " << membership_id << endl;
    }
};

int main() {
    // Create a pointer of the base class type
    Ilogin *ptr;

    // --- Demonstrate Email Login ---
    cout << "--- Enter Details for Email Login ---" << endl;
    emaillogin email_user;
    ptr = &email_user; // Pointer now holds address of emaillogin object

    ptr->accept();  // Calls accept() of emaillogin class
    ptr->display(); // Calls display() of emaillogin class


    // --- Demonstrate Membership Login ---
    cout << "\n\n--- Enter Details for Membership Login ---" << endl;
    memberlogin member_user;
    ptr = &member_user; // Pointer now holds address of memberlogin object

    ptr->accept();  // Calls accept() of memberlogin class
    ptr->display(); // Calls display() of memberlogin class

    return 0;
}
*/
#include <iostream>
using namespace std;

class llogin {
protected:
    string name, password;
public:
    virtual void accept() {
        cout << "Enter name: "; cin >> name;
        cout << "Enter password: "; cin >> password;
    }
    virtual void display() {
        cout << "Name: " << name << "\nPassword: " << password << endl;
    }
};

class emaillogin : public llogin {
    string email;
public:
    void accept() {
        llogin::accept();
        cout << "Enter email: "; cin >> email;
    }
    void display() {
        cout << "\nEmail Login:\nName: " << name 
             << "\nPassword: " << password 
             << "\nEmail: " << email << endl;
    }
};

class membershiplogin : public llogin {
    string memberID;
public:
    void accept() {
        llogin::accept();
        cout << "Enter Membership ID: "; cin >> memberID;
    }
    void display() {
        cout << "\nMembership Login:\nName: " << name 
             << "\nPassword: " << password 
             << "\nMember ID: " << memberID << endl;
    }
};

int main() {
    llogin *ptr;
    emaillogin e; membershiplogin m;

    ptr = &e; ptr->accept();
    ptr = &m; ptr->accept();

    ptr = &e; ptr->display();
    ptr = &m; ptr->display();

    return 0;
}