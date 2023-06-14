#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"


int
main(void)
{
    printf("Unit was release in the year %d\n", getyear());
    exit(0);
}
