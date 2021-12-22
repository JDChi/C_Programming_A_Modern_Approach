#include <stdio.h>

int main(int argc, char const *argv[]) {
  char *months[] = {" ",       "January",  "February", "March",  "April",
                    "May",     "June",     "July",     "August", "September",
                    "October", "November", "December"};
  printf("Enter a date (mm/dd/yyyy): ");
  int month, day, year;
  scanf("%2d/%d/%4d", &month, &day, &year);
  printf("Yoou entered the date %s %d, %d\n", months[month], day, year);
  return 0;
}