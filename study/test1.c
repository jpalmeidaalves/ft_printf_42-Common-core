#include<stdio.h>
int main() {
 
	int i = 0;
	int j = 456;
	char *str =  "hahaha";
	char *str2 =  NULL;
	char ch = 'A';
	unsigned int hex = 4342;
	unsigned int uns_int = 4294967295;
	int	*ptr = &j;
 	char str3[] = "";
 
	printf("   printf returns: %d\n", printf("1.i = %d - ", i));
	printf("   printf returns: %d\n", printf("2.j = %i - ", j));
	printf("   printf returns: %d\n", printf("3.str= %s - ", str));
	printf("   printf returns: %d\n", printf("4.str2= %s - ", str2));
	printf("   printf returns: %d\n", printf("5.ch = %c - ", ch));
	printf("   printf returns: %d\n", printf("6.hex = %x - ", hex));
	printf("   printf returns: %d\n", printf("7.heX = %X - ", hex));
	printf("   printf returns: %d\n", printf("8.uns_int = %u - ", uns_int));
	printf("   printf returns: %d\n", printf("9.ptr = %p - ", ptr));
        printf("   printf returns: %d\n", printf("10.ptr = %d - ", *ptr));
	printf("   printf returns: %d\n", printf("11.ptr = %p - ", (void*)0));
	printf("   printf returns: %d\n", printf("12.str3 = %s - ", str3));
	
  return 0;
}
