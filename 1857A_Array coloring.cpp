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
        int sum=0;
        for(int j=0;j<n;j++){
            sum+=arr[j];
        }
        string ans="No";
        for(int j=0;j<n;j++){
            int x=sum-arr[j];
            if((x%2)==(arr[j]%2)){
                ans="Yes";
                break;
            }
        }
        cout<<ans<<endl;
        
        
    }
}
