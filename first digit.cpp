#include<bits/stdc++.h>
using namespace std;
int main(){
 int x;
 cin>>x;
 int firstDigit=x/1000;
 if(firstDigit%2==0)
    cout<<"EVEN"<<endl;
 else
    cout<<"ODD"<<endl;

  return 0;

}
