#include <bits/stdc++.h>
using namespace std;
int main (){
    string s = "Hello";
    string s2 = "World";
    // concatenate two string

    // s+=s2; 
    // s.append(s2);

    // cout << s << endl; //Hello World
    // now s = "Hello World"
    
    //it add a single character end of the string 
    // s.push_back('A');

    //remove the last element
    // s.pop_back();
    // cout << s << endl; //Hell
    // s.pop_back();
    // cout << s << endl;//Hel
    // s.pop_back();
    // cout << s << endl;//He
    // s.pop_back();
    // cout << s << endl;//H
    //    s.pop_back();
    // cout << s;//


    //erase function
    // string s3= "Hello World";
    // cout << s3 <<" Size now = "<< s3.size()<< endl; 
    // // s3.erase(5);//remove everything start with the index 5 so return Hello
    // s3.erase(5,2);//From index 5 , it removes only 2 elements one space( ) another one is (W) Helloorld
    // cout << s3<<" Size now = "<< s3.size() << endl; 
    //or we can use this, difference  you can insert multiple character now  s+="String" or s.append("String")
    // s+="A"; 
    // s+=" Bangladesh"; //Hello World Bangladesh
    //  s.append("A");
    //  s.append(" Bangladesh");
    // cout << s << endl; 

    //adding 
    // s[0]='G'; //we can do this even the string current size we can change any of the character but we can not add something in any index which is greater or equal to the size because in this way we can not increase the array size
    // s[5]='P';//not working
    // s[6]='P'; //not working
    // cout << s << endl; 



    //assign any string
    // s=s2;
    // or built in function
    // s.assign(s2);
    // cout << s << endl; //now s is world instead of Hello



    //replace 
    string s3 = "Hello World";
    // s3.replace(6,5,"Bangladesh"); //Hello Bangladesh
    // s3.replace(6,0,"Bangladesh");//Hello BangladeshWorld
    // s3.replace(5,1,"Bangladesh");//HelloBangladeshWorld



    //insert 
    s3.insert(5,"Buddy"); //HelloBuddy World
    cout << s3<< endl;

    return 0;
}
