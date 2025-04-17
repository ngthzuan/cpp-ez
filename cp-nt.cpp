#include <bits/stdc++.h>
    using namespace std;
  bool ktnt(int x){

            if (x < 2) return 0;
            for (int i = 2; i * i <= x; i++)
                if (x % i == 0) return 0;
            return 1;


        }


        bool ktscp(int a){
            int b = sqrt(a);
            if (b * b == a) return 1;
            return 0;


        }
int tcs(int y) {
    int t = 0;
    while (y != 0) {
        t += (y % 10);
        y /= 10;
    }
    return t;
}
int main() {
    int maxnt=INT_MIN;
    int maxscsnt=INT_MIN;
    int mincp=INT_MAX;
    int mintcscp=INT_MAX;
    freopen("bai37.inp", "r", stdin);
    int n, m, d=0;
    vector <int> a,b;
    cin >> n >> m;
    cout << n << " " << m << endl;
int d1 = 0;
int d2 = 0;
for (int i = n; i<=m; i++){
    if (ktnt(i)){
        a.push_back(i);
        
    if (maxscsnt<tcs(i)){
        maxscsnt = tcs(i);
        maxnt=i;
    }
    }
    if (ktscp(i)){
            
            b.push_back(i);
        if (mintcscp>tcs(i)){
        mintcscp = tcs(i);
        mincp=i;
    }

        }


    }
    for (int i = 0; i < a.size();i++){
        cout<<a[i]<<" ";
    }


cout<<"\n"<<a.size()<<" "<<maxnt<<"\n";
for (int i=0; i<b.size(); i++){

    cout<<b[i]<<" ";
}
cout<<"\n"<<b.size()<<" "<<mincp;

    return 0;
}







