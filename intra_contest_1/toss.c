#include<stdio.h>


int main(){
    int t;
    scanf("%d",&t);

    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d",&n);
        
        char str[n];
        scanf("%s",str);

        int j=0,h_count=0,t_count=0;
        for (int j = 0; j < n; j++)
        {
            if (str[j]=='H')
            {
                h_count++;
            }else
            {
                t_count++;
            }
        }
        
        if (h_count>t_count)
        {
            printf("England");
        }else
        {
            printf("Pakistan");
        }
    }
    

    return 0;
}