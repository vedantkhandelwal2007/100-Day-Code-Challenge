// Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

// /*
// Sample Test Cases:
// Input 1:
// GREEN
// Output 1:
// Go

// */

#include <stdio.h>
#include <string.h>

enum trafficlights {
    RED,
    YELLOW,
    GREEN
};

int main() {
    char input[10];
    enum trafficlights light;

    scanf("%s", input);

    if (strcmp(input, "RED") == 0)
        light = RED;
    else if (strcmp(input, "YELLOW") == 0)
        light = YELLOW;
    else if (strcmp(input, "GREEN") == 0)
        light = GREEN;
    else {
        printf("Invalid");
        return 0;
    }

    if (light == RED)
        printf("Stop");
    else if (light == YELLOW)
        printf("Wait");
    else if (light == GREEN)
        printf("Go");

    return 0;
}
