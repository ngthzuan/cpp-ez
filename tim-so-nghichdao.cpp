#include <bits/stdc++.h>
    using namespace std;
        int main(){
            /*int n;
                cin>>n;
                  int x = 0;
                  int d = 0;
                  int t = 0;

                    while (n != 0){
                        t += n % 10;
                        d++;
                        x = x * 10 + n % 10;
                        n =n/10;
                    }
                    cout<<x<<" \n"<<t<<" \n"<<d;
                    return 0;*/
            string n;
                cin>>n;
                string x = "";
                int t = 0;
                    int pt = n.length();
                    for (int i = pt - 1; i >= 0; i--){
                        x = x + n[i];
                            t=t+(n[i]-'0');
                    }
                    cout<<x<<"\n"<<t<<"\n"<<pt;
                    return 0;

        }
