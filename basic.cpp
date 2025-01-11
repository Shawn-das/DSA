// Author: Shawn Das Shachin-->(shawn_das)

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
#define pb push_back
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define OPTIMIZE_IO ios::sync_with_stdio(false); cin.tie(nullptr);

int main() {
    OPTIMIZE_IO;
    //int_min=-2^31 and int_max=2^31-1

    //swap to number without using third variable.
    // int a,b;
    // cin>>a>>b;
    // a=a^b;b=a^b;a=a^b;
    // cout<<"a="<<a<<" b="<<b<<endl;


    //cheak that the i th bit is set or not
    // int n,i;
    // cin>>n>>i;
    // if(n&(1<<i))cout<<"YES"<<endl; // if((n>>i) && 1) cout<<"yes"<<endl; using right shift
    // else cout<<"No"<<endl;


    //set the i th bit 
    // int n,i;
    // cin>>n>>i;
    // int after_set=(n|(1<<i));
    // cout<<after_set<<endl;


    // clear the i th bit
    // int n,i;
    // cin>>n>>i;
    // int after_clear=(~(1<<i) & n);
    // cout<<after_clear<<endl;


    // toggle the i th bit
    // int n,i;
    // cin>>n>>i;
    // int after_toggle=(n^(1<<i));
    // cout<<after_toggle<<endl;


    // removeing the last set bit
    // int n;
    // cin>>n;
    // cout<<(n&(n-1))<<endl;


    //cheak if the number is a power of two
    // int n;
    // cin>>n;
    // if(n&(n-1)==0)cout<<"YES"<<endl;
    // else cout<<"No"<<endl;



    //count the number of set bits in a number 
    // int n;
    // cin>>n; 
    // int count=0;
    // while(n){
    //     count++;
    //     n=n&(n-1);
    // }
    // cout<<count<<endl;
    //c++ built in function for count the set bit is {__builtin_popcount(n)}
    

    return 0;
}