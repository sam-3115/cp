#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int j=0;j<n;j++) cin>>arr[j];
        int sum=1+n;
        int ans[n];
        for(int j=0;j<n;j++){
            ans[j]=sum-arr[j];
        }
        for(int j=0;j<n;j++) cout<<ans[j]<<" ";
        cout<<endl;
    }
}
