#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define IOS ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long int
#define p_b pop_back
main()
{
    IOS
    int n,k,sum=0,i;
    cin>>n>>k;
    vector<int>v(n);
    for(i=0;i<n;i++)
        cin>>v[i];
    sort(v.begin(),v.end());
    if(n==1)
    {
        cout<<v[0]+k;
        return(0);
    }
    int mid=v[n/2];
    int indx=(n/2);
    int num=1;
    while(k>0)
    {
        if(indx+1<n&&v[indx+1]>v[indx])
        {
            if(k>=(num*(v[indx+1]-v[indx])))
            {
                k-=(num*(v[indx+1]-v[indx]));
                mid+=v[indx+1]-v[indx];
                v[indx+1]=mid;
                indx++;
                num++;
            }
            else
            {
                mid+=(k/num);
                break;
            }
        }
        else
        {
            if(indx+1==n)
            {
                 mid+=(k/num);
                 break;
            }
            else
            {
                indx++;
                num++;
            }
        }
    }
    cout<<mid;
 
}
