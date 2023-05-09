#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(void)
{
    int fd = open("toto", O_RDWR | O_CREAT, 0644);

    if (fd == -1) {
        perror("open");
        return 1;
    }
    printf("creating file %s....\n", "toto");
    sleep(3);
    dprintf(fd, "EPICTF{D14_4R3_7H3_8E5T}");
    remove("toto");
}
