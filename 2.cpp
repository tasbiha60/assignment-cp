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
    int l=0,r=n-1,ans=n;
    while(l<=r){
        int mid = (l+r)/2;
        if(a[mid]>=x){
           ans=mid;
           r=mid-1;
        }

        else l=mid+1;
    }
    cout<<ans;

}
