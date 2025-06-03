#include <bits/stdc++.h>
using namespace std;
int main()
{

    string s;
    getline(cin, s); // Hello world, Welcome to the new era:P
    // Built in class ,which we can use to create a object of String
    stringstream ss(s);
    string word;
    /*
    ss >> word; //Returns Hello and remove from the string
    cout << word << endl;
    ss >> word; //Returns World, and remove from the string
    cout << word << endl;
    ss >> word; //Returns Welcome and remove from the string
    cout << word << endl;
    ss >> word; //Returns to and remove from the string
    cout << word << endl;
    ss >> word; //Returns the and remove from the string
    cout << word << endl;
    ss >> word; //Returns new and remove from the string
    cout << word << endl;
    ss >> word; //Returns era and remove from the string
    cout << word << endl;
    ss >> word; //Returns again era and remove from the string
    cout << word << endl;
    */
    int count = 0;
    while (ss >> word)
    { 
        count++;
        cout << word << endl;
    }
    /*
    Hello
    world,
    Welcome
    to
    the
    new
    era:P
    */
    cout << count <<endl; //7

    return 0;
}
