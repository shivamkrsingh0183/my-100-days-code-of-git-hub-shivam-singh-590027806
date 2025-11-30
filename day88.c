#include <stdio.h>
#include<string.h>

//QUESTON1:Print all enum names and integer values using a loop.
enum lights {RED, YELLOW, GREEN};
int main() {
    enum lights i;
    char *names[] = {"RED", "YELLOW", "GREEN"};
    for (i = RED; i <= GREEN; i++) {
        printf("%s=%d\n", names[i], i);
    }
    return 0;
    
}
