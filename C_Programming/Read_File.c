#include<stdio.h>
#include<unistd.h> //universal standard . header
#include<fcntl.h> //f = file, cntl = control

int main()
{
    int fd = 0; //file discriptor
    char Arr[20] = {'\0'};

    fd = open("Hello.txt", O_RDONLY);
        
    if(fd == -1)
    {
        printf("Unable to open the file \n");

        return -1;
    }
    else
    {
        printf("File gets opened with fd : %d \n", fd);

        read(fd, Arr, 13);

        printf("Data from file is : %s \n", Arr);

        close(fd);
    }

    return 0;
}