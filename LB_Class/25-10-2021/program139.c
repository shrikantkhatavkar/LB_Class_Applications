#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd = 0;
	char Arr[10];
	fd = open("LB_17.txt", O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open file \n");

	}

	///////////
	// 0 from starting position
	// 1  from current positon
	// 2 from end of the file

	lseek(fd,5,0);

	read(fd, Arr, 5);
	
	printf("Data from file :");

	write(1, Arr, 5);

	printf("\n");
	
	close(fd);

	return 0;
}