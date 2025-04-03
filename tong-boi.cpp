#include <bits/stdc++.h>
    using namespace std;
        int main(){
        int n;
            cin>>n;
        int tong = 0;
                for (int i=3; i<=n; i++){
                    if (i % 3 == 0 && i % 5 == 0 ){
                        cout<<i<<" ";
                        tong+=i;
                    }

                }
                cout<<"\n"<<tong;
        return 0;

        }
