#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(a.begin(),a.end());
    sort(v.begin(),v.end());
    if(a==v){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no";
    }
    return 0;
}
