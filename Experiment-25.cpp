#include<stdio.h>
#include <fcntl.h>
int main()
{
	int fd1 = open("Experiment-22.cpp", O_RDONLY);
	if (fd1 < 0)
	{
		perror("c1");
	}
	printf("opened the fd = % d\n", fd1);
	if (close(fd1) < 0)
	{
		perror("c1");
	}
	printf("closed the fd.\n");
}
