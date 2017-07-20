#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int ara[26],ara2[26];
    memset(ara,0,sizeof(ara));
    memset(ara2,0,sizeof(ara2));
    char a[101];
    char b[101];
    int t,i=0,ct=1;
    scanf("%d\n",&t);

    while(t--)
    {
        gets(a);
        gets(b);
        int len=strlen(a);
        for(i=0;i<len;i++)
            {
                if(a[i]>64&&a[i]<93)
                {
                    a[i]=a[i]+32;
                }
                if(a[i]==32)
                    {
                        continue;
                    }
                    ara[a[i]-'a']++;
            }
            int len2=strlen(b);
            for(i=0;i<len2;i++)
                {
                    if(b[i]>64&&b[i]<93)
                    {
                        b[i]=b[i]+32;
                    }
                    if(b[i]==32)
                        {
                            continue;
                        }
                    ara2[b[i]-'a']++;
                }
                int cs=0;
                for(i=0;i<26;i++)
                    {
                        if(ara[i]==ara2[i])
                        {
                            cs++;
                            if(cs==26)
                                {
                                    printf("Case %d: Yes\n",ct++);
                                }
                                continue;
                        }
                        else{
                        printf("Case %d: No\n",ct++);
                        break;
                        cs=0;
                        }
                    }
                    memset(ara,0,sizeof(ara));
    memset(ara2,0,sizeof(ara2));


      }


 return 0;
}

