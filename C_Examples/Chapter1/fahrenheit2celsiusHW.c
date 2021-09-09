#include <stdio.h>

float convert(float fahr) {
  fahr = ((fahr - 32) * 0.55);
  
  return fahr;
}

void main() {
	float fahr, celsius;

	for (fahr = 0; fahr <= 300.00; fahr = fahr + 20.00) {
		celsius = convert(fahr);
		
		printf("%d\t%d\n", fahr, celsius);
	}
}
