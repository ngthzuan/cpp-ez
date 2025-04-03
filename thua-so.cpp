#include <bits/stdc++.h>
    using namespace std;
      bool ktnt(int x){

            if (x < 2) return 0;
            for (int i = 2; i * i <= x; i++)
                if (x % i == 0) return 0;
            return 1;


        }
        int main(){

        int n;
            cin>>n;
                while (n % 2 == 0) {
                    if (n % 2 == 0 ){
                        cout<<"2";
                    }
                    n /=2;
                    if(n >= 2){
                        cout<<".";
                    }
                }
                for(int j = 3; j * j<= n; j+= 2){
                while (n % j == 0){
                    if(n%j== 0 && ktnt(j)){
                        cout<<j;
                        n/=j;
                         if(n >= j){
                        cout<<".";
                        }
                        }
                }
                }

                if (n>2){
                    cout<<n;
                }





        return 0;

        }

