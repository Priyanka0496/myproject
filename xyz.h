		/* 'C' CALCULATOR */
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

typedef struct pnode {
	int pow;
	float coeff;
	struct pnode *next;
}pnode;

pnode *create(int);
void print (pnode *);
pnode *addpoly(pnode *, pnode *);

void addition(); 
void subtraction();
void multiplication();
void division();
void modulo();
void factorial();
float squreroot(float);
void modulo();
int linear();

int matmul();
int matadd();
int matsub();
int deter();
int trans();
void symmetry();

double taninverse();
double sineinverse();
double cosinverse();
double sinefun();
double cosfun();

void dectobin();
void dectohex();
void dectooct();
double sinhyper();
double cosinehyper();
