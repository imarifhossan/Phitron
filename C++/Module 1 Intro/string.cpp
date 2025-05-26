#include <iostream>
using namespace std;
int main (){
    int x;
    cin >> x;//15
    cin.ignore();//when  using   getline, ignoring the first  input after space
    char s[100];
    // cin >> s;//hello world
    cin.getline(s,100);

    // cout  << s<< endl;  //hello  (when we use cin)
    //when we need  to take input with space  we have to use it getline
    cout  << x<<endl <<s<< endl;  //5 <newline emptyspace>

    return 0;
}