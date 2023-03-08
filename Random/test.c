#include <stdio.h>

void print(void *p, int t){
    if (t == 1)
        printf("%d\n", *(int *)p);
    else if (t == 2)
        printf("%0.3lf\n", *(double *)p);
    else
        printf("error: unknown type\n");
} // end print
int main()
{
    int n = 375;
    double d = 2.71865;
    print(&n, 1); // int pointer passed
    print(&d, 2); // double pointer passed
}