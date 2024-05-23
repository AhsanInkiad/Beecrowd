// Ages

#include<iostream>
#include<iomanip>
using namespace std;

int main(){
int n,count=0;
double result=0;
while(1){
    cin>>n;
    if(n<0){
            break;
    }else{
        count++;
        result+=n;
    }
}
float r=(result/count);
std::cout<<std::fixed<<std::setprecision(2)<<r<<endl;


return 0;
}
