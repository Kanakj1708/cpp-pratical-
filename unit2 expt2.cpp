#include <iostream>
using namespace std;

class Employee
{
    int empID;
    string name;
    float salary;
    float bonus;

public:
    // Default constructor
    Employee()
    {
        empID = 0;
        name = "Unknown";
        salary = 0;
        bonus = 0;
    }

    // Parameterized constructor
    Employee(int id, string n, float s, float b)
    {
        empID = id;
        name = n;
        salary = s;
        bonus = b;
    }

    void display()
    {
        float totalSalary = salary + bonus;

        cout << "\nEmployee ID: " << empID;
        cout << "\nEmployee Name: " << name;
        cout << "\nBasic Salary: " << salary;
        cout << "\nBonus: " << bonus;
        cout << "\nTotal Salary: " << totalSalary << endl;
    }
};

int main()
{
    Employee e1;   // Default constructor

    Employee e2(101, "Kanak", 50000, 5000);  // Parameterized constructor

    cout << "--- Default Constructor ---";
    e1.display();

    cout << "\n--- Parameterized Constructor ---";
    e2.display();

    return 0;
}
Expected Outcome
--- Default Constructor ---
Employee ID: 0
Employee Name: Unknown
Basic Salary: 0
Bonus: 0
Total Salary: 0

--- Parameterized Constructor ---
Employee ID: 101
Employee Name: Kanak
Basic Salary: 50000
Bonus: 5000
Total Salary: 55000
