#include <stdio.h>
#include <string.h>

typedef struct {
    char name[30];
    double diameter;
    int moons;
    double or_time, ro_time;
} planet_t;

int main() {
    planet_t planet_1, planet_2;
    strcpy(planet_1.name, "jupiter");
    planet_1.diameter =  142.34;
    planet_1.moons = 16;
    planet_1.or_time = 11.9;
    planet_1.ro_time = 9.23;

    return 0;
}