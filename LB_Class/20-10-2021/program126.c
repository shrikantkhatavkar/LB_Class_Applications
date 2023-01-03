
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>

int main()
{
	int fd = 0;   //file screpter
	char Fname[30];

	printf("Enter file name\n");
	scanf("%s", Fname);

	fd = creat(Fname,0777); 
	
	// Fname --> file name
	// 0777 --> Permision

	if(fd == -1)
	{
		printf("Unable to create the file\n");	
	}
	else
	{
		printf("File Succesfully created\n");
	}

	return 0;
}