#include<stdio.h>


int main(){
    int t;
    scanf("%d",&t);

    for (int i = 0; i < t; i++)
    {
        int player,target=0;
        scanf("%d",&player);

        int runs[player];

        for (int p = 0; p < player; p++)
        {
            scanf("%d",&runs[p]);
            
            if (target<runs[p])
            {
                target=runs[p];
            }
        }

        printf("%d\n",target);
    }
    
    return 0;
}