bool check(double *er, int n, double tol){
	bool check;
	for (int i = 0; i < n; i++){
		if (er[i]>tol)
			check = true;

		else 
			check = false ;
	}

	return check;

}
