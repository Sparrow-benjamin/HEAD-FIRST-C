/*
*accessing diffrernt types of elements,
*printing their value,
*printing their addresses
*/
#include <stdio.h>

int main()
{
int i[5];
i[0]=100;
i[1]=200;
i[2]=300;
i[3]=400;
i[4]=500;
printf("Value of element i[0]=%d\n", i[0]);
printf("Value of element i[1]=%d\n", i[1]);
printf("Value of element i[2]=%d\n", i[2]);
printf("Value of element i[3]=%d\n", i[3]);
printf("Value of element i[4]=%d\n", i[4]);
printf("The address of element i[0]=%p\n", i[0]);
printf("The address of element i[1]=%p\n", i[1]);
printf("The address of element i[2]=%p\n", i[2]);
printf("The address of element i[3]=%p\n", i[3]);
printf("The address of element i[4]=%p\n", i[4]);
return 0;
}
