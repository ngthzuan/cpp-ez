#include <bits/stdc++.h>
    using namespace std;
        int main(){
        int n;
        int d = 0;
            cin>>n;

                for (int i = n; i >= 1; i--){
                    for (int j = 1; j <= i; j++){
                        cout<<"*";
                    }
                    cout<<endl;
                }




              for (int i = n; i >= 1; i-=2){
                    for (int j = 1; j <= i; j++){
                        cout<<"*";
                    }
                    cout<<endl; d++;
                    for (int q = 1; q <= d ; q++){
                        cout<<" ";
                    }
                }

return 0;
        }



