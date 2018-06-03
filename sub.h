void sub(double *z, double *b, int n){
	for (int i = 0; i < n; i++){
		z[i] = b[i] - z[i];
	}


}
