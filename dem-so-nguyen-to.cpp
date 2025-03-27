#include <bits/stdc++.h>
    using namespace std;
        bool ktnt(int x){

            if (x < 2) return 0;
            for (int i = 2; i * i <= x; i++)
                if (x % i == 0) return 0;
            return 1;


        }
        int main(){
            int a;
            int d = 0;
                cin>>a;
                for (int i = 2; i <= a; i++){
                    if (ktnt(i)){
                     d++;
                     cout<<i<<" ";


        }

                }
cout<<"\n"<<d;
return 0;

        }
