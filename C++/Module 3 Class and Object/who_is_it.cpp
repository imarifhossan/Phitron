#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    string name;
    char section;
    int marks;
};

int main()
{
    // Write your code here
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        Student topper;
        for (int i = 0; i < 3; i++)
        {
            Student temp;
            cin >> temp.id >> temp.name >> temp.section >> temp.marks;
            if (i == 0)
            {
                topper = temp;
            }
            else
            {
                if (temp.marks > topper.marks)
                {
                    topper = temp;
                }
                else if (temp.marks == topper.marks)
                {
                    if (temp.id < topper.id)
                    {
                        topper = temp;
                    }
                }
            }
        }
        cout << topper.id << " " << topper.name << " " << topper.section << " " << topper.marks << endl;
    }

    return 0;
}
