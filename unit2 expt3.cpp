#include <iostream>
using namespace std;

class Student
{
    int rollNo;
    string name;

    static int count;   // Static data member

public:
    Student(int r, string n)
    {
        rollNo = r;
        name = n;
        count++;
    }

    // Static member function
    static void showCount()
    {
        cout << "Total Students: " << count << endl;
    }

    // Friend function
    friend void display(Student s);

    // Friend class
    friend class Teacher;
};

// Definition of static data member
int Student::count = 0;

// Friend function
void display(Student s)
{
    cout << "\nRoll No: " << s.rollNo;
    cout << "\nName: " << s.name << endl;
}

// Friend class
class Teacher
{
public:
    void showStudent(Student s)
    {
        cout << "\n[Friend Class]";
        cout << "\nRoll No: " << s.rollNo;
        cout << "\nName: " << s.name << endl;
    }
};

int main()
{
    Student s1(101, "Kanak");
    Student s2(102, "Rahul");

    cout << "--- Student Details ---";
    display(s1);
    display(s2);

    cout << "\n--- Static Member Function ---";
    Student::showCount();

    Teacher t;

    t.showStudent(s1);

    return 0;
}
Expected Outcome
--- Student Details ---
Roll No: 101
Name: Kanak

Roll No: 102
Name: Rahul

--- Static Member Function ---
Total Students: 2

[Friend Class]
Roll No: 101
Name: Kanak
