#include <iostream>
using namespace std;

class student
{
private:
    int roll;
    string name;
    int math_marks;
    int phy_marks;
    int chem_marks;

public:
    student(int r, string n, int mm, int pm, int cm);
    int total_marks();
    float average();
    char Grade();
};

student::student(int r, string n, int mm, int pm, int cm)
{
    roll = r;
    name = n;
    math_marks = mm;
    phy_marks = pm;
    chem_marks = cm;
}

int student::total_marks()
{
    return math_marks + phy_marks + chem_marks;
}

float student::average()
{
    return total_marks() / 3;
}
char student::Grade()
{
    // float average = total_marks() / 3;

    if (average() > 60)
        return 'A';
    else if (average() >= 40 && average() <= 60)
        return 'B';
    else
        return 'C';
}

int main()
{
    int roll;
    string name;
    int math_marks;
    int phy_marks;
    int chem_marks;

    cout << "Enter the rollnumber of the student: ";
    cin >> roll;

    cin.ignore();
    cout << "Enter the name of the student: ";
    getline(cin, name);

    cout << "Enter math marks: ";
    cin >> math_marks;

    cout << "Enter physics marks: ";
    cin >> phy_marks;

    cout << "Enter chemistry marks: ";
    cin >> chem_marks;

    cout << "\nStudent Name: " << name << endl;
    cout << "Student Roll number: " << roll << endl;

    student s(roll, name, math_marks, phy_marks, chem_marks);
    cout << "Total Marks: " << s.total_marks() << endl;
    cout << "Average: " << s.average() << endl;
    cout << "Grade: " << s.Grade() << endl;

    return 0;
}