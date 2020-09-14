#include <iostream>
#include <math.h>
using namespace std;
//Declare Vairables
double pi, n, sum, equationAnswer;


int main() 
{
	//Welcome message
	cout << "Welcome to the Pi Approximator\n\n";
	
	//Set answer to 'y' to start the while loop
	char answer = 'y';

	//While loop.
	//Use (toupper()) to make sure that if they enter Y or y its always an uppercase Y
	while (toupper(answer) == 'Y')
	{
		//Ask them to input there terms
		cout << "Input the number of terms in that you want to approximate the value of pi\n\n";
		//Input stored as n
		cin >> n;
		
		//For i, iterations, or the summnation notion of n i = 0. This will do the equation 4 * (pow(-1, i) / ((2 * i) + 1)) starting at i = 0 
		//then adding 1 to i (i++) going until i <= n or i <= the number of terms the user wanted
		for (double i = 0; i <= n; i++)
		{
			
			pi += 4 *  (pow(-1, i) / ((2 * i) + 1));
			
		}
		//Output the approximation of PI and ask if they want to try a new calculation
		cout << "\nThe Approximation of Pi to the " << n << " term is " << pi << ".\n\nWould you like to approximate Pi to a diffrent number of terms?\n\n";
		cin >> answer;
		
		//Reset Pi so it doesnt keep adding onto itself, fresh start!
		pi = 0;
			

	}
	//Exit message
	cout << "Thank you for using the Pi Approximator";
	


}