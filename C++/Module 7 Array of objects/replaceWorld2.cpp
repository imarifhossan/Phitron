#include <bits/stdc++.h>
using namespace std;
int main (){
    int tc;
    cin >> tc;
    for(int t=0; t<tc; t++){
        string s,ts;
        cin >> s>>ts;
        while(s.find(ts)!=string::npos){
            int index = s.find(ts);
            int tsSize=ts.size();
            s.replace(index,tsSize,"#");
        }
        cout << s<<endl;
    }
    return 0;
}