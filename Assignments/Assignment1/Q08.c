/*8. Write a program that calculates the acceleration (m/s2) of a jet fighter launched from an aircraft-carrier
catapult, given the jet’s takeoff speed in km/hr and the distance (meters) over which the catapult accelerates 
the jet from rest to takeoff. Assume constant acceleration. Also calculate the time (seconds) for
the fighter to be accelerated to takeoff speed. When you prompt the user, be sure to indicate the units
for each input. For one run, use a takeoff speed of 278 km/hr and a distance of 94 meters. Relevant
formulas (v = velocity, a = acceleration, t = time, and s = distance)
v = at
s =1/2(at^2)
*/

#include <stdio.h>

int main() {
    const float kmh_to_ms = 5.0 / 18.0;

    float takeoffSpeedKmh, distance;
    printf("Enter takeoff speed (km/hr): ");
    scanf("%f", &takeoffSpeedKmh);
    printf("Enter distance (in meters): ");
    scanf("%f", &distance);

    float takeoffSpeedMs = takeoffSpeedKmh * kmh_to_ms;
    float acceleration = (takeoffSpeedMs * takeoffSpeedMs) / (2 * distance);
    float time = takeoffSpeedMs / acceleration;

    printf("Acceleration: %.2f m/s^2\n", acceleration);
    printf("Time to takeoff speed: %.2f seconds\n", time);

    return 0;
}

/*
Output
Enter takeoff speed (km/hr): 100
Enter distance (in meters): 3000
Acceleration: 0.13 m/s^2
Time to takeoff speed: 216.00 seconds
*/