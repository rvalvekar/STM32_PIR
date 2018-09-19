#include "mbed.h"

DigitalOut myled(D2);
DigitalIn  pinstate(D7);

int main() {
    while(1) {
        if (pinstate == 1) 
        {
            myled = 1;
        } else 
        {
            myled = 0;
        }       
               
    }
}
