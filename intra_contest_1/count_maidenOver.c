#include<stdio.h>


int main(){
    int T;
    scanf("%d",&T);

    for (int i = 0; i < T; i++)
    {   
        int over[6];
        int flag=1;

        for (int b = 0; b < 6; b++)
        {
            scanf("%d",&over[b]);
            if (over[b]>0)
            {
                flag=0;
            }
        }

        if (flag==1)
        {
            printf("YES");
        }else{
             printf("NO");
        }
        
    }

    
    return 0;
}