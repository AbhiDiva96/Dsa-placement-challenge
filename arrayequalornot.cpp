#include<bits/stdc++.h>
 using namespace std;
#define ll long long

 bool check(vector<ll> a, vector<ll> b, int n){
      sort(a.begin() , a.end());
      sort(b.begin(), b.end());
     
     if(a==b){
        return true;
     }
     return false;
 }
int main(){
  int t;
  cin>>t;
  while(t--){
     int n;
     cin>>n;

     vector<ll> arr(n,0), brr(n,0);

     for(ll i=0; i<n; i++)
        cin>> arr[i];

     for(ll i=0; i<n; i++)
        cin>>brr[i];

        cout << check(arr,brr,n) << endl;   


  }
return 0;}
