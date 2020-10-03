#include <iostream>
#include <time.h>

/**
 * Print Current date and time
 * @return int
 * @author ashish
 */

int main() {

    time_t my_time=time(NULL);
    printf("%s",ctime(&my_time));
    return 0;
}

