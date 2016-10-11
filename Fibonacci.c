/**
 * Hung Huynh 
 * 2/17/16
 * Program which asks the user to enter an integer between 0 and 35. 
 * then calculates and prints the Fibonacci sequence up to 
 * (and including) this number. User may choose 
 * to do this either iteratively (with loops) or recursively
 */
#include <stdio.h>
#include <stdlib.h>

int Recursively(int);
int Iteratively(int);
int main() {
	int n,i;
	int choice;

	printf("Please enter an integer form 0 - 35: ");
	scanf("%d", &n);
	printf("How would you like to calculate the sequence?\n 1) Iteratively \n 2) Recursively \n");
	printf("Enter your choice: ");
	scanf("%d", &choice); // Takes user input and displays it Iteratively or Recursively
	switch(choice) {
	case 1: 
		printf("You choose iteratively!\nPrinting Fibonacci Sequence:\n");
		int j=0;
		for (int i = 1 ; i <= n ; i++ )
    {
       printf("%d\n",Iteratively(i));
       	 j++;
		 
		}
		break;
		
	case 2:
		printf("You choose recursively!\n Printing Fibonacci Sequence:\n");
		for(i=0;i<=n;i++)
       	printf("%d\n",Recursively(i));
		break;

		default:
			printf("Invalid entry. Try Again \n");
			exit(0);
		}
		
	}
/**
 * Method that prints out the Fibonacci sequence recursively. 
 * @return Fibonacci sequence
*/
	int Recursively(int n){
		if ( n == 0 )
			return 0;
		else if ( n == 1 )
			return 1;
		else
			return ( Recursively(n-1) + Recursively(n-2) );

	}
/**
 * Method that prints out the Fibonacci sequence iteratively
 * @return Fibonacci sequence
 */
	int Iteratively(int n){
	int f = 0;
   	int s = 1;
   	int z;
 
   for ( int i = 2; i < n; i++ )
   {
      z = f + s;
      f = s;
      s = z;
   }
   return z;
}
