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
      

    int n;cin>>n;
    long long int l;cin>>l;
    
     long long int arr[n];
     for (int i = 0; i < n; i++)
     {
         cin>>arr[i];
     }
     sort(arr,arr+n);
     
     
     long long int diff=2 * max(arr[0],l-arr[n-1]);
     for (int i = 1; i <n; i++)
     {
         diff=max(diff,(arr[i]-arr[i-1]));
     }
     
     cout<<fixed<<setprecision(9)<<(double)diff/2<<endl;


     
}
     
