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
                cin>>a;
                    if (ktnt(a)){
                        cout<<"snt";
                    } else {
                    cout<<"k phai";}
                    return 0;

        }
