#include <iostream>
#include <string>

using namespace std;

class Student {
private: 
    int roll_number;
    string name;
    float marks;

public: 
    void input() {
        cout << "Enter roll number: ";
        cin >> roll_number;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display() {
        cout << "Roll Number : " << roll_number << "\n";
        cout << "Name        : " << name << "\n";
        cout << "Marks       : " << marks << "\n";
    }
};

int main() {
    Student s[5];   

    cout << "enter the details for 5 students\n";
    for (int i = 0; i < 5; i++) 
{
        cout << "\nEntering details for student " << (i + 1) << ":\n";
        s[i].input();   
    }

    cout << "\ndisplaying details of 5 students\n";
    for (int i = 0; i < 5; i++) {
        cout << "\nStudent " << (i + 1) << " Details:\n";
        s[i].display();
}
return 0;
}

















