#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,m,fsr,fsc,ssr,ssc,tc;
    char ch;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        cin.ignore();
        char arr[n][n];
        fsr=n+1;
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>arr[i][j];
                if(arr[i][j]=='*'&&fsr==n+1)
                {
                    fsr=i;
                    fsc=j;
                }
                else if(arr[i][j]=='*'&&fsr!=n+1)
                {
                    ssr=i;
                    ssc=j;
                }
            }
        }
        if(fsr==ssr)
        {
            if(fsr==n-1)
            {
                arr[fsr-1][fsc]='*';
                arr[ssr-1][ssc]='*';
            }
            else
            {
                arr[fsr+1][fsc]='*';
                arr[ssr+1][ssc]='*';
            }
        }
        else if(fsc==ssc)
        {
            if(fsc==0)
            {
                arr[fsr][fsc+1]='*';
                arr[ssr][ssc+1]='*';
            }
            else
            {
                arr[fsr][fsc-1]='*';
                arr[ssr][ssc-1]='*';
            }
        }
        else
        {
            arr[fsr][ssc]='*';
            arr[ssr][fsc]='*';
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                cout<<arr[i][j];
            }
            cout<<"\n";
        }
    }
    return 0;
}
