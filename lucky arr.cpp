#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   int me=*min_element(a.begin(),a.end());
   int freq=0;
   for(int x: a){
    if(x==me)
        freq++;
   }
   if(freq%2==1)
    cout<<"Lucky\n";
   else
    cout<<"Unlucky\n";
  return 0;


}
