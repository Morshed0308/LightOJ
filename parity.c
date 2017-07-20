#include <stdio.h>
#include <string.h>
int ara[100];
int main()
{
    int test,i=0,c=0,k=0;
    long int a;
    scanf("%d",&test);

    while(test--){
    scanf("%ld",&a);

    for(i=0;i<100;i++){
        ara[i]=a%2;
        a=a/2;
    }
    for(i=0;i<100;i++){

        c=c+ara[i];
    }
    k++;
    if(c%2==0)printf("Case %d: even\n",k);
    else if(c%2==1)printf("Case %d: odd\n",k);
    c=0;
    }
    return 0;
}
