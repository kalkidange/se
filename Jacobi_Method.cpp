#include "stdafx.h"
#include "add.h"
#include "sub.h"
#include "invert.h"
#include "iterate.h"
#include "multiplay.h"
#include "check_dominance.h"
#include <iostream>
using namespace std;

int main()
{
	double  **a, *b, *x,*er, tol;   int n;


	cout << "What is the size of the square matrix , n = ";

	cin >> n;
	a = new double *[n];
	for (int i = 0; i < n; i++){
		a[i] = new double[n];

	}
double **ad;
	ad = new double *[n];
	for (int i = 0; i < n; i++){
		ad[i] = new double[n];
	}

	er = new double[n];
	x = new double[n];
	b = new double[n];
	
	cout << endl << "Kindly enter the elements of the square coefficent matrix" << endl<<endl;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			cin >> a[i][j];

		}
	}

	

	if ((check_dominance(a, n))==0){
		cout << "The matrix is not diagonally dominant ";
		system ("Pause");
		delete a;
		main();
	}




	cout << endl << "What is the right hand vector" << endl;
	for (int i = 0; i < n; i++){
		cin >> b[i];
	}
	
		cout << endl << "What level of tolernace do you want tol= ";
		cin >> tol;
		


	cout << endl << "What is the initial guess";
	for (int i = 0; i < n; i++){
		cin >> x[i];
	}


	invert(ad,a, n);        

	

	
	
	for (int i = 0; i < n; i++){
		cout << x[i];
		cout << endl;
	} 




}
