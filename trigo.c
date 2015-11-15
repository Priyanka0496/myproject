		/* 'C' CALCULATOR */
/*This file contains all trigonometric functions */
/******************************************************************** Copyright (C) PRIYANKA D BENDARE priyankabendare@gmail.com
*
*This programme is free software; you can redistribute it and/or modify it
*under the terms of the GNU lesser General Public Liscens as published by
*the Free Software Foundation;either version 2.1 of the liscense , or
*(at your option) any later version.
*
*This programme is distributed in the hope that it will be useful'
*but WITHOUT ANY WARRANTY ;without even the implied warrenty of 
*MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the 
*GNU Lesser General Public Liscense for more details.
*
*You should have reiceaved a copt of the GNU Lesser General Public License
*along with this program; if not, write to the Free Software Foundation,
*Inc., 51 Franklin Street, Fifth Floor, Boston MA 02110-1301, USA.
*******************************************************************************/#include <stdio.h>
#define ERROR 1.0e-6

/*This function convert degree to radian*/
void degtorad() {
	float i, j;
	printf("Enter the value of angle in degree\n");
	scanf("%f", &i);
	j = (3.14 / 180) * i;
	printf("Value is %f\n", j);
}

/*THis function calculate sine value of angle*/
double sinefun() {
	double y, sum, term;
	int i = 3;
	printf("Enter the value of angle in radian\n");
	scanf("%lf", &y);
	double sqx = y * y;
	sum = term = y;
	while(term > ERROR || -term > ERROR) {
		term = (-1) * (term * sqx) / (i * (i - 1));
		sum = sum + term;
		i = i + 2;
	}
	printf("The sin value for the angle is %lf\n", sum);
}

/*This function find cosine value */
double cosfun() {
	double x, sum, term;
	int i = 2;
	printf("Enter the value of angle in radian to find cosine value\n");
	scanf("%lf", &x);
	double sqx = x * x;
	sum = 1;
	term = 1;
	while(term > ERROR || term > ERROR) {
		term  = (-1) * (term * sqx) / i * (i - 1);
		sum = sum + term;
		i = i + 2;
	}
	printf("The cosine value is %lf\n", sum);
}

/*THis function find sine hyperbolic*/
double sinhyper() {
	double x, sum, term;
	int i = 3;
	printf("Enter the value of angle in radian to find sinhyperbalic\n");
	scanf("%lf", &x);
	double sqx = x * x;
	sum = x;
	term = x;
	while(term > ERROR || -term > ERROR) {
		term = (term * sqx)  / i * (i - 1);
		sum = sum + term;
		i = i + 2;
	}
	printf("Sine hyperbolic of angle is %lf\n", sum);
}

/*This function find cosine hyperbolic*/
double cosinehyper() {
	double x, sum, term;
	int i = 2;
	printf("Enter the value to angle in radian to find cosinehyperbolic\n");
	scanf("%lf", &x);
	double sqx = x * x;
	sum = 1;
	term = 1;
	while(term > ERROR || -term > ERROR) {
		term = (term * sqx)  / i * (i - 1);
		sum = sum + term;
		i = i + 2;
	}
	printf("cosine huperbolic of angle is %lf\n", sum);
}

/*This function calculate tan inverse*/
double taninverse() {
	double y;
	int  i;
	char b;
	double sum, sum1, term, term1, sqx;
	int l = 3;
	printf("Enter the value to find tan inverse\n");
	scanf("%lf", &y);
	if(y >= -1 && y <=1) 
		b = 'A';
	else
		b = 'B';
	switch(b) {
		case 'A':
			sqx = y * y;
			sum = y;
			term = y;
			i = 3;
			while(term > ERROR || -term > ERROR) {
				term = (-1) * (term * sqx) * (i - 2) / i;
				sum = sum + term;
				i = i + 2;
			}
			printf("The taninverse is %lf\n", sum);
			break;
		
		case 'B':
			sum1 = -1 / y;
			term = -1 / y;
			while(term1 > ERROR || -term1 > ERROR) {
				term1 = term1 * (l - 2) / l * y * y;
				term1 = term1 * (-1);
				sum1 = sum1 + term1;
				l = l + 2;
			}
				if(y > 1)
					sum1 = sum1 + 1.57;
				else
					sum1 = sum1 - 1.57;
			printf("The tan inverse is %lf\n", sum1);
			break;
		
		default :
			printf("Sorry, invalid input\n");
			break;
	}
}
