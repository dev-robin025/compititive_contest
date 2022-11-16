#include<stdio.h>

// Problem Statement 👇

// In the ICC Men's T20 World Cup Final of 2022, Pakistan gives X runs targets to England. At this moment England gets Y runs in 6 overs. Now your task is to find the required runs needed for England to win this final match.

// Input Format:
// * The First line will have X and Y. ==> 0 <= X, Y <= 250

// Output Format:
// 👉 For each test case, print the required runs needed for England to win the final Match.

// Sample Input ==> 200 100

// Sample Output ==> 100

int main(){
    int X,Y;
    scanf("%d %d",&X,&Y);

    printf("%d",X-Y);
    return 0;
}