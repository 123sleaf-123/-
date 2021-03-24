#include <stdio.h>

int FormatInput(char opt);

int FormatInput(char opt)
{
	while (1)
	{
		if (opt == 'Y' || opt == 'N')
		{
			if(opt == 'Y')
			{
				return 1;
				break;
			}
			else
			{
				return 0;
				break;
			}
		}
		else
		{
			getchar();
			printf ("\n=============================\n       INVALID DATA ! \n=============================\n");
			printf("Enter valid data (Y or N) to make your choice.\n");
			printf("\nYour choice:");
			scanf("%c",&opt);
		}
	}
}

int main (void)
{
	int num1,num2,num3;
	double average;
	int check,i;
	char opt;

	
	/* get the input data and provide chances to check and reenter data*/
	do
	{
		printf("Enter 1st integer numbers: ");
		scanf("%d",&num1);
		printf("Enter 2nd integer numbers: ");
		scanf("%d",&num2);
		printf("Enter 3rd integer numbers: ");
		scanf("%d",&num3);
		
		//failed
		while(1)
		{
			check = scanf("%c",&opt);
			if (check == 1)
			{
				getchar();
			}
			else
			{
				goto jump;
			}
		}
		jump:
		
		
		
		printf("%c",7);// prompt sound rings when enter finished
		printf("\n=========== Data has been successfully entered! ===========\n");
		printf("\nThe 1st number is %d.\nThe 2nd number is %d.\nThe 3rd number is %d.\n",num1, num2, num3);
		printf("\n=========== Data has been successfully entered! ===========\n");
		printf("\nAre these numbers what you need?");
		printf("(Y or N)\n");
		getchar();
		printf("\nYour choice:");
		scanf("%c",&opt);
		i=FormatInput(opt);
	}while (i == 0);
	
	/* calculate the average */
	average = (num1+num2+num3) / 3.0;
	
	/* display the result */
	printf("\nThe average of %d, %d and %d is %f\n",num1, num2, num3, average);
	
	return 0;
}
