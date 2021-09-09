#include <stdio.h>

float convert(float fahr) {
  return (5.0 / 9.0) * (fahr - 32.0);
  //This is the most simple way to convert fahrenheit in a function.
}

void main(){
	float fahr, celsius;
	
	for (fahr = 0; fahr <= 300.0; fahr = fahr + 20.0) {
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32));
		
	}
}
