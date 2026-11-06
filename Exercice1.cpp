#include <stdio.h>
int main() {
   int x=5;
   if (x++ >5)
     x+=5;
   else 
     x*=2;
	printf("%d", x-2);
   return 0;
}
