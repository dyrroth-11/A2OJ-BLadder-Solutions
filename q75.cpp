#include <bits/stdc++.h>
#include <sstream>
using namespace std;
#define mod 1000000007
#define ll long long int
#define pb push_back
#define mk make_pair
#define xx first
#define yy second
 
double pi=3.141592653589793238;
const int M = 1e9+7;
const int Nmax=5005;
const int MM = 1e7+1;
 
 
int main(){
ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
int T=1;
//cin>>T;
while(T--){
int m;
cin>>m;
int arr[6]={};
while(m--){
    int a,b;
    cin>>a>>b;
    arr[a]++;
    arr[b]++;
}
for(int i=1;i<=5;i++){
    if(arr[i]!=2)
    {
        cout<<"WIN\n";
        return 0;
    }
}
cout<<"FAIL\n";
}
return 0;
}
 
/*_*/