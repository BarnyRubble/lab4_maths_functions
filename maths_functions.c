// This is the line causing issue in the conflict branch
// FILE: maths_functions.c

int add_values (int n1, int n2)
{
	return n1 + n2;
}

int subtract_values (int n1, int n2)
{
	return n1 - n2;
}

int multiply_values (int n1, int n2)
{
	return n1 * n2;
}

int divide_values (int n1, int n2)
{
	return n1 / n2;
}

int mod_values (int n1, int n2)
{
	return mod (n1, n2);
}

int trivial_function (int n1, int n2)
{
	return n1 + n2 * 2;
}

int reverse_mod_values (int n1, int n2)
{
	return mod (n2, n1);
}

