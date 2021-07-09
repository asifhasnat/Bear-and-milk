#include <stdio.h>
#include <string.h>
#define int long long
int main()
{
    int t;
    scanf("%llu",&t);
    while(t--)
    {
        int i,n,count=0,flag=0;
        scanf("%llu",&n);
        char s[n][10],c[]="cookie",m[]="milk";
        for(i=0;i<n;i++)
            scanf("%s",s[i]);
        for(i=0;i<n;i++)
        {
            if(count==0 && strcmp(s[i],c)==0)
                count=1;
            else if(strcmp(s[i],m)==0)
                count=0;
            else
            {
                flag=1;
                break;
            }
        }
        if(flag==1 || count==1) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}
