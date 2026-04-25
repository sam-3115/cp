#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n,k;
        cin>>n>>k;
        // string ans=;

        if(n%2==0 ||(n-k)%2==0 || n%k==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
