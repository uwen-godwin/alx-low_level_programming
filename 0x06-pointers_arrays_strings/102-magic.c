/**
 * main - program prints a[2] = 98, followed by a new line.
 * Return: 0
 */

int main(void)
{
		int n;
		int a[5];
		int *p;

		a[2] = 1024;
		p = &n;
		/*
		* Add your line of code here...
		* Remember:
		* - you are not allowed to use 'a'
		* - you are not allowed to modify 'p'
		* - only one statement
		* - you are not allowed to code anything else than this line of code
		*/
		*(p + (2 * sizeof(int) / sizeof(int))) = 98;
		/* ...so that this prints 98\n */
		write(1, &a[2] + 7, 1);
		write(1, "\n", 1);
		return (0);
}
