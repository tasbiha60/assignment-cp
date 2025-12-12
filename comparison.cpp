#include<bits/stdc++.h>
using namespace std;
int main(){

 int a,b;
 char s;
 cin>>a>>s>>b;
 bool isRight=false;
 if(s=='<'&&a<b)
    isRight=true;
 else if(s=='>'&&a>b)
    isRight=true;
 else if(s=='=' && a==b)
    isRight=true;
 if(isRight)
    cout<<"Right"<<endl;
 else
    cout<<"Wrong"<<endl;
  return 0;

}
