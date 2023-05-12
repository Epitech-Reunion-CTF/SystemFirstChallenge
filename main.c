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
    dprintf(fd, "33d1dc6453a735194034a5443547aeb115a62602b2b9e5f1b44f7f10d5505fe0");
    remove("toto");
}
