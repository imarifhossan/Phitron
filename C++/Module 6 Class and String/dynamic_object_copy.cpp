#include <bits/stdc++.h>
using namespace std;
class Cricketer
{
public:
    string country;
    int jersey;
    Cricketer (string country,int jersey){
        this->country=country;
        this->jersey=jersey;
    }
};
int main()
{
    Cricketer* dhoni = new Cricketer("Dhoni",100);
    Cricketer* kohli = new Cricketer("Kohli",90);
    // cout << dhoni->country << " "<< dhoni->jersey<<endl;
    // cout << kohli->country << " "<< kohli->jersey<<endl;
    
    // kohli = dhoni;//not work
    
    *kohli = *dhoni;

    // kohli->country=dhoni->country;
    // kohli->jersey=dhoni->jersey;
    delete dhoni;
    cout << kohli->country << " "<< kohli->jersey<<endl;
    return 0;
}