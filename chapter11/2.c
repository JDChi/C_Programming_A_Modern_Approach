#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time,
                         int *arrival_time);

int main(int argc, char const *argv[]) {
  int start1 = 8 * 60;
  int start2 = 9 * 60 + 43;
  int start3 = 11 * 60 + 19;
  int start4 = 12 * 60 + 47;
  int start5 = 14 * 60;
  int start6 = 15 * 60 + 45;
  int start7 = 19 * 60;
  int start8 = 21 * 60 + 45;
  int hour, minutes;

  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hour, &minutes);
  int user_start = hour * 60 + minutes;
  int departure_time, arrival_time;
  find_closest_flight(user_start, &departure_time, &arrival_time);

  return 0;
}

void find_closest_flight(int desired_time, int *departure_time,
                         int *arrival_time) {
  int start1 = 8 * 60;
  int start2 = 9 * 60 + 43;
  int start3 = 11 * 60 + 19;
  int start4 = 12 * 60 + 47;
  int start5 = 14 * 60;
  int start6 = 15 * 60 + 45;
  int start7 = 19 * 60;
  int start8 = 21 * 60 + 45;

  int end1 = 10 * 60 + 16;
  int end2 = 11 * 60 + 52;
  int end3 = 13 * 60 + 31;
  int end4 = 15 * 60;
  int end5 = 16 * 60 + 8;
  int end6 = 17 * 60 + 55;
  int end7 = 21 * 60 + 20;
  int end8 = 23 * 60 + 58;

  if (desired_time <= start1) {
    *departure_time = start1;
    *arrival_time = end1;
    printf("Closet departure time is 8:00 a.m , arriving at 10:16 a.m\n");

  } else if (desired_time >= start8) {
    *departure_time = start8;
    *arrival_time = end8;
    printf("Closet departure time is 9:45 p.m , arriving at 11:58 p.m\n");

  } else if (desired_time <= start2) {
    if (desired_time - start1 < start2 - desired_time) {
      *departure_time = start1;
      *arrival_time = end1;
      printf("Closet departure time is 8:00 a.m , arriving at 10:16 a.m\n");

    } else {
      *departure_time = start2;
      *arrival_time = end2;
      printf("Closet departure time is 9:43 a.m , arriving at 11:52 a.m\n");
    }
  } else if (desired_time <= start3) {
    if (desired_time - start2 < start3 - desired_time) {
      *departure_time = start2;
      *arrival_time = end2;
      printf("Closet departure time is 9:43 a.m , arriving at 11:52 a.m\n");

    } else {
      *departure_time = start3;
      *arrival_time = end3;
      printf("Closet departure time is 11:19 a.m , arriving at 1:31 p.m\n");
    }
  } else if (desired_time <= start4) {
    if (desired_time - start3 < start4 - desired_time) {
      *departure_time = start3;
      *arrival_time = end3;
      printf("Closet departure time is 11:19 a.m , arriving at 1:31 p.m\n");

    } else {
      *departure_time = start4;
      *arrival_time = end4;
      printf("Closet departure time is 12:47 p.m , arriving at 3:00 p.m\n");
    }
  } else if (desired_time <= start5) {
    if (desired_time - start4 < start5 - desired_time) {
      *departure_time = start4;
      *arrival_time = end4;
      printf("Closet departure time is 12:47 p.m , arriving at 3:00 p.m\n");

    } else {
      *departure_time = start5;
      *arrival_time = end5;
      printf("Closet departure time is 2:00 p.m , arriving at 4:08 p.m\n");
    }
  } else if (desired_time <= start6) {
    if (desired_time - start5 < start6 - desired_time) {
      *departure_time = start5;
      *arrival_time = end5;
      printf("Closet departure time is 2:00 p.m , arriving at 4:08 p.m\n");

    } else {
      *departure_time = start6;
      *arrival_time = end6;
      printf("Closet departure time is 3:45 p.m , arriving at 5:55 p.m\n");
    }
  } else if (desired_time <= start7) {
    if (desired_time - start6 < start7 - desired_time) {
      *departure_time = start6;
      *arrival_time = end6;
      printf("Closet departure time is 3:45 p.m , arriving at 5:55 p.m\n");

    } else {
      *departure_time = start7;
      *arrival_time = end7;
      printf("Closet departure time is 7:00 p.m , arriving at 9:20 p.m\n");
    }
  } else if (desired_time <= start8) {
    if (desired_time - start7 < start8 - desired_time) {
      *departure_time = start7;
      *arrival_time = end7;
      printf("Closet departure time is 7:00 p.m , arriving at 9:20 p.m\n");

    } else {
      *departure_time = start8;
      *arrival_time = end8;
      printf("Closet departure time is 9:45 p.m , arriving at 11:58 p.m\n");
    }
  }
}