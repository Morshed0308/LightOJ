#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t,x1,y1,x2,y2,i;
    scanf("%d",&t);
    int m,j,k;
    for(i=1;i<=t;i++){
        scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
        scanf("%d",&m);
        int ara[m][2];
        for(j=0;j<m;j++){
                for(k=0;k<2;k++){
                    scanf("%d",&ara[j][k]);
                 }
            }
            printf("Case %d:\n",i);
         for(j=0;j<m;j++){
                for(k=0;k<2;k++){
                    if(ara[j][k]>x1&&ara[j][k]<x2){
                            if(ara[j][++k]>y1&&ara[j][k]<y2){
                                printf("Yes\n");
                                break;
                                }
                            else printf("No\n");
                            break;

                            }
                    else{
                        printf("No\n");
                        break;
                    }

                }

         }

    }
    return 0;
}
