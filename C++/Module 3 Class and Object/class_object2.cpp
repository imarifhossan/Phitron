#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    char name[100];
    int roll;
    double gpa;
};
int main ()
{
    Student a,b;
    a.roll = 10;
    a.gpa = 3.48;
    char temp[100] = "Adam";
    strcpy(a.name,temp);

    b.roll = 11;
    b.gpa = 4.48;
    strcpy(temp,"Johny");
    strcpy(b.name,temp);
    
    cout << a.name << " "<< a.roll << " "<< a.gpa<<endl;
    cout << b.name << " "<< b.roll << " "<< b.gpa;
    return 0;
}