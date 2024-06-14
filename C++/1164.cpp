// Perfect Number

#include <iostream>
 
using namespace std;
 
int main() {
 
   int n;
   cin>>n;
   for(int i=1; i<=n; i++){
       int x,sum=0;
       cin>>x;
       for(int i2=1; i2<x; i2++){
           if(x%i2==0){
               sum+=i2;
           }
       }
       if(sum==x){
           cout<<x<<" eh perfeito"<<endl;
       }else if(sum!=x){
            cout<<x<<" nao eh perfeito"<<endl; 
       }
   }
 
    return 0;
}