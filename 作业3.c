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
	int i,j,k;
	int check;
	char opt;
	
	printf("(Enter any character to start.)");
	
	/* get the input data and provide chances to check and reenter data*/
	do
	{
		i=j=k=0;
		while(i == 0)
		{
		    while(getchar() != 10);
			printf("Enter 1st integer numbers: ");
			i = scanf("%d",&num1);
			while(getchar() != 10);
			if(i == 0) printf ("\n=============================\n       INVALID DATA ! \n=============================\n\n");
			else
			{
				printf("%c",7);// prompt sound rings when enter finished
				printf("\n=========== Data has been successfully entered! ===========\n");
				printf("\nThe 1st number is %d.\n",num1);
				printf("\n=========== Data has been successfully entered! ===========\n");
				printf("\n\n\n");
			}
		}
		while(j == 0)
		{
			while(getchar() != 10);
			printf("Enter 2nd integer numbers: ");
			j = scanf("%d",&num2);
			if (j == 0) printf ("\n=============================\n       INVALID DATA ! \n=============================\n\n");
			else
			{
				printf("%c",7);// prompt sound rings when enter finished
				printf("\n=========== Data has been successfully entered! ===========\n");
				printf("\nThe 2nd number is %d.\n",num2);
				printf("\n=========== Data has been successfully entered! ===========\n");
				printf("\n\n\n");
			}
		}
		while(k == 0)
		{
			while(getchar() != 10);
			printf("Enter 3rd integer numbers: ");
			k = scanf("%d",&num3);
			if (k == 0) printf ("\n=============================\n       INVALID DATA ! \n=============================\n\n");
			else
			{
				printf("%c",7);// prompt sound rings when enter finished
				printf("\n=========== Data has been successfully entered! ===========\n");
				printf("\nThe 3rd number is %d.\n",num3);
				printf("\n=========== Data has been successfully entered! ===========\n");
				printf("\n\n\n");
			}
		}
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
		check=FormatInput(opt);
	}while (check == 0);
	
	printf("\n\n=========== Data enter finished! ===========\n\n");
	printf("%c",7);
	
	/* calculate the average */
	average = (num1+num2+num3) / 3.0;
	
	/* display the result */
	printf("\nThe average of %d, %d and %d is %f\n\n",num1, num2, num3, average);
	
	while(getchar() != 10);
	while(getchar() == 10);
	getchar();
	
	return 0;
}
