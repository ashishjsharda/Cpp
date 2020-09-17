#include <iostream>
#include <stdio.h>
#include <cstddef>
#include <csignal>
void signalHandler(int signal)
{
    std::cout<<"Interrupt Signal "<<signal;
    exit(signal);
}
int main() {

    signal(SIGINT,signalHandler);
    int i=0;
    while (++i)
    {
        std::cout<<"Going to sleep"<<std::endl;
        if(i==3)
        {
            raise(SIGINT);
        }
        _sleep(2);

    }
    return 0;

}
