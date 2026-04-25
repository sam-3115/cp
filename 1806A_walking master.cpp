#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int j=0;j<t;j++){
	    int a,b,c,d;
	    cin>>a>>b>>c>>d;
	   // int ans=0;
	    if(d<b) {
	        cout<<"-1"<<endl;
	        continue;
	    }
	    int move=d-b;
	    a+=move;
	    b+=move;
	    move+=abs(c-a);
	    if(a<c) {
	        cout<<"-1"<<endl;
	        continue;
	    }

	    cout<<move<<endl;
	}

}
