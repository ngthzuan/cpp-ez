#include <bits/stdc++.h>
#include<windows.h>
    using namespace std;
       bool check(int a, int b, int c){
            return (a+b>c) && (a + c>b) && (b+c > a);
       }
       void loaitamgiac(int a,int b,int c){
            if (a == b && b == c ){
                cout<<"\nLoại: Tam Giác Đều\n--------------------------------------------";
            } else if (a == b || a == c || b == c){
                cout<<"\nLoại: Tam Giác Cân\n------------------------------------------------";
            } else if ((a*a)+(b*b)==(c*c) || (a*a)+(c*c)== (b*b)|| (b*b)+ (c*c)== (a*a)){
                cout<<"\nLoại: Tam Giác Vuông\n-----------------------------------------";
            } else {
                cout<<"\nLoại: Tam Giác Thường\n----------------------------------------------";
            }
       }
       void chuvi(int a,int b,int c){
            cout<<"\nChu vi: "<<a + b + c<<"\n------------------------------------------";
    }
        double dient(int a, int b, int c){
                double p = (a + b + c)/2.0;
                return sqrt(p*(p-a)*(p-b)*(p-c));

        }
        int main() {
            SetConsoleOutputCP(65001);
            int x,y,z;
            cin>>x>>y>>z;
            if(check(x,y,z)){
                cout<<"\n---------------------------------"<<endl;
                cout<<"Chính Xác Là Tam Gíac\n----------------------------------";
                loaitamgiac(x,y,z);
                chuvi(x,y,z);
            } else {
                cout<<"Không Phải Tam Giác ";
            }



            int a =x;
            int b =y;
            int c = z;

           double de = dient(x,y,z);

            if(de > -1){
                    cout<<"\nDiện tích: "<<de<<"\n---------------------------------------";
            double ha = 2 * de / a;
            double hb = 2 * de / b;
            double hc = 2 * de / c;

            cout<<"\n"<<round(ha)<<" "<<round(hb)<<" "<<round(hc);} else {
                cout<<"";
            }
            return 0;
        }
