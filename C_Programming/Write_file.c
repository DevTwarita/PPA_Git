#include<stdio.h>
#include<unistd.h> //universal standard . header
#include<fcntl.h> //f = file, cntl = control

int main()
{
    int fd = 0; //file discriptor

    fd = open("Hello.txt", O_RDWR);
        
    if(fd == -1)
    {
        printf("Unable to open the file");

        return -1;
    }
    else //here file is opened
    {
        printf("File gets opened with fd : %d \n", fd);

        write(fd,"Jay Ganesh...", 13);

        close(fd);
    }

    return 0;
}