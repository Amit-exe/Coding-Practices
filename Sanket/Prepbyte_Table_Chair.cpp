#include <bits/stdc++.h> 
using namespace std;

int main(){

//write your code here

int t;

cin>>t;

while(t--){
long long n,a,b,c; 
cin>>n>>a>>b>>c;
n%=4;
if(n==0)
cout<<"0"<<endl;
else if(n==1) cout<<min(c,min(a+b,a+a+a))<<endl; 
else if(n==2) cout<<min(b,min(a,c)*2)<<endl; 
else cout<<min(a,min(b+c,c+c+c))<<endl;
}

return 0;

}
