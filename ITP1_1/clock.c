#include<stdio.h>

int main(void)
{
  int S;
  int h,m,s;

  scanf("%d",&S);

  h = S/60/60;
  m = S/60 - h*60;
  s = S - m*60 -h*60*60;

  printf("%d:%d:%d\n", h, m, s);

  return 0;
}
  
