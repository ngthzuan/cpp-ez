#include <bits/stdc++.h>
    using namespace std;
    bool kt(int n){
    return (n%4==0&&n%100!=0||n%400==0);}
    int layngay(int t, int nam){
       switch(t) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            return 31;
        case 4:
        case 6:
        case 9:
        case 11:
            return 30;
        case 2:
            if (kt(nam)) {
                return 29;
            } else {
                return 28;
            }
        default:
            return -1;
    }
    }
        int main(){
        freopen("bai37.inp","r", stdin);
        int n ,t,nam;

        cin>>n>>t>>nam;
        int ta = layngay(t,nam);
            if (n < 1 || n > ta) {
        cout << "K hop le";
          return 0;
    } else {
        n = n + 1;}
        if (n>ta)t+=1;
        if (n>ta) n = 1;
        if (t>12) t = 1;nam+=1;

        cout<<n<<" "<<t<<" "<<nam;

        }







