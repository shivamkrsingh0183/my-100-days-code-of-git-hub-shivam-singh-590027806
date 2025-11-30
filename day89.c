#include <stdio.h>
#include<string.h>

//QUESTION1:Show that enums store integers by printing assigned values.
enum status {SUCCESS=11,FAILURE=3,TIMEOUT=21};

int main() {
    printf("SUCCESS=%d\n",SUCCESS);
    printf("FAILURE=%d\n",FAILURE);
    printf("TIMEOUT=%d\n",TIMEOUT);

return 0;
}

