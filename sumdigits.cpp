#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   long long num;
   cin>>num;
   int sum=0;
   for(int i=0;i<n;i++){
    sum+=num%10;
    num/=10;
   }
   cout<<sum<<endl;
  return 0;


}
