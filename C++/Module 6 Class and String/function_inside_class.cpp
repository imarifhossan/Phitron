#include <bits/stdc++.h>
using namespace std;
class Student {
    public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name, int roll, int math, int english){
        this->name=name;
        this->roll=roll;
        this->math=math;
        this->english=english;
    }
    void hello(){
        cout << "Hello from "<< name << endl;
    }
    void total(){
        cout << "Total marks of " << name <<" "<< math+english<<endl;
    }
};
int main (){
    Student john("John Doe",22,80,60);
    // cout << john.name<<endl;
    john.hello();
    john.total();
    Student ama("Ama Store",21,90,40);
    ama.hello();
    ama.total();
    return 0;
}