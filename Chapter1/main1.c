//program to print the fahrenheit-celcius table

#include <stdio.h>

main()
{
  float fahr, celcius;
  float lower, upper, step;

  lower = 0;
  upper = 300;
  step = 10;

  fahr = lower;

  while(fahr <= upper)
  {
    celcius = 5 * (fahr-32) / 9;
    printf("%6.2f\t%6.2f\n", fahr, celcius);
    fahr = fahr + step;
  }
}
