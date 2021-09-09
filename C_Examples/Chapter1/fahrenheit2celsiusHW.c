#include <stdio.h>

float convert(float fahr) {
  float celsius = ((fahr - 32.0) * 0.55);
  
  return celsius;
}

void main() {
	  float fahr, celsius;

	  for (fahr = 0; fahr <= 300.00; fahr = fahr + 20.00) {
		    celsius = convert(fahr);
		  
		    printf("%d\t%d\n", fahr, celsius);
	  }
}
