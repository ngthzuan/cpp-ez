#include <bits/stdc++.h>
    using namespace std;

        int main(){
            int n,s1,s2,s3,s4;
            double s5,s6,s7;
               s1=s2=s3=s4=s7=0;
               s5=s6=0.0;
              
                cin>>n;
                for (int i = 1; i <= n; i++){
                    s1+=i;
                    if(i % 2 == 0){
                        s2+=i;  
                    }
                    s3 +=3;
                    if (i % 2 != 0){
                        s4+=i*i;
                    }

                    s5+=1.0/i;
                    s6 += 1.0 / (2 * i);
                    s7 += 1.0 / (2*i-1);
                }
                cout<<s1<<endl;
                cout<<s2<<endl;
                cout<<s3<<endl;
                cout<<s4<<endl;
                cout<<s5<<endl;
                cout<<s6<<endl;
                cout<<s7;
                
                return 0;
    }
              
        
