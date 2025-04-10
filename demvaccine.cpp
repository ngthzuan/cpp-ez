#include <bits/stdc++.h>
using namespace std;
    int main(){
        freopen ("bai35.inp", "r", stdin);
        freopen ("bai35.out", "w", stdout);

            int n,m,d1 = 0,d2=0,d3=0,d4=0;
            int a1 = 0, a2 = 0, a3 = 0, a4=0;


            cin>>n>>m;
             int a[n], b[m];


               for (int i = 1; i <= n; i++){
                    cin>>a[i];
                    if (a[i] == 1) d1++;
                    else if (a[i] == 2) d2++;
                   else if(a[i] == 3) d3++;
                    else d4++;

               }
                   for (int i = 1; i <= m; i++){
                    cin>>b[i];
                    if (b[i] == 1) d1++;
                    else if (b[i] == 2) d2++;
                   else if(b[i] == 3) d3++;
                    else d4++;

               }
                cout<<d1<<" "<<d2<<" "<<d3 <<" "<<d4<<endl;

                cout<<(d1+d2+d3)/2 + d4/2;
                 cout<<"\n"<<(d1+d2+d3)%2 + d4%2;



return 0;

    }
