#include <stdio.h>

float convert(float fahr) {
  return (5.0 / 9.0) * (fahr - 32.0);
  //Directly returns the result of the calculation.
}

main()
{
	  int fahr;
	
	  float celsius;

	  for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
		  celsius = convert((float)fahr);
		  //Call of the function, requires transforming the integer int a float.
		  
		  printf("%3d %6.1f\n", fahr, celsius);
		  
	  }
}
