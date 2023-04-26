#include <bits/stdc++.h>
using namespace std;
int main(){
    double n,sum=0;
    cout<<"enter the value of n:";
    cin>>n;
    for(int i=1;i<=n;i++){
       if(i%2==0){
           sum+=-(1/pow(i,2));
       }
       else{
            sum+=(1/pow(i,2));
       }
       
    }
    cout<<sum;
    return 0;
}
