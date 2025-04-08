#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20

int main()
{
    srand(time(NULL));
    int i;
    double vt[N], *p_vt;
    p_vt = vt;
    for (i = 0; i < N; i++)
    {
        *p_vt = 1 + rand() % 100;
        printf("%f ", *p_vt++);
    }

    scanf(" %c");
    return 0;
}