#include <bits/stdc++.h>
    using namespace std;
        int main(){
            int sao;
                cin>>sao;
                    for (int i = 1; i <= sao; i++){
                        for (int j = 1; j <= i; j++ ){
                            cout<<"*";

                            }
                            cout<<endl;
                        }
                    for (int s = sao - 1 ; s >=1; s--){

                        cout << string(sao - s, ' '); // In khoảng trắng để căn giữa

                        cout << string(2 * s - 1, '*') << endl; // In số lượng sao giảm dần

                    }

                    return 0;
            }
