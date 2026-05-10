#include<stdio.h>

void multstore(long, long, long*);

void decode1(long *xp, long *yp, long *zp){
    long tx = *xp;
    long ty = *yp;
    long tz = *zp;
    *yp = tx;
    *zp = ty;
    *xp = tz;
}

int main(){
	int x = 1 << 31;
	printf("x: %d\n", x);
	char c = (char)x;
	printf("c: %d\n", c);

	long d;
	multstore(2, 4, &d);
	printf("2*3 --> %ld\n", d);
	return 0;
}

long mult2(long a, long b){
	long s = a * b;
	return s;
}
