void *add(int i, int j) {	
	static int result;
	
    result = i + j;

	return &result;
}

void *subtract(int i, int j) {
	void *p;
	static int result;

	p = &result;
	result = i - j;

	return p;
}

void *multiply(int i, int j) {
	void *p;
	static int result;

	p = &result;
	result = i * j;

	return p;
}

void *divide(int i, int j) {
	void *p;
	static double result;

	p = &result;
	result = (double)i / j;

	return p;
}