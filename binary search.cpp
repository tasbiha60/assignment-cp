#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int q;
    cin>>q;
    while(q--){
            int x;
    cin>>x;
  if(binary_search(a.begin(),a.end(),x))
    cout<<"found"<<endl;

  else
    cout<<"not found"<<endl;
  }
  return 0;


}
