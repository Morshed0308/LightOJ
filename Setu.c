#include <stdio.h>
int ara2[100];
int main()
{
    int t;
    unsigned n;
    int i,j,count=0,a,d=0,l;
    scanf("%d",&t);
    char ara[8];
    int c=0,b=0;
    for(j=1;j<=t;j++){
        scanf("%u",&n);
        for(i=1;i<=n;i++){
            scanf("%s",ara);
            if(strcmp(ara,"donate")==0){
                scanf("%d",&a);
                count+=a;
                }
            else if(strcmp(ara,"report")==0){
                ara2[c]=count;
                c++;

                    }
                }
                printf("Case %d:\n",j);
                while(c--){
                    printf("%d\n",ara2[b]);
                    b++;
                }
                count=0;
                l=0;
                c=0;
                b=0;

            }

        }


