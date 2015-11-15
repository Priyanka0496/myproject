		/* 'C' CALCULATOR */
/*This file contains all conversion functions */
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
*******************************************************************************/#include<stdio.h>

/*This function convertbdecimal to binary*/
void dectobin() {
	int m, u = 1, v[25], e;
	printf("Enter the decimal number to convert it into binary\n");
	scanf("%d", &e);
	while(e!=0) {
		v[u++] = e % 2;
		e = e / 2;
	}
	printf("The binary equivalent of decimal is :-\n");
	for(m = u - 1; m > 0; m--)
		printf("%d", v[m]);
		printf("\n");
}

/*This function convert decimal to hexadecimal*/
void dectohex() {
	int temp, n, i = 0, j, rem;
	char hex[20], hex1[20] = "  ";
	printf("Enter the value of decimal to convert it into hexadecimal\n");
	scanf("%d", &n);
	while(n != 0) {
		rem = n % 16;
		switch(rem) {
			case 10:
				hex[i] = 'A';
				break;
			case 11:
				hex[i] = 'B';
				break;
			case 12:
				hex[i] = 'C';
				break;
			case 13:
				hex[i] = 'D';
				break;
			case 14:
				hex[i] = 'E';
				break;
			case 15:
				hex[i] = 'F';
				break;
			default:
				hex[i] = rem + '0';
				break;
		}
		i++;
		n = n / 16;
	}
	hex[i] = '\0';
	int len = 0;
	for(i = 0; hex[i] != '\0'; i++) {
		len++;
	}
	for(i = 0, j = len; hex[i] != '\0'; i++,j--) {
		hex1[j] = hex[i];
	}
	printf("%s", hex1);
	printf("\n");
}

/*This function converts decimal to octal*/
void dectooct() {
	int num, i = 1, j, oct[50];
	printf("Enter the decimal to convert it into octal\n");
	scanf("%d", &num);
	while(num != 0) {
		oct[i++] = num % 8;
		num = num / 8;
	}
	printf("Octal conversion is:-\n");
	for(j = i -1; j > 0; j--) {
		printf("%d", oct[j]);
	}
	printf("\n");
}
