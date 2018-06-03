void invert(double **ad, double **a , int n){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			ad[i][j] = a[i][j];
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			if (i != j){ ad[i][j] = 0; }
		}
	}

	for (int i = 0; i< n; i++){
		ad[i][i] = 1 / (ad[i][i]);
	}

}
