// 输入：1234，输出 1 2 3 4.
#include<stdio.h>
void print(int n)
{
  if(n>9)
  {
    print(n/10);
  }
  printf("%d ", n%10);
}
int main()
{
  int num = 1234;
  print(num);
  return 0;
}
