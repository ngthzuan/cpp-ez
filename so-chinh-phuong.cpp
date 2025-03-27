#include <bits/stdc++.h>
    using namespace std;
        /*int main(){
            int a;
                cin>>a;
                int can = sqrt(a);
                    if (can*can == a){
                        cout<<"so chinh phuong";
                    } else {
                    cout<<"khong phai";}
                    return 0;

        }*/
        bool ktscp(int a){
            int b = sqrt(a);
            if (b * b == a) return 1;
            return 0;


        }
        int main(){
            int n;
                cin>>n;
                    if (ktscp(n)){
                        cout<<"So Chinh Phuong";
                    } else {
                        cout<<"Khong phai";

                    }


        }
