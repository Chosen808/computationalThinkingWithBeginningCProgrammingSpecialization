#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * The Problems:
 *  * Given x and y for two points provided by the user, calculate the speed at whihc we'd
 *    have to move to go between the points in 3 seconds
 *  * Calculate the direction, in degrees, we'd have to move to go between the two points.
*/

#define TIME_TO_MOVE 3

#ifndef M_PI
    #define M_PI 3.14159265359
#endif

main ()
{
    float pointOneX;
    float pointOneY;
    float pointTwoX;
    float pointTwoY;

    printf ("Enter x for first point: ");
    scanf ("%f", &pointOneX);

    printf ("Enter y for first point: ");
    scanf ("%f", &pointOneY);

    printf ("Enter X for the second point: ");
    scanf ("%f", &pointTwoX);

    printf ("Enter Y for the second point: ");
    scanf ("%f", &pointTwoY);

    // Calculate distance, speed and direction between the two points
    float deltaX = pointTwoX - pointOneX;
    float deltaY = pointTwoY - pointOneY;
    float distance = sqrtf (powf (deltaX, 2) + powf (deltaY, 2));

    float speed = distance / TIME_TO_MOVE;
    float direction = atan2f (deltaY, deltaX);
    direction *= 180 / M_PI;

    puts ("\n");
    printf ("Speed = %.2f \n", speed);
    printf ("Direction = %.2f degrees \n", direction);

    return (EXIT_SUCCESS);
}