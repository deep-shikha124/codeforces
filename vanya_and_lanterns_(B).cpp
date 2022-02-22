#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    long long int l;cin>>l;
    long long int r;
     long long int arr[n];
     for (int i = 0; i < n; i++)
     {
         cin>>arr[i];
     }
     sort(arr,arr+n);
     long long int m=0;
     
     long long int max_diff=2*max(arr[0],l-arr[n-1]);
     for (int i = 0; i <n; i++)
     {
         max_diff=max(max_diff,arr[n]-arr[n-1]);
     }
     max_diff=double(max_diff/2);
     cout<<fixed<<setprecision(9)<<max_diff<<endl;


     
}
     
