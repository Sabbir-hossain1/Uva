#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,c=0,maxi=0,k,temp=0;
    long long int l;
    while(scanf("%d%d",&i,&j)!=EOF)
    {
        int tempi,tempj;
        tempi = i;
        tempj = j;
    if(tempi>tempj)
    {
        temp = tempi;
        tempi = tempj;
        tempj = temp;
    }
    while(tempi<=tempj)
    {   l = tempi;
         c=1;
        while(l!=1)
        { if(l&1!=0) l=3*l+1;
            else l = l/2;
           c++;
        }
        tempi++;
        if(c>maxi) maxi = c;
    }
    cout<<i<<" "<<j<<" "<<maxi<<endl;
    maxi=0;
    }
return 0;
}
