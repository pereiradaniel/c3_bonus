#include <stdio.h>
int main() {
	float a, b;		// Declare two floats.

	// Query the user:
	printf("How much of a bonus did you get? ");
	scanf_s(" %f", &a);	// Read user input.
	
	b = .85 * a;	// Calculate bonus.

	// Program output:
	printf("If you give 15 percent to charity, you will still have %.2f.", b);
	
	// End program.
	return 0;

}