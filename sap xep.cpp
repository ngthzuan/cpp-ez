#include <bits/stdc++.h>
    using namespace std;
        int main(){
        freopen("BAI29.INP","r", stdin);
        freopen("BAI29.OUT","w", stdout);
        int n;
            cin>>n;
            int a[n];
            vector<int>b,c;
                for (int i = 0; i< n; i++){
                    cin>>a[i];
                    if (a[i]% 2 == 0) b.push_back (a[i]);
                    else c.push_back(a[i]);
                    }
                    sort (b.begin(), b.end());
                    sort (c.begin(), c.end(), greater <int>());
                    for (int i = 0; i<b.size(); i++) cout<<b[i]<<" ";
                    for (int j = 0; j<c.size(); j++) cout<<c[j]<<" ";
                    return 0;
                    }





