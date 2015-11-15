		/* 'C' CALCULATOR */
/*This file contains all matrix functions */
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

/*THis function makes the addition of matrices*/
int matadd() {
	int i, j, m1[20][20], m2[20][20], m3[20][20];
	int r1, r2, c1, c2;
	printf("Enter the no of rows and column of first matrix\n");
	scanf("%d%d", &r1, &c1);
	printf("Enter the no of rows and column of second matrix\n");
	scanf("%d%d", &r2, &c2);
	if(r1 != r2 || c1 != c2) { 
		printf("Order is not same can't perform addition\n");
		return;
	}
	printf("Enter the element of first matrix\n");
	for(i = 0;i < r1;i++) {
		for(j = 0;j < c1;j++) {
			scanf("%d", &m1[i][j]);
		}
	}
	printf("Enter the element of second matrix\n");
	for(i = 0;i < r2;i++) {
		for(j = 0;j < c2;j++) {
			scanf(" %d", &m2[i][j]);
		}
	}
	for(i = 0;i < r1;i++) {
		for(j = 0;j < c1;j++) {
			m3[i][j] = m1[i][j] + m2[i][j];
		}
	}
	printf("The resultant matrix is :- \n");
	for(i = 0;i < r1;i++) {
		for(j = 0;j < c1;j++) {
			printf("%d\t",m3[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/* This function makes the multiplication of matrices*/
int matmul() {
	int a[20][20], b[20][20], c[20][20];
	int sum = 0;
	int i, j, k, r1, r2, c1, c2;
	printf("Enter the no of rows and column of first matrix\n");
	scanf("%d%d", &r1, &c1);
	printf("Enter the no of rows and column of second matrix\n");
	scanf("%d%d", &r2, &c2);
	if(c1 != r2) {
		printf("Multiplication cannot be performed\n");
		return;
	}
	printf("Enter the element of first matrix\n");
	for(i = 0;i < r1; i++) {
		for(j = 0;j < c1;j++) {
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter the element of second matrix\n");
	for(i = 0;i < r2;i++) {
		for(j = 0;j < c2;j++) {
			scanf("%d", &b[i][j]);
		}
	}
	for(i =0;i < r1;i++) {
		for(j = 0;j < c1;j++) {
			sum = 0;
			for(k = 0;k < r1;k++) {
				sum = sum + a[i][k] * b[k][j];
			}
			c[i][j] = sum;
		}
	}
	printf("The multiplication of matrix is:-\n");
	for(i = 0;i < r1;i++) {
		for(j = 0;j < c1;j++) {
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
	return 0;
} 

/*This function makes the subtraction of matrices*/
int matsub() {
	int a[20][20], b[20][20], c[20][20];
	int i, j, k;
	int r1, r2, c1, c2;
	printf("Enter the no of rows and column of first matrix\n");
	scanf("%d%d", &r1, &c1);
	printf("Enter the no of rows and column of second matrix\n");
	scanf("%d%d", &r2, &c2);
	printf("Enter the elements of first matrix\n");
	if(r1 != r2 || c1 != c2) {
		printf("Subtraction cannot be performed\n");
		return;
	}
	for(i = 0;i < r1;i++) {
		for(j = 0;j < c1;j++) {
			scanf("%d", &a[i][j]);
		}
	}
	printf("Enter the elements of second matrix\n");
	for(i = 0;i < r2;i++) {
		for(j = 0;j < c2;j++) {
			scanf("%d", &b[i][j]);
		}
	}
	for(i = 0;i < r1;i++) {
		for(j = 0;j < c1;j++) {
			c[i][j] = a[i][j] - b[i][j];
		}
	}
	printf("The resultant matrix is:- \n");
	for(i = 0;i < r1;i++) {
		for(j = 0;j < c1;j++) {
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
  	return 0;
}

/*This function find the determinant of matrix*/
int deter() {
	int b[3][3], i, j;
	int determinant = 0;
	printf("Enter the 3 * 3 matrix elements \n");
	for(i = 0;i < 3;i++) {
		for(j = 0;j < 3;j++) {
			scanf("%d", &b[i][j]); 
		}
	}
	for(i = 0;i < 3;i++) {
		determinant =  determinant + (b[0][i] * (b[1][(i + 1 ) % 3] * b[2][(i + 2) % 3] - b[1][(i + 2) % 3] * b[2][(i + 1) % 3]));
	}
	printf("The determinant value is %d\n", determinant);
	return 0;
}

/*This function find transpose of matrix*/
int trans() {
	int i, j, a[10][10], b[10][10];
	int m, n;
	printf("Enter the no. of rows and column of matrix\n");
	scanf("%d%d", &m, &n);
	printf("Enter the elements of matrix\n");
	for(i = 0;i < m;i++) {
		for(j = 0;j < n;j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for(i = 0;i < m;i++) {
		for(j = 0;j < n;j++) {
			b[j][i] = a[i][j];
		}
	}
	printf("The transpose of given matrix is:- \n");
	for(i = 0;i < n;i++) {
		for(j = 0;j < m;j++) {
			printf("%d\t", b[i][j]);
		}
		printf("\n");
	}
}

/*This function check whether matrix is symmetric or not*/
void symmetry() {
	int a[20][20], i, j;
	int m, n, x = 0;
	printf("Enter the no. of rows and column of matrix\n");
	scanf("%d%d", &m, &n);
	if(m != n)  {
		printf("Symmetry of non square matrix can't be found\n");
		return ;
	}
	printf("Enter the elements of matrix\n");
	for(i = 0;i < m;i++) {
		for(j = 0;j < n;j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for(i = 0; i < n; i++) {
		for(j = 0; j < m; j++) {
			if(a[i][j] != a[i][j]) {
			         x = 1;
			}
		}
	}
	printf("The matrix is ");
	(x == 0) ? printf("Symmetric") : printf("Nonsymmetric");
	printf("\n");
}
