
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<io.h>
#include<fcntl.h>

int main()
{
	int fd = 0, iRet = 0;   //file screpter
	char Fname[30];
	
	char Data[7];

	printf("Enter file name\n");
	scanf("%s", Fname);

	fd = open(Fname, O_RDWR); 
		// kay , kashasathi
	// Fname --> file name
	// 0777 --> Permision

	if(fd == -1) //fd --->file descripter
	{
		printf("Unable to open file\n");
		return -1; // Retrun to OS	
	}
	else
	{
		printf("File Succesfully opened with FD: %d\n",fd);
	}

	iRet = read(fd, Data,7);
			// kashat, kay ,kiti

	//printf("%d bytes gets succesfully read from the file\n",iRet);	

	//printf("Data from the file is :");

	write(1,Data,iRet); // 1--> stdout --> monitor
			    // 2--> like stdout ---> error divice
			    //0 --> stdin ---> keyboard
	close(fd);

	return 0;
}