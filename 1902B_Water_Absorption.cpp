#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int n;
        string s;
        cin>>n>>s;
	    int cnt=0,x=0;
	    bool flag=false;
	    int ans=0;
	    for(int j=0;j<n;j++){
	        if(s[j]=='.'){
	            cnt++;
	            x++;
	            if(flag==true && x>=3){
	                ans=2;
	            }
	            flag=true;
	            
	        }
	        else if(s[j]=='#'){
	            x=0;
	            flag=false;
	        }
	    }
	    if(ans==0) ans=cnt;
	    cout<<ans<<endl;
	}

}
