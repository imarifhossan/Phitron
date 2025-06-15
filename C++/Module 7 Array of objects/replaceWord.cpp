#include <bits/stdc++.h>
using namespace std;
int main (){
    int tc;
    cin >> tc;
    while(tc--){
        string sentence , target_st;
        cin >> sentence >> target_st;
        while(sentence.find(target_st)!=string::npos){
            sentence.replace(sentence.find(target_st),target_st.size(),"@");
        }
        cout << sentence <<endl;
    }
    return 0;
}
//input
/*
3
helloworld wor
mynameisistiaq is
phitronisgoodphitronisgood good
*/
/*
hello@ld
myname@@tiaq
phitronis@phitronis@
*/