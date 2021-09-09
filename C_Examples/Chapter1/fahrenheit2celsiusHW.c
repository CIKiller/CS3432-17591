#include <stdio.h>

main() {
	  float fahr;

	  for (fahr = 0; fahr <= 300.00; fahr = fahr + 20.00)
		    printf(fahr, convert(fahr));
}

float convert(float fahr) {
  fahr = ((fahr - 32) * 0.55)
  
  if (fahr > 0) {
    return fahr
  }
}
