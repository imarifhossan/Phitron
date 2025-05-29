#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    int roll;
    int cls;
    double gpa;
    // Student (int r,int c, int g){
    //     roll = r;
    //     cls = c;
    //     gpa =g;
    // }
};
int main ()
{
   /*
    int r,c,g;
    cin >> r>> c>> g;
    Student rahim(r,c,g);
   */
    //instead of this we can take input like this way in that case we dont need the constructor
    Student rahim;
    cin >> rahim.roll>> rahim.cls>> rahim.gpa;


    cout << rahim.roll << " "<< rahim.cls << " "<< rahim.gpa<<endl;
    return 0;
}
// using constructor when we have to manually input the value to a group its easy and with maintainable codebase
/*
#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    int roll;
    int cls;
    double gpa;
    Student (int r,int c, int g){
        roll = r;
        cls = c;
        gpa =g;
    }
};
int main ()
{
    Student rahim (1,10,2.94);
    Student karim (2,11,3.94);
    
    cout << rahim.roll << " "<< rahim.cls << " "<< rahim.gpa<<endl;
    cout << karim.roll << " "<< karim.cls << " "<< karim.gpa;
    return 0;
}
*/