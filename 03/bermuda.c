#include <stdio.h>
int main(int argc, char *argv[])
{
    float latitude;
    float longtitude;
    char info[80];

    while(scanf("%f,%f,%79[^\n]",&latitude,&longtitude,info) == 3){
        if(latitude > 26 && latitude <34 && longtitude >-76 && longtitude < -64){
            printf("%f, %f, %s\n",latitude,longtitude,info);
        }
    }
    return 0;
}
