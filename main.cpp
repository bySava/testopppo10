double my_pow(double base, int exponent){
	double temp = base;
	for (int i = 1; i < abs(exponent); i++)
	{
		base = base * temp;
	}
	if (exponent < 0)
	{
		base = 1 / base;
	}
	return base;
}