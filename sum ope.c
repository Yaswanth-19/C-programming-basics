//printing all arthematic operatioms
#include<stdio.h>
void main()
{
	int a, b, s, p, d, q, r;
	a = 10;
	b = 2;
	
	s = a+b;
	p = a*b;
	d = a-b;
	q = a/b;
	r = a%b;
	
	printf("sum of %d and %d is %d" , a, b, s);
	printf("prod of %d and %d is %d" , a, b, p);
	printf("diff of %d and %d is %d" ,a, b, d);
	printf("quo of %d and %d is %d" , a, b, q);
	printf("rem of %d and %d is %d" ,a, b,  r);
}
