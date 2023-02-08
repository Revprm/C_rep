#include <stdio.h>
#include <math.h>

int sumofdigit(char N[], int i, int j)
{
    if (N[i] == '\0') return j; 
    else if (N[i] == '.') return sumofdigit(N, i+1, j);
    else return sumofdigit(N, i+1, j + (int)(N[i]) - 48);
}
int main(){
    char num[999999];
    scanf("%s", num);
    printf("%d\n",sumofdigit(num, 0, 0));
}