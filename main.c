#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int fd = open("toto", O_RDWR | O_CREAT, 0644);
    char str[25];

    if (fd == -1) {
        perror("open");
        return 1;
    }
    printf("creating file %s....\n", "toto");
    sleep(1);
    str[0] = 'E';
    sleep(1);
    str[1] = 'P';
    sleep(1);
    str[2] = 'I';
    sleep(1);
    str[3] = 'C';
    sleep(1);
    str[4] = 'T';
    sleep(1);
    printf("please wait for file creation please....\n");
    str[5] = 'F';
    sleep(1);
    str[6] = '{';
    sleep(1);
    str[7] = 'D';
    sleep(1);
    str[8] = '1';
    sleep(1);
    str[9] = '4';
    sleep(1);
    str[10] = '_';
    printf("wait again\n");
    sleep(1);
    str[11] = '4';
    sleep(1);
    str[12] = 'R';
    sleep(1);
    str[13] = '3';
    sleep(1);
    str[14] = '_';
    sleep(1);
    str[15] = '7';
    printf("here it comes.....\n");
    sleep(1);
    str[16] = 'H';
    sleep(1);
    str[17] = '3';
    sleep(1);
    str[18] = '_';
    sleep(1);
    str[19] = '8';
    sleep(1);
    str[20] = 'E';
    printf("almost done....\n");
    sleep(1);
    str[21] = '5';
    sleep(1);
    str[22] = 'T';
    sleep(1);
    str[23] = '}';
    sleep(1);
    str[24] = '0';
    sleep(1);
    dprintf(fd, "%s", str);
    remove("toto");
}
