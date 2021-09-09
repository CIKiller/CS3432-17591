#include <stdio.h>

void main() {
	  float fahr, celsius;

	  for (fahr = 0; fahr <= 300.00; fahr = fahr + 20.00) {
		    float celsius = convert(fahr);
		  
		    printf("%d\t%d\n", fahr, celsius);
	  }
}

float convert(float fahr) {
  fahr = ((fahr - 32) * 0.55);
  
  return fahr;
}
