#include<bits/stdc++.h>
using namespace std;
unsigned long long factorial(int n){
    unsigned long long fact=1;
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}
int main(){
   int t;
   cin>>t;
   while(t--){
    int n;
    cin>>n;
    cout<<factorial(n)<<"\n";
   }
    return 0;
}
