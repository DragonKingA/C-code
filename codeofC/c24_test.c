#include <stdio.h>
int Prime(int i)
{
 int sum;
 sum = i * i + i + 41;
 for (i = sum-1; i > 1; i--)
 {
  if (sum % i == 0)
  {
   return 0;
  }
 }
 return 1;
}
int main()
{
 int x, y,tmp,i,ret;
 int count = 0;
 while (scanf("%d %d", &x, &y) != EOF)
 {
  if (x == 0 && y == 0)
  {
   break;
  }
  if (x > y)
  {
   tmp = x;
   x = y;
   y = tmp;
  }
  for (i = x; i <= y; i++)
  {
   ret = Prime(i);
   if (ret == 1)
   {
    count++;
    printf("count=%d\n",count);
   }
  }
  if (count == y - x + 1)
  {
   printf("OK\n");
  }
  else
  {
   printf("Sorry\n");
  }
    count = 0;
 }
 
 return 0;
}
