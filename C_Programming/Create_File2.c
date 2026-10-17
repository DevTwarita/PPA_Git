#include<stdio.h>
#include<unistd.h> //universal standard . header
#include<fcntl.h> //f = file, cntl = control

//first 3 file discriptors are reserved for stdin.h, stdout.h stderr.h

//different process different address space for the file thats why fd = 3 index

int main()
{
    int fd = 0; //file discriptor

    fd = creat("Hello.txt", 0777);  // 0777 = for permissions
    
    if(fd == -1)
    {
        printf("Unable to create the file");

        return -1;
    }
    else
    {
        printf("File gets created with fd : %d \n", fd);
    }

    return 0;
}