#include <bits/stdc++.h>
using namespace std;
int main (){
    //string is a built in class in c++
    string s = "Hello world"; //capacity 15
    // string s = "Hello world, Bangladesh"; //capacity 23

    //measuring the size of the String
    cout <<"Size = "<< s.size()<< endl; //11

     //Return the current maximum capacity or size of this string, as its a dynamic string
    cout <<"Capacity = "<< s.capacity()<< endl; //15

    //return max size of this array
    cout <<"Max Size = "<< s.max_size()<<endl; //4611686018427387903 (depends on machine and online judge)

    //clear the whole string or delete the string
    
    
    // s.clear();
    cout <<"Clear string = "<< s<<endl;//return empty

    //empty string return true if the string is empty and return false if not, in backend it checks the string size  (s.size()==0?True:False)
    s.empty()?cout <<"Empty"<<endl:cout<<"Not Empty"<<endl;
    //or we can use this way
    if(s.size()==0){
        cout << "Empty"<<endl;
    }
    else{
        cout << "Not empty"<<endl;
    }
    //resize the string 
    // s.resize(4); //Hell
    //s.resize(15); //Hello worldnulnulnulnulnul return empty spaces as null
    s.resize(15,'*');//Hello worldxxxx return empty spaces with *
    cout << s<< endl;
    return 0;
}
