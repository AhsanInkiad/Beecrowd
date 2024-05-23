// Simple factorial

#include<iostream>
using namespace std;
int main(){
int n,result=1;
cin>>n;
if(n>0 && n<13){
    for(int i=n;i>=1;i--){

        result=result*i;

}
cout<<result<<endl;
}

return 0;
}