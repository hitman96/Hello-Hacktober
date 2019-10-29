#include<stdio.h>
int main()
{
    long n,q,l,r,c=0;
    scanf("%ld",&n);
    int a[1000001],s[1000002]={0};
    for(int i=1;i<=n;i++)
    {
        scanf("%ld ",&a[i]);
    }
    scanf("%ld",&q);
    for(int i=0;i<q;i++)
    {
        scanf("%ld %ld",&l,&r);
        s[l]++;
        s[r+1]--;
    }
    
    for(int i=2;i<=n+1;i++)
    {
        s[i]+=s[i-1];
    }
    for(int i=0;i<=n;i++)
    {
        if(s[i]%2!=0)
        {
            a[i]=a[i]?0:1;
        }
        if(a[i]==1)
        c++;
    }
    printf("%d\n",c);
    for(int i=1;i<=n;i++)
    {
        printf("%ld ",a[i]);
    }
    return 0;
}
