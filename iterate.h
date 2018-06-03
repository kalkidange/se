void iterate(double **a, double *x, double *b, double **ad ,int n){
	double *z;
	z = new double [n];
	double *y;
	y = new double[n];
	multiply(z, x, a, n);

sub(z, b, n);

multiply(y, z, ad, n);

add(x, y,n);
	
}
