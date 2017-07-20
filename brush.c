#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned N,count=0;
    int test,i,j=1,k=0;
    scanf("%d",&test);
    if(test<=100){
    while(test--){
        scanf("%u",&N);
        int ara[N];
        for(i=0;i<N;i++){
            scanf(" %d",&ara[i]);
            if(ara[i]<100){
            if(ara[i]<0)continue;
            count+=ara[i];
            }
        }

        if(N>=1){
        printf("Case %d: %d\n",j,count);
        count=0;
            j++;
             }
                }
                }


    return 0;
}
