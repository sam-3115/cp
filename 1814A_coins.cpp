#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
       
        int ans=n%k;
        if(ans%2==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
