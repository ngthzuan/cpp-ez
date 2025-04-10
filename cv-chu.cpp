#include <bits/stdc++.h>
using namespace std;
    int main(){
        freopen ("bai36.inp", "r", stdin);
        //freopen ("bai36.out", "w", stdout);
        string s,x,c,d;
        getline(cin, s);
        x = c = s;

        int sl = x.length();
        if (sl>=3){
            x[2] = toupper(x[2]);
            cout<<x<<endl;

        }
            x = s;
            if (sl>=4){
            x[4] = tolower(x[4]);
            cout<<x;
        }
        x = s;
        transform(x.begin(), x.end(), x.begin(), ::toupper);
        cout<<"\n"<<x;
        x = s;
 transform(x.begin(), x.end(), x.begin(), ::tolower);
    cout<<"\n"<<x;

    for (int i = 0; i < sl; i++){
        if (i == 0 || s[i - 1]== ' '){
            x[i]= toupper(x[i]);

        }

    }
cout<<"\n"<<x;
    }
