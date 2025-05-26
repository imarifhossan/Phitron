#include <iostream>
using namespace std;
int main (){
    //when the value is fixed in that case we use switch case
    //If it found one case true then if we do not use break than all the others code after that executed
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Saturday\n";
        break;
    case 2:
        cout << "Sunday\n";
        break;
    case 3:
        cout << "Monday\n";
        break;
    case 4:
        cout << "Tuesday\n";
        break;
    case 5:
        cout << "Wednesday\n";
        break;            
    case 6:
        cout << "Thursday\n";
        break;
    case 7:
        cout << "Friday\n";
        break;    
    default:
        break;
    }
    return 0;
}