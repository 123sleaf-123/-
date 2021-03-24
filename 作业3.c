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
				printf("\n\n\n\n\n\n\n\n\n\n");
				return 0;
				break;
			}
		}
		else
		{
			while(getchar() != 10);// delete meaningless strings
			printf ("\n=============================\n       INVALID DATA ! \n=============================\n");
			printf("Enter valid data (Y or N) to make your choice.\n");
			printf("\nYour choice:");
			scanf("%c",&opt);
			//getchar();
			//printf("Reloading main component...waiting......\n");
		}
		//getchar();//delete \n
	}
}

int main (void)
{
	int num1,num2,num3;
	double average;
	int i;
	char opt;

	
	/* get the input data and provide chances to check and reenter data*/
	do
	{
		printf("Enter 1st integer numbers: ");
		while(scanf("%d",&num1) == 0);
		printf("Enter 2nd integer numbers: ");
		while(scanf("%d",&num2) == 0);
		printf("Enter 3rd integer numbers: ");
		while(scanf("%d",&num3) == 0);
		while(getchar() != 10);// delete meaningless strings
		//getchar();//delete \n
		printf("%c",7);// prompt sound rings when enter finished
		printf("\n=========== Data has been successfully entered! ===========\n");
		printf("\nThe 1st number is %d.\nThe 2nd number is %d.\nThe 3rd number is %d.\n",num1, num2, num3);
		printf("\n=========== Data has been successfully entered! ===========\n");
		printf("\nAre these numbers what you need?");
		printf("(Y or N)\n");
		printf("\nYour choice:");
		scanf("%c",&opt);
		i=FormatInput(opt);
	}while (i == 0);
	
	printf("\n\n=========== Data enter finished! ===========\n\n");
	printf("%c",7);
	
	/* calculate the average */
	average = (num1+num2+num3) / 3.0;
	
	/* display the result */
	printf("\nThe average of %d, %d and %d is %f\n\n",num1, num2, num3, average);
	
	return 0;
}
