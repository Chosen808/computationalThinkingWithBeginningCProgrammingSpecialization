#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//E = mc^2

#define _CRT_SECURE_NO_WARNINGS

main ()
{
    const double SpeedOfLight = 299792458.0;
    float Mass = 0.0;
    double Energy = 0.0;

    // I'm getting Mass and calculating and printing Energy
    printf ("Please enter the Mass of the object in kg: \n");
    scanf ("%f", &Mass);

    Energy = Mass * powf (SpeedOfLight, 2);

    printf ("Energy = %f J\n", Energy);
    
    return 0;


}