#include <stdio.h>
int main()
{
   int*** ip3 = NULL;
   int** ip2 = NULL;
   int* ip1 = NULL;
   int num1 = 10;

   printf("%d %x %x %x \n", num1, &ip1, &ip2, &ip3);

   ip1 = &num1;
   ip2 = &ip1;
   ip3 = &ip2;

   printf("%d %x %x %x", num1, ip1, ip2, ip3);

   return 0;

}