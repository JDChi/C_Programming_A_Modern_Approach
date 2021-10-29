#include <stdio.h>

int main(int argc, char const *argv[])
{
	int start1 = 8 * 60;
	int start2 = 9 * 60 + 43;
	int start3 = 11 * 60 + 19;
	int start4 = 12 * 60 + 47;
	int start5 = 14 * 60;
	int start6 = 15 * 60 + 45;
	int start7 = 19 * 60;
	int start8 = 21 * 60 + 45;
	int hour, minutes, min, user_start;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hour, &minutes, &ch);

    if(ch == 'p' || ch == 'P'){
        user_start = (hour + 12) * 60 + minutes;
    }else{
        user_start = hour * 60 + minutes;
    }

    if(user_start <= start1){
        min = start1;
        printf("Closet departure time is 8:00 a.m , arriving at 10:16 a.m\n");
        return 0;
    }else if(user_start >= start8){
        min = start8;
        printf("Closet departure time is 9:45 p.m , arriving at 11:58 p.m\n");
        return 0;
    }else if(user_start <= start2){
        if(user_start - start1 < start2 - user_start){
            min = start1;
            printf("Closet departure time is 8:00 a.m , arriving at 10:16 a.m\n");
            return 0;
        }else {
            min = start2;
            printf("Closet departure time is 9:43 a.m , arriving at 11:52 a.m\n");
            return 0;
        }
    }else if(user_start <= start3){
        if(user_start - start2 < start3 - user_start){
            min = start2;
            printf("Closet departure time is 9:43 a.m , arriving at 11:52 a.m\n");
            return 0;
        }else {
            min = start3;
            printf("Closet departure time is 11:19 a.m , arriving at 1:31 p.m\n");
            return 0;
        }
    }else if(user_start <= start4){
        if(user_start - start3 < start4 - user_start){
            min = start3;
            printf("Closet departure time is 11:19 a.m , arriving at 1:31 p.m\n");
            return 0;
        }else {
            min = start4;
            printf("Closet departure time is 12:47 p.m , arriving at 3:00 p.m\n");
            return 0;
        }
    }else if(user_start <= start5){
        if(user_start - start4 < start5 - user_start){
            min = start4;
            printf("Closet departure time is 12:47 p.m , arriving at 3:00 p.m\n");
            return 0;
        }else {
            min = start5;
            printf("Closet departure time is 2:00 p.m , arriving at 4:08 p.m\n");
            return 0;
        }
    }else if(user_start <= start6){
        if(user_start - start5 < start6 - user_start){
            min = start5;
            printf("Closet departure time is 2:00 p.m , arriving at 4:08 p.m\n");
            return 0;
        }else {
            min = start6;
            printf("Closet departure time is 3:45 p.m , arriving at 5:55 p.m\n");
            return 0;
        }
    }else if(user_start <= start7){
        if(user_start - start6 < start7 - user_start){
            min = start6;
            printf("Closet departure time is 3:45 p.m , arriving at 5:55 p.m\n");
            return 0;
        }else {
            min = start7;
            printf("Closet departure time is 7:00 p.m , arriving at 9:20 p.m\n");
            return 0;
        }
    }else if(user_start <= start8){
        if(user_start - start7 < start8 - user_start){
            min = start7;
            printf("Closet departure time is 7:00 p.m , arriving at 9:20 p.m\n");
            return 0;
        }else {
            min = start8;
            printf("Closet departure time is 9:45 p.m , arriving at 11:58 p.m\n");
            return 0;
        }
    }
    
    return 0;
}
