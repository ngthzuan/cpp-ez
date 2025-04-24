#include <bits/stdc++.h>
    using namespace std;
        int main(){
        freopen("bai37.inp", "r", stdin);
        int n, k, d=0;
        cin>>n>>k;
        int a[n];
        for (int i = 1; i<=n; i++){
            cin>>a[i];
        }
        for (int i = 1; i<=n; i++){
            for (int j = i; j<=n; j++){
                if (a[i]+a[j] == k){
                    cout<<i<<" "<<j<<endl; d++;
                }
            }
        }
        cout<<d;
return 0;

        }
