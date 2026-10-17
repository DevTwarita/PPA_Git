#include<stdio.h>
#include<unistd.h> //universal standard . header
#include<fcntl.h> //f = file, cntl = control

int main()
{
    int fd = 0; //file discriptor
    char Arr[] = "Marvellous Infosystems"; //overwritten on the jay ganesh

    fd = open("Hello.txt", O_RDWR);
        
    if(fd == -1)
    {
        printf("Unable to open the file");

        return -1;
    }
    else
    {
        printf("File gets opened with fd : %d \n", fd);

        write(fd, Arr, 10);

        close(fd);
    }

    return 0;
}