int check_dominance(double **a, int n){
	int check=1;
	double **d;
	d = new double*[n];
	for (int i = 0; i < n; i++){
		d[i] = new double[n];
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){

			d[i][j] = a[i][j];
		}
	}
	for (int i = 0; i < n; i++){
		double c = 0;
		for (int j = 0; j < n; j++){
			c = c + d[i][j];
		}
	
	}

	delete d;
	return check;


}
