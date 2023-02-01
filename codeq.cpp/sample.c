#include<stdio.h>
int main()
{
 int x=30, *y, *z;
 y=&x;     /* Assume address of x is 1000 and integer is 4 byte size */
 z=y;
 *y++=*z++;
 x++;
 
 return 0;
}