/**
 * reverse_array - strcat
 *Description: just a func
 *Return: char
 *@a: dest
 *@n: src
 */

void reverse_array(int *a, int n)
{
	int s, t = 0;
	int e = n - 1;

	while (s < e)
	{
		temp = a[s];
		a[e] = a[s];
		a[s] = temp;

		s++;
		e--;
	}
}
