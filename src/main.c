#include <stdio.h> // basic io
#include <stdlib.h> // for system calls

int main(int argc, const char *argv[])
{
	if (argc > 2)
	{
		printf("Error: Too many arguments\n");
	}
	else if (argc < 2)
	{
		printf("Error: Too little arguments\n");
	}
	return 0;
}
