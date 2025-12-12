#include<bits/stdc++.h>
using namespace std;
int main(){
 double a,b;
 cin>>a>>b;
 double result = a/b;
 cout<<"floor "<<a<<" / "<<b<<" = "<<(int)floor(result)<<endl;
 cout<<"ceil "<<a<<" / "<<b<<" = "<<(int)ceil(result)<<endl;
 cout<<"round "<<a<<" / "<<b<<" = "<<(int)round(result)<<endl;

  return 0;

}
