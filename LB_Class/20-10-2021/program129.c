
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0, iRet = 0;   //file screpter
	char Fname[30];
	
	char Data[30] = "Marvellous Infosystems";

	printf("Enter file name\n");
	scanf("%s", Fname);

	fd = open(Fname, O_RDWR); 
		// kay , kashasathi
	// Fname --> file name
	// 0777 --> Permision

	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1; // Retrun to OS	
	}
	else
	{
		printf("File Succesfully opened with FD: %d\n",fd);
	}

	iRet = write(fd, Data,10);
			// kashat, kay ,kiti

	printf("%d bytes gets succesfully written in the file\n",iRet);	

	return 0;
}