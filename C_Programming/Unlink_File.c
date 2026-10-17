#include<stdio.h>
#include<unistd.h> //universal standard . header
#include<fcntl.h> //f = file, cntl = control

int main()
{
    int ret = 0;

    ret = unlink("Demo.txt");
    
    if (ret == -1)
    {
        printf("Unable to delete the file \n");

        return -1;
    }
    else
    {
        printf("File deleted successfully \n");
    }

    return 0;
}