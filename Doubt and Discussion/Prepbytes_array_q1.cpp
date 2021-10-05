#include <bits/stdc++.h>
using namespace std;

 
//https://mycode.prepbytes.com/problems/fundamentals/TABLECHAIR(Question link)

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    int mi=10000000,ma=0;
    for(int i=0;i<n;i++){
      if(a[i]<mi) mi = a[i];
      if(a[i]>ma) ma = a[i];
      
    }
    cout<<mi<<" "<<ma<<"\n";
  }
  return 0;
}
