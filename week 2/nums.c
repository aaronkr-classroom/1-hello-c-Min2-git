#include <stdio.h>
#include <limits.h>

int main(void) {
	//char                  1바이트         (문자)
	char ch = 'A';
	printf("char:\n");
	printf("Value: %c\n", ch);
	printf("Max: %d\n", CHAR_MAX);  // limit.h의 상수
	printf("Min: %d\n", CHAR_MIN);


	//signed short int      2바이트         (정수)
	signed short int sshort = 1234;
	printf("\nsigned short int:\n");
	printf("Value: %d\n", sshort);
	printf("Max: %d\n", SHRT_MAX);  // limit.h의 상수
	printf("Min: %d\n", SHRT_MIN);


	//unsigned short int    2바이트         (정수)
	unsigned short int ushort = 1234U;
	printf("\nunsigned short int:\n");
	printf("Value: %d\n", ushort);
	printf("Max: %d\n", USHRT_MAX);  // limit.h의 상수


	//signed int            4바이트         (정수)
	signed int sint = 12345;
	printf("\nsigned int:\n");
	printf("Value: %d\n", sint);
	printf("Max: %d\n", INT_MAX);  // limit.h의 상수
	printf("Min: %d\n", INT_MIN);


	//unsigned int          4바이트         (정수)
	unsigned int uint = 12345U;
	printf("\nunsigned int:\n");
	printf("Value: %d\n", uint);
	printf("Max: %d\n", UINT_MAX);


	//long은 다른 운영체제에서 다른 바이트 크기이다.
	//보통 4바이트지만 Linux/Unix/Mac에선 8바이트이다.
	//Windows에서 long long하면 8바이트로 사용할 수 있다.


	//signed long int       4바이트         (정수)
	signed long int slong = 123456789L;
	printf("\nsigned long int:\n");
	printf("Value: %d\n", slong);
	printf("Max: %d\n", LONG_MAX);  // limit.h의 상수
	printf("Min: %d\n", LONG_MIN);


	//unsigned long int     4바이트         (정수)
	unsigned long int ulong = 123456789UL;
	printf("\nunsigned long int:\n");
	printf("Value: %d\n", ulong);
	printf("Max: %d\n", ULONG_MAX);


	//float(항상 부호 있음) 4바이트         (실수)
	float f = 123.456f;
	printf("\nfloat:\n");
	printf("Value: %f\n", f);
	//printf("Max: %d\n", FLT_MAX);  // limit.h의 상수
	//printf("Min: %d\n", FLT_MIN);


	//double(항상 부호 있음)8바이트         (실수)
	double d = 123456.7890123f;
	printf("\ndouble:\n");
	printf("Value: %.3f\n", d);
	//printf("Max: %d\n", DBL_MAX);  // limit.h의 상수
	//printf("Min: %d\n", DBL_MIN);

}