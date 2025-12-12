#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   string s;
   cin>>s;
   vector<char>v(s.begin(),s.end());
   sort(v.begin(),v.end());
   for(char c: v)
    cout<<c;
   cout<<endl;
  return 0;


}
