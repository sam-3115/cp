#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int a[n-1];
        int sum=0;
        for(int j=0;j<n-1;j++){
            cin>>a[j];
        }
        for(int j=0;j<n-1;j++){
            sum+=a[j];
        }
        cout<<0-sum<<endl;
    }
}
