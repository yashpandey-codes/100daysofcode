
#include <stdio.h>
#include <string.h>

enum TrafficLight {
    RED, YELLOW, GREEN
};

int main() {
    char light[20];
    enum TrafficLight signal;

    scanf("%19s", light);

    if (strcmp(light, "RED") == 0) {
        signal = RED;
    }
    else if (strcmp(light, "YELLOW") == 0) {
        signal = YELLOW;
    }
    else if (strcmp(light, "GREEN") == 0) {
        signal = GREEN;
    }
    else {
        return 0;
    }

    switch (signal) {
        case RED:
            printf("Stop");
            break;

        case YELLOW:
            printf("Wait");
            break;

        case GREEN:
            printf("Go");
            break;
    }

    return 0;
}
