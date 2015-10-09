/* 
 * Quadratic Equation Solver
 * By B2-4, Aalborg University
 * 
 * Daniel Broder Jensen
 * Joachim T. H. Nielsen
 * Jonas Møller 
 * Benjamin Bøgh
 * Nicolaj Thostrup
 * Nicklas Velin
 * Christian Kloster
 */


//Includes
#include <stdio.h>
#include <math.h>

//Function prototypes
double discriminant(double a,double b,double c);
double solveRootPos(double a,double b,double discriminant);
double solveRootNeg(double a,double b,double d);

//Main
int main(void) {
	double a, b, c, disk; //Variables for user input a, b and c. Variable for discriminant.
	double posRoot = 0, negRoot = 0; //Variables for storing roots
	
	//Prompt user for a, b, c
	printf("Insert the value of a, b & c\n");
	scanf("%lf%lf%lf",&a,&b,&c);
    
    //Calculate the discriminant
	disk = discriminant(a, b, c);
	
    //Print the results
	if (disk == 0) { //If the discriminant equals 0, there is one root.
		posRoot = solveRootPos(a, b, disk);
		printf("The first and only root is: %lf\n", posRoot);
    }
	else if (disk > 0) {//If the discriminant is above 0, there are two roots
		posRoot = solveRootPos(a, b, disk);
		negRoot = solveRootNeg(a, b, disk);
		printf("The first root is: %lf and the second root is: %lf\n", posRoot, negRoot);
	}
	else//If the discriminant does not equal 0, nor is above 0, there are no roots!
		printf("Error! Discriminant is below zero!\n");

	return 0;
}


//Function for calculating the diskriminant.
double discriminant(double a, double b, double c)
{
    double discriminant = (b * b - 4 * a * c);

    return (discriminant);
}


//Function for findind the first root.
double solveRootPos(double a, double b, double discriminant){

  double root2;
  root2 = (-b + sqrt(discriminant))/(2*a);

  return (root2);
}

//Function for finding the second root.
double solveRootNeg(double a, double b, double d) {
    
  return (-b -sqrt(d))/(2*a);   
}

