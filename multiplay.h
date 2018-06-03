void multiply(double *z, double *x, double **a, int n){ 
	
	
	for (int i = 0; i<n; i++){
		z[i] = 0;
		for (int j = 0; j < n; j++){
			z[i] =z[i] + a[i][j] * x[j];
		
		}

	}


}
