		/* 'C' CALCULATOR */
/*This file contain main function and all functions are called from this file it also contain function for normal arithmatic operation */
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
*******************************************************************************/
#include <stdio.h>
#include<stdlib.h>
#include "xyz.h"
int main() {
	char a[100], ch;
	float l, c;
	printf("\n\n\n\n********************************************************************\n");
	printf("\t\tWelcome to the 'c' calculator\n");
	printf("********************************************************************\n\n\n\n");
	
	printf("\t\tFor normal operation enter the operator \n");
	printf("\t\tFor special functions press following numbers and letters\n");
	
	printf("1 = tan inverse\n"
		"2 = sin function\n"
		"3 = cos function\n"
		"4 = to find sine hyperbolic\n"
		"5 = to find cosine hyperbolic value\n"
		"6 = decimal to binary conversion\n"
		"7 = decimal to hexadecimal conversion\n"
		"8 = decimal to octal conversion\n"
		"9 = to find squareroot of a number \n"
		"$ = to find quadratic roots of an equation\n"
		"A = to find matrix addition\n"
		"B = to find matrix multiplication\n"
		"C = to find matrix subtraction\n"
		"D = to find determinant of 3 by 3 matrix\n"
		"E = to find transpose of matrix\n"
		"F = to find matrix is symmetric or not\n"
		"G = to find radian conversion of degree angle\n"
		"H = to get two polynomials addition\n");
	while(1) {
		ch = getchar();
		switch(ch) {
			case '+':
				addition();
				break;
			case '-':
				subtraction(); 
				break;
			case '*':
				multiplication();
				break;
			case '/':
				division();
				break;
			case '!':
				factorial();
				break;
			case '%':
				modulo();
				break;
			
			case '1':
				taninverse();
				break;
			case '2':
				sinefun();
				break;
			case '3': 
				cosfun();
				break;
			case '4':
				sinhyper();
				break;
			case '5':
				cosinehyper();
				break;
			case '6':
				dectobin();
				break;
			case '7':
				dectohex();
				break;
			case '8':
				dectooct();
				break;
			case '9':
				printf("Enter the value to find squreroot\n");
				scanf("%f", &l);
				c = squreroot(l);
				printf("squreroot of %f is %.3f\n", l, c);
				break;
			case '$':
				linear();
				break; 
			case 'A':
				matadd();
				break;
			case 'B':
				matmul();
				break;
			case 'C':
				matsub();
				break;
			case 'D':
				deter();
				break;
			case 'E':
				trans();
				break;
			case 'F':
				symmetry();
				break;
			case 'G':
				degtorad();
				break;
			case 'H':
				poly();
				break;
			default:
				printf("\n\t\t******");
				printf("Enter next choice");
				printf("******\n");
				break;
		}	
	}
}

/*This function do the addition of n numbers*/
void addition() {
	int n , num;
	int m = 0;
	int sum = 0;
	printf("Enter the number of terms which are to bo added\n");
	scanf("%d", &n);
	printf("Enter the %d elements one by one\n", n);
	while(m < n) {
		scanf("%d", &num);
		sum = sum + num;
		m++;
	}
	printf("The sum of numbers is %d \n", sum);
}

/*THis function make the subtraction of two numbers*/
void subtraction() {
	float p, q;
	printf("Enter the two numbers to sutract\n");
	scanf("%f%f", &p, &q);
	float sub;
	sub = p - q;
	printf("The subtraction is %f\n", sub);
}

/*This function make the multiplication of n numbers*/
void multiplication() {
	float mul = 1.0;
	int x, y = 0;
	float numb;
	printf("Enter the number of terms to be multiplied\n");
	scanf("%d", &x);
	printf("Enter the numbers one by one\n");
	while(y < x) {
		scanf("%f", &numb);
		mul = mul * numb;
		y++;
	}
	printf("The multiplication is %f\n", mul);
}

/*This function makes the division of two numbers*/
void division() {
	float j, k;
	float div;
	printf("Enter the two numbers to calculate division\n");
	scanf("%f%f", &j, &k);
	div = j / k;
	printf("The division is %f\n", div);
}

/*This function find squreroot of number*/
float  squreroot(float number) {
	float q, j;
	j = 0.0001;
	for(q = 1;q < number;q = q + j) {
		if((q * q) > number) {
			q = q - j;
			break;
		}
	}
	return q;
}

/*This function solve roots of  quadratic eqution*/
int linear() {
	float i, j, k, d, x, y, r, m;
	printf("Enter the value to the coefficients a, b, c to find roots of ax^2+bx+c\n");
	scanf("%f%f%f",&i, &j, &k);
	d = j * j - 4 * i * k;
	if(d > 0) {
		x =  (- j + squreroot(d)) / (2 * i);
		y =  (- j - squreroot(d)) / (2 * i);
		printf("Two roots are %.3f and %.3f\n", x, y);
	}
	else if(d == 0) {
		x = y = - j / (2 * i);
		printf("Two roots are %.3f and %.3f\n", x, y);
	}
	else {
		r = - j / (2 * i);
		m = squreroot(-d) / (2 * i);
		printf("Two roots are %.3f + %.3fi and %.3f - %.3fi\n", r, m, r, m);
	}
}

/*This function calculate factorial*/
void factorial() {
	int d, fact = 1, num1;
	printf("Enter the number to find calculate factorial\n");
	scanf("%d", &num1);
	if(num1 < 0) {
		printf("Enter the positive value as factorial of negative number doesn't exist\n");
	}
	for(d = 1; d <= num1; d++) {
		fact = fact * d;
	}
	printf("The factorial of %d is %d \n", num1, fact);	
}

/*This function calculate remainder*/
void modulo() {
	int q, w, mod;
	printf("Enter the numbers to find remainder\n");
	scanf("%d%d", &q, &w);
	mod = q % w;
	printf("The remainder is %d\n", mod);
}

pnode *create(int n) { 
	pnode *head, *p;
	int i;
	/*create the first node*/
	head = (pnode *)malloc(sizeof(pnode));
	/* get memory for the first node*/
	p = head;
	head->next = NULL;
	printf("\nEnter power and coeffient");
	scanf("%d%f", &(p->pow), &(p->coeff));
	for(i = 1; i < n; i++) {
		/*create subsequent nodes*/
		p->next = (pnode *)malloc(sizeof(pnode));
		p = p->next;
		p->next = NULL;
		printf("\nEnter power and coeffient");
		scanf("%d%f", &(p->pow), &(p->coeff));
		}
	return(head);
}

void print(pnode *p) {
	printf("\n");
	while(p!=NULL) {
		printf("%5.2fx^%d\t", p->coeff, p->pow);
		p = p->next;
		 /*go to the next node*/
	}
}

void poly() {
	pnode *head, *p1, *p2, *r, *r1;
	int n1, n2;
	printf("\n enter no of terms for 1st polynomial.");
	scanf("%d", &n1);
	p1 = create(n1);
	print(p1);
	printf("\n enter no of terms for 2nd polynomial.");
	scanf("%d", &n2);
	p2 = create(n2);
	print(p2);
	r = addpoly(p1, p2);
	print(r);
}
pnode *addpoly(pnode *p1, pnode *p2) {
	pnode *p3, *r3;
	p3 = NULL;
	while(p1!=NULL && p2!=NULL) {
		if(p3==NULL) {
			p3=r3=(pnode *)malloc(sizeof(pnode));
			r3->next = NULL;
		}
		else {
			r3->next = (pnode *)malloc(sizeof(pnode));
			r3 = r3->next;
			r3->next = NULL;
		}
		if(p1->pow < p2->pow) {
			r3->pow = p1->pow;
			r3->coeff = p1->coeff;
			p1 = p1->next;
		}
		else if(p2->pow < p1->pow) {
			r3->pow = p2->pow;
			r3->coeff = p2->coeff;
			p2 = p2->next;
		}
		else {
			r3->pow = p1->pow;
			r3->coeff = p1->coeff + p2->coeff;
			p1 = p1->next;
			p2 = p2->next;
		}
	}
	/*insert the rest terms of p1 into p3*/
	while(p1 != NULL) {
		if (p3 == NULL) {
			p3=r3=(pnode *)malloc(sizeof(pnode));
			r3->next = NULL;
		}
		else {
			r3->next = (pnode *)malloc(sizeof(pnode));
			r3 = r3->next;
			r3->next = NULL;
		}
		r3->pow = p1->pow;
		r3->coeff = p1->coeff;
		p1 = p1->next;
	}
	/*insert the rest terms of p2 into p3*/
	while(p2 != NULL) {
		if (p3 == NULL) {
			p3=r3=(pnode *)malloc(sizeof(pnode));
			r3->next = NULL;
		}
		else {
			r3->next = (pnode *)malloc(sizeof(pnode));
			r3 = r3->next;
			r3->next = NULL;
		}
		r3->pow = p2->pow;
		r3->coeff = p2->coeff;
		p2 = p2->next;
	}
	return(p3);
}












