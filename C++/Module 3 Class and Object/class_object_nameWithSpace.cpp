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
    cin.getline(a.name,100);
    cin >> a.roll>> a.gpa;
    cin.ignore();//ignore the enter
    cin.getline(b.name,100);
    cin >> b.roll>> b.gpa;
    cout << a.name << " "<< a.roll << " "<< a.gpa<< endl;
    cout << b.name << " "<< b.roll << " "<< b.gpa;


    /*
    Student a;
    cin.getline(a.name,100);
    cin >> a.roll>> a.gpa;
    cout << a.name << " "<< a.roll << " "<< a.gpa<< endl;
    */
    return 0;
}