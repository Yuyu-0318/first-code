/*#include<stdio.h>
int main()
{
	int a, b, c, d;
	scanf_s("%d %d %d",&a,&b,&c);
	d = a * 0.2 + b * 0.3 + c * 0.5;
	printf("%d",d);
}
*/
/*
#include<stdio.h>
int main()
{
	double t;
	int n;
	scanf_s("%lf %d", &t, &n);
	printf("%.3f\n%d", t / n, n * 2);
}
*/
/*
#include<stdio.h>
int main()
{
	double a = 3.14, b;
	int h, r, c;
	scanf_s("%d %d",&h,&r);
	b = a * h * r * r;
	c = 20000 / b + 1;
	printf("%d",c);

}
*/
/*
#include<stdio.h>
int main()
{
	int a, b, c, d;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b) { d = a, a = b, b = d; }
	if (a > c) { d = a, a = c, c = d; }
	if (b > c) { d = b, b = c, c = d; }
	printf("%d %d %d", a, b, c);
}
*/
/*
#include<stdio.h>
int main()
{
	double m, h, a;
	scanf_s("%lf %lf", &m, &h);
	a = m / (h * h);
	if (a < 18.5)
		printf("Underweight");
	if (a>=18.5 && a< 24)
		printf("Normal");
	if (a >= 24)
		printf("%.6g\nOverweight", a);

}
*/
/*
#include<stdio.h>
int main()
{
	int a, b, c;
		scanf_s("%d %d", &a, &b);
		 if (b ==1||b==3||b==5||b==7||b==8||b==10||b==12)
			c = 31;
		else if (b ==4||b==6||b==9||b==11)
			c = 30;
		else if (b == 2) {
			 if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
				 c = 29;
			 else 
				 c = 28;
		 }

	printf("%d", c);
}
*/
/*
#include<stdio.h>
int main()
{
	int a, b, c, d, e;
	scanf_s("%d", &a);
	if (a % 2 == 0 && a > 4 && a <=12)
		b = 1;
	else if(a%2!=0||a<=4||a>12)
		b = 0;
	if (a % 2 == 0 || a > 4 && a <= 12)
		c = 1;
	else if(a % 2 != 0 && (a <= 4 || a > 12))
		c = 0;
	if(a%2==0&& (a <= 4 || a >12)||a%2!=0 && a > 4 && a <=12)
		d=1;
	else
		d=0;
	if (a % 2 != 0 && a <= 4 || a > 12)
		e = 1;
	else
		e = 0;
	printf("%d %d %d %d", b, c, d, e);

}
*/
#include<stdio.h>
int main()
{
	int s, v, hour, min, t;
	scanf_s("%d %d", &s, &v);
	t = 470 - (s + v - 1) / v;
	if (t < 0)
		t = 1440 + (470 - (s + v - 1) / v);
	hour = t / 60;
	min = t % 60;
	printf("%02d:%02d", hour, min);

}

