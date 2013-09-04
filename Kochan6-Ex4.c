// Calculator

#include <stdio.h>

int main (void)
{
	float	value, accum;
	char	operator, running;
 
	running = 'r';

	while ( running == 'r' )	{
		printf ("Type in your expression.\n");
		scanf ("%f %c", &value, &operator);

		switch (operator)
		{
		case '+':
			printf ("= %f\n", accum += value);
			break;
		case '-':
			printf ("= %f\n", accum -= value);
			break;
		case '*':
			printf ("= %f\n", accum *= value);
			break;
		case '/':
			if ( value == 0 )
				printf ("Division by zero.\n");
			else
				printf ("= %f\n", accum /= value);
			break;
		case 'S':
			accum = value;
			break;
		case 'E':
			printf ("= %f\n", accum);
			printf ("End of Calculations");
			running = 0;
			break;
		default:
			printf ("Unknown operator.\n");	
			break;
		}
	}

	return 0;
}
