#include <stdio.h>

void k(int m0, int m1, int m2)
{
int *l;
int sum;
l = malloc(sizeof(*l) * 3);
l[0] = m0;
l[1] = m1;
l[2] = m2;
sum = l[0] + l[1] + l[2];
printf("%d+%d+%d=%d\n", l[0], l[1], l[2], sum);
}
int main(void)
{
k(1000, 2000, 3000);
return (0);
}
