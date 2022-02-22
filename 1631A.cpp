#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        
        int maxa=0,maxb=0;
        
        for(int i=0;i<n;i++){
            maxa=max(maxa,a[i]);
            maxb=max(maxb,b[i]);
        }
        int ans;
        if(maxa>maxb){
            for(int i=0;i<n;i++){
                if(b[i]>a[i]){
                    swap(b[i],a[i]);
                }
                 maxb=max(maxb,b[i]);
                  
            }  
            ans=maxa*maxb;        
        }
        else{
            for(int i=0;i<n;i++){
                if(a[i]>b[i]){
                    swap(a[i],b[i]);
                }
                 maxa=max(maxa,a[i]);
                 
            }
             ans=maxa*maxb;          
        }
        cout<<ans<<endl;
    }
    
}    