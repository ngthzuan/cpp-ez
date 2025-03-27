#include <bits/stdc++.h>
    using namespace std;
        int main(){
            int n;
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
                    cout<<t<<" \n"<<x<<" \n"<<d;
                    return 0;

        }
