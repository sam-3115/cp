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
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        int ans=-1;
        int mindiff=INT_MAX;
        for(int j=1;j<n;j++){
            if(arr[j]<arr[j-1]){
                ans=0;
                break;
            }
            mindiff=min(mindiff,arr[j]-arr[j-1]);
        }
        if(ans!=0)ans=mindiff/2 +1;
        cout<<ans<<endl;
    }
}
D
