#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for(int i=n-1;i>=0;i--)
#define rep(i,n) for(int i=0;i<n;i++)
#define array_input(n,arr) for(int i=0;i<n;i++) cin>>arr[i] 
#define array_output(n,arr) for(int i=0;i<n;i++) cout<<arr[i]<<endl
template <typename T> //cin for vector
istream &operator>>(istream &istream, vector<T> &v){
for(auto &it :v)
cin>>it;
return istream;
}
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


ll binpow(ll a, ll b) {
long long res = 1;
while (b > 0) {
if (b & 1)
res = res * a;
a = a * a;
b >>= 1;
}
return res;
}
ll binary_s(vector<ll> &vec,ll z,ll l ,ll r)
{
    //cout<<l<<""<<r<<" ";
    ll mid=(l+r)/2;
    //cout<<mid<<" "<<vec[mid];
    if(vec[mid]==z)
    return 1;
    else if(l>=r)
    return 0;
    else if(vec[mid]>z)
    binary_s(vec,z,l,mid-1);
    else if(vec[mid]<z)
    binary_s(vec,z,mid+1,r);
    else
    return 0;
}
int32_t main(){
fast
    ll n,q;
    cin>>n>>q;
    vector<ll>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    ll l=0,r=n-1;
   // cout<<l<<r<<endl;
    for(int i=0;i<q;i++)
    {
        ll temp;
        cin>>temp;
        ll a=binary_s(vec,temp,l,r);
       // cout<<a;
        if(a==0)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
        
    }
return 0;
}
