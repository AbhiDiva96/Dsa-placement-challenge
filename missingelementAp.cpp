#include<bits/stdc++.h>
 using namespace std;
 int missingElement(int arr[], int n){

      int diff = arr[1] - arr[0];
      if(n>2) 
      diff = min( arr[2] - arr[1], diff);

      for(int i=0; i<n-1; i++){
        if(arr[i] + diff != arr[i+1])
            return arr[i] + diff;
        
         }

        return arr[0] + diff/2;
      }
 

int main(){
int t;
cin>>t;
while(t--){
    int n; 
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout << missingElement(arr,n) << endl;
}
return 0;}
