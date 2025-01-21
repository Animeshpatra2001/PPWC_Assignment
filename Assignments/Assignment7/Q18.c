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

    planet_t *ptr = &planet_2;
    strcpy(ptr -> name, "Earth");
    ptr -> diameter = 200;
    ptr -> moons = 1;
    ptr -> or_time = 365.25;
    ptr -> ro_time = 24;

    return 0;
}