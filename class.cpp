
#include <iostream>
#include<string>

using namespace std;

class Student {
private: 
    int roll_number;
    string name;
    float marks;

public: 
    void input() {
        cout << "Enter your roll number: ";
        cin >> roll_number;
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter your marks: ";
        cin >> marks;
    }

    void display() {

        cout << "the roll_number is"<<roll_number;
        cout << "the name of the student is"<<name;
        cout << "the marks of the student is"<<marks;
}
};

int main()
{
    Student s;     
    s.input();   
    s.display();     
    return 0;
}




































