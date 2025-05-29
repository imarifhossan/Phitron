#include <bits/stdc++.h>
using namespace std;
int main ()
{
    int a,b,c;
    cin >> a >> b >>c;
    int minValue = min(a,min(b,c));
    int maxValue = max(a,max(b,c));
    cout << minValue << " "<< maxValue; 
    return 0;
}