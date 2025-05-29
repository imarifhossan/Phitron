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
//dynamic object
Student* fun()
{
    Student* karim= new Student(2, 11, 3.94);
    return karim;
}
int main()
{
    Student* p= fun();
    cout << (*p).roll << " " << p->cls << " " << p->gpa;
    return 0;
}

/*
//we get garbage value in return because whenever we are trying to return from a static object then with the end of return all data from the stack memory removed
Student* fun()
{
    Student karim(2, 11, 3.94);
    Student *p= &karim;
    return p;
}
int main()
{
    Student* p= fun();
    cout << (*p).roll << " " << p->cls << " " << p->gpa;
    return 0;
}
*/