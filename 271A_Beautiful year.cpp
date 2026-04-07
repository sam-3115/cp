#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    bool flag=true;
    n++;
    while(flag){
        int x=n;
        map<int,int>st;
        for(int i=0;i<4;i++){

            int r=x%10;
            x=x/10;
            st[r]++;
        }
        if(st.size()==4) {
            cout<<n;
            flag=false;
        }
        else n++;
    }
 
}
