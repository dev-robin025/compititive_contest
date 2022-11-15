#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
    int t,n;
    scanf("%d",&t);

    for (int j = 0; j < t; j++)
    {
        scanf("%d",&n);
        int players[n],count=0;

        for (int i = 0; i < n; i++)
        {   
            float fsqr;
            int isqr;

            scanf("%d",&players[i]);

            fsqr = sqrt(players[i]);
            isqr = fsqr;

            if (fsqr==isqr) count++;
        }
        if (count>0) printf("%d\n",count);
        else printf("-1\n");
    }

    // int isqr;
    // float fsqr=sqrt(11);
    // isqr=fsqr;

    // if (fsqr==isqr)
    //         {
    //             printf("they are equal");
    //         }else
    //         {
    //             printf("they are not eqal");
    //         }
            
  
    return 0;
}