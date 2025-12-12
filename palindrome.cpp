#include<bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
    vector<char>v(s.begin(),s.end());
   int n=v.size();
    bool isPalindrome=true;
    for(int i=0;i<n/2;i++){
        if(v[i]!=v[n-i-1]){
            isPalindrome=false;
            break;
        }
    }
    if(isPalindrome){
        cout<<"YES"<<endl;

    }
    else{
        cout<<"NO";
    }
  return 0;


}
