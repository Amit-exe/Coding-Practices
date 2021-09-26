#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    long sa=0,sb=0;
	    string s;
	    cin>>n>>a>>b;
	    cin>>s;
	    for(int i=0;i<n;i++){
	        if(s[i] == '0')
	        sa=sa+a;
	        else
	        sb=sb+b;
	    }
	    cout<<sa+sb<<endl;
	}
	return 0;
}
