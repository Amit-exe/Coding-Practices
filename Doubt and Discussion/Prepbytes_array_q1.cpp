#include <bits/stdc++.h>
using namespace std;

 
//https://mycode.prepbytes.com/problems/arrays/MINMAX1 (Question link)

int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    long long a[n];
    for(long i=0;i<n;i++){
      cin>>a[i];
    }
    long long mi=a[0],ma=a[0];
    for(int i=0;i<n;i++){
      if(a[i]<mi) mi = a[i];
      if(a[i]>ma) ma = a[i];
      
    }
    cout<<mi<<" "<<ma<<"\n";
  }
  return 0;
}
