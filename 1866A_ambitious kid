#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            ans=0;
            break;
        }
        ans=min(ans,abs(0-arr[i]));
    }
    cout<<ans;
}
