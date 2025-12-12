#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int &x: a)
        cin>>x;
    int x;
    cin>>x;
    int l=0,r=n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]==x){
            cout<<mid;
            return 0;
        }
        else if(a[mid]<x)l=mid+1;
        else r=mid-1;
    }
    cout<<-1;

}
