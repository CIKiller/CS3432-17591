#include <stdio.h>

float convert(float fahr) {
  float celsius = ((fahr - 32.0) * 0.55);
  
  print("Celsius:", celsius);

  return celsius;
}

void main() {
	  float fahr, celsius;

	  for (fahr = 0; fahr <= 300.00; fahr = fahr + 20.00) {
          print("fahr:", fahr);
		    celsius = convert(fahr);
	  }
}
