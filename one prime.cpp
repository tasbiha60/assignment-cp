#include<bits/stdc++.h>
using namespace std;
bool isPrime(int x){
    if(x<=1) return false;
    if(x==2) return true;
    if(x%2==0) return false;
    for(int i=3;i*i<=x;i+=2){
        if(x%i==0) return false;
    }
    return true;
}
int main(){
    int x;cin>>x;
    if(isPrime((x))) cout<<"YES";
    else cout<<"NO";

    return 0;
}
