#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    int roll;
    int cls;
    double gpa;
    //if we use the same name of variable in our constructor than we need this keyword
    Student (int roll,int cls, int gpa){
        this->roll = roll;
        this->cls = cls;
        this->gpa =gpa;
        //or
     /*
        (*this).roll = roll;
        (*this).cls = cls;
        (*this).gpa = gpa;
     */
    }
};
int main ()
{
 
    Student* karim =new Student(2,11,3.94);
    
   
    cout << (*karim).roll << " "<< karim->cls << " "<< karim->gpa;
    return 0;
}