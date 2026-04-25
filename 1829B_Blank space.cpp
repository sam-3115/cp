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
        int ans=INT_MIN;
        int cnt=0;
        for(int j=0;j<n;j++){
            if(arr[j]==0){
                cnt++;
            }
            else cnt=0;
            ans=max(cnt,ans);
        }
        cout<<ans<<endl;
    }
}
