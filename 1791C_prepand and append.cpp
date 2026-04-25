#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int j=0;j<t;j++){
	    int n;
	    cin>>n;
	    string arr;
	    cin>>arr;
	    int cnt=0;
	    for(int i=0;i<(n+1)/2;i++){
	        if(arr[i] == arr[n-i-1]){
	           break;
	        }
	        else{
	            cnt++;
	        }
	    }
	    

	    cout<<n-2*cnt<<endl;
	}

}
