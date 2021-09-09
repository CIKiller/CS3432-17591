#include <stdio.h>

float convert(float fahr) {
  return (5.0 / 9.0) * (fahr - 32);
  //This is the most simple way to convert fahrenheit in a function.
}

void main(){
	float fahr, celsius;
	
	for (fahr = 0; fahr <= 300; fahr = fahr + 20) {
		celsius = convert(fahr);
		//Call of the function.
		
		printf("%3d %6.1f\n", fahr, celsius);
		
	}
}
