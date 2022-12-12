#include <stdio.h>

int main(){
    float longitude, latitude;
    char info [80];
    int started = 1;
    puts("data = [");
    while (scanf("%f, %f, %79[^\n]", &latitude, &longitude, info) == 3)
    {
        if(started)
            started = 0;
        else
            printf(", \n");
        if (latitude < -90 || latitude > 90 )
        {
            fprintf(stderr, "Invalid latitude: %f", latitude);
            return 1;
        }
        if (longitude < -180 || longitude > 180 )
        {
            fprintf(stderr, "invalid longitude: %f", longitude);
            return 1;
        }
        printf("{latitude: %f, longitude: %f, info: '%s'}", latitude, longitude, info);
    }
    
    puts("\n ]");
    return 0;
}