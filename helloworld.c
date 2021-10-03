#include <unistd.h>

int     main(void)
{
    write(1, "helloworld\n", 13 );
    return (0);
}
