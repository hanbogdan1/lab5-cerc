#include <stdio.h>
#include <stdlib.h>

#define max 100

/*
1.	Cea mai lungă subsecvență ordonată. Scrieți un program C care cere utilizatorului introducerea elementelor naturale ale unui vector iar programul va afişa cea mai lungă subsecvență ordonată de elemente consecutive din vector. Citirea se încheie când se introduce un număr negativ. Afișarea se va face respectând șablonul dat mai jos. Folosiți notația specifică pointerilor și expresii cu pointeri (aritmetică de pointeri).
Se vor folosi doar variabile locale, funcţii şi un stil de programare adecvat.

Șablon pentru afișare:
-------------------------------------------------------------------------------
Introduceţi elementele vectorului: 7 1 6 2 5 6 7 8 4 3 5 6 -1
Secventa cea mai lunga ordonata crescator este: 2 5 6 7 8
-------------------------------------------------------------------------------

*/


void afisare(int *v, int lg) {
	printf("\n");
	int i = 0;
	for (; i < lg; i++) {
		printf("%d ", v[i]);
	}
	printf("\n");

}
void gasire_max(int*v, int size);
void cerinta1() {
	int v[] = { 19,7,9,3,19,21,6,3 };
	int size = 7;


	afisare(v, size);
	gasire_max(v, size);
}


void gasire_max(int*v, int size) {
	int *p = v;
	int * q = v;
	int *rez = v;
	int lg_max = 0;
	int lg_curenta = 0;
	//int v[] = { 19,5,7,9,6,3 };
	for (p = v; p < v + size - 1; p++) {
		lg_curenta = 0;
		printf("\n");

		for (q = p; q < v + size - 1 && *q < *(q + 1); q++, lg_curenta++);
		lg_curenta++;

		if (lg_curenta > lg_max) {
			rez = p;
			lg_max = lg_curenta;
		}
	}

	afisare(rez, lg_max);
	//DOar daca fac malloc ;D 
	//free(p);
	//free(q);
	//free(rez);

}



void test() {
	int v[] = { 1,2,3,4 };
	int *p = v;
	printf("%d", *p);
	p++;
	printf("%d", *p);
	p++;
	printf("%d", *p);
}



int adunare(int a, int b) {
	return a + b;
}

int inmultire(int a, int b) {
	return a * b;
}

typedef int(*funct)(int a, int b);

typedef const int* (**functie[200])() ;
int main()
{
	//cerinta1();
	funct a = &adunare;
	printf("%d \n", a(3, 2));
	 a = &inmultire;
	printf("%d \n", a(3, 2));
	int x;
	scanf("%d", &x);
}