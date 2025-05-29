#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;
    // if we use the same name of variable in our constructor than we need this keyword
    Student(int roll, int cls, double gpa)
    {
        this->roll = roll;
        this->cls = cls;
        this->gpa = gpa;
        // or
        /*
           (*this).roll = roll;
           (*this).cls = cls;
           (*this).gpa = gpa;
        */
    }
};
Student fun()
{
    Student karim(2, 11, 3.94);
    return karim;
}
int main()
{
    Student obj= fun();
    cout << obj.roll << " " << obj.cls << " " << obj.gpa;
    return 0;
}