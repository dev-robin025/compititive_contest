#include<stdio.h>
// Problem Statement 👇

// The ICC Men's T20 World Cup Final of 2022 has been finished. Where a team is formed with 11 players. Now you need to tell the closest run to the century of a player in a team.

// Note ==> A century is a score of 100 or more runs in a single innings by a batsman.

// Input Format:

// * The first line will contain T, number of test cases.
// * Where in each test case contains a single positive integer N (number of players)
// * The second line will contain n distinct integers A1,A2,A3,A4…..An (run of the players)

// 👉 Print a single integer which is closest to the century.Don't forget to print a newline.



int main(){
    int t;
    scanf("%d",&t);

    for (int i = 0; i < t; i++){
        int player,target=0;
        scanf("%d",&player);

        int runs[player];

        for (int p = 0; p < player; p++){
            scanf("%d",&runs[p]);
            
            if (target<runs[p]) target=runs[p];
        }
        printf("%d\n",target);
    }
    
    return 0;
}