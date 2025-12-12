#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<long long>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool isPalindrome=true;
    for(int i=0;i<n/2;i++){
        if(a[i]!=a[n-i-1]){
            isPalindrome=false;
            break;
        }
    }
    if(isPalindrome){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
