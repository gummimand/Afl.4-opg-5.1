#include <stdio.h>
#include <math.h>

double solveRootPos(a, b, discriminant){
  double root2;
  root2 = (-b + sqrt(discriminant))/(2*a);

  return (root2);
}


double solveRootNeg(a, b, d) {
    
  return (-b -sqrt(d))/(2*a);
    
}


int main(void){
	double a, b, c, disk;
	double posRoot = 0, negRoot = 0;
	
	printf("Insert the value of a, b & c\n");
	scanf("%lf%lf%lf",&a,&b,&c);

	disk = dicriminant(a, b, c);
	

	if disk == 0;
		posRoot = solveRootPos(a, b, disk);
		printf("The first and only root is: %lf\n", posRoot);

	else if disk > 0;
		posRoot = solveRootPos(a, b, disk);
		negRoot = solveRootNeg(a, b, disk);
		printf("The first root is: %lf and the second root is: %lf", posRoot, negRoot)
	else
		printf("Error! Discriminant is below zero!\n");

	return 0;
}

double discriminant(a, b, c)
{
discriminant = b * b - 4 * a * c;

 return (discrimant);
}
