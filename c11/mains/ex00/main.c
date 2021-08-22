#include <errno.h>
#include <stdio.h>
#include <stdlib.h>



// functions
void ft_foreach(int *, int, void(*)(int));

void print_int(int num)
{
	printf("%i ", num);
}



// main
int main(void)
{
	int arr[] = { 1, 3, 5, 7, 9, 0, 2, 4, 6, 8 };
	int const n = sizeof(arr) / sizeof(int);

	ft_foreach(arr, n, print_int);
	printf("\n");
	return (errno != 0);
}





// end
