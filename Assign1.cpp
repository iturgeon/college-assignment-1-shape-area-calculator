/*
 * Area calculator
 */
#include <stdio.h>
#include <math.h>

/* Procedure declarations */
int Calc_Circle();
int Calc_Triangle();
int Calc_Rectangle();

int main()
{
	/* Selected menu option */
	int	choice;

	/* Initialize the user's choice */
	choice = 0;

	/* Print the title */
	printf ("COP 3502 Assignment # 3 - Ian Turgeon.\n\n");

	/* Keep going until the user selects quit */
	while (choice != 4)
	{
		/* Print the menu options */
		printf("Geometric Shapes:\n");
		printf("\t1) Circle...\n");
		printf("\t2) Right Triangle...\n");
		printf("\t3) Rectangle...\n");
		printf("\t4) Quit the program...\n");
		printf("Your Choice? ");

		/* Get the user's choice */
		scanf("%i", &choice);

		/* Execute the correct function based on the user's choice */
		if (choice == 1)
			Calc_Circle();
		else if (choice == 2)
			Calc_Triangle();
		else if (choice == 3)
			Calc_Rectangle();
	}

	printf("\nThanks.\n");

	return 0;
}


/* Calculate the area and perimeter of a circle based on the radius */
int Calc_Circle(void)
{
	/* Variable to hold the value*/
	double radius;
	double perimeter;
	double area;
	int    feet;
    double inches;

	/* Initialize the values */
	radius = 0.0;
	perimeter = 0.0;
	area = 0.0;
	feet = 0;
	inches = 0.0;

    /* Ask for the radius of the circle */
	printf("\nEnter circle radius (in inches): ");

	/* Get the radius */
	scanf("%lf", &radius);

	/* Calculate the perimeter */
	perimeter = (3.14159 * 2.0 * radius) / 12;

	/* Get the number of feet */
	feet = int(perimeter);

	/* Get the number of inches */
	inches = (perimeter - feet) * 12;

	/* Print the perimeter */
	printf("\n\nThe perimeter of the circle is %d feet and %0.1f inches\n", feet, inches);

	/* Calculate the area */
	area = (3.14159 * radius * radius);

	/* Print the area */
	printf("The area of the circle is %5.1f square inches\n\n", area);
	
	/* Get the radius */
	return 1;
}

/* Calculate the area and perimeter of a triangle based on the width and height */
int Calc_Triangle(void)
{
	/* Variable to hold the value*/
	int width;
	int height;
	double area;
	double perimeter;
	double hypotenus;
	int feet;
	double inches;

	/* Initialize the values */
	width = 0;
	height = 0;
	area = 0.0;
	perimeter = 0.0;
	hypotenus = 0.0;
	feet = 0;
	inches = 0.0;

    /* Ask for the height of the triangle */
	printf("\nEnter triangle height (in inches):  ");

	/* Get the height */
	scanf("%d", &height);

	/* Ask for the width of the triangle */
	printf("Enter triangle width (in inches):  ");

	/* Get the width */
	scanf("%d", &width);

	/* Calculate the hypotenus */
	hypotenus = sqrt((width*width) + (height * height));

	/* Calculate the area */
	area = (double(width * height) / 2);

	/* Calculate the perimeter */
	perimeter = (width + height + hypotenus) / 12;

	/* Calculate the number of feet */
	feet = int(perimeter);

	/* Calculate the number of inches */
	inches = (perimeter - feet) * 12;

	/* Print the perimeter */
	printf("\n\nThe perimeter of the triangle is %d feet and %5.1lf inches\n", feet, inches);

	/* Display the area */
	printf("The area of the triangle is %5.1lf square inches\n\n", area);
	

	/* Get the radius */
	return 1;
}

/* Calculate the area and perimeter of a rectangle based on the width and height */
int Calc_Rectangle(void)
{
	/* Variable to hold the value*/
	int width;
	int length;
	double area;
	double perimeter;
	int feet;
	double inches;

	/* Initialize the values */
	width = 0;
	length = 0;
	area = 0.0;
	perimeter = 0.0;
	feet = 0;
	inches = 0.0;

    /* Ask for the width of the rectangle */
	printf("\nEnter rectangle width (in inches):  ");

	/* Get the width */
	scanf("%d", &width);

	/* Ask for the length of the rectangle */
	printf("Enter rectangle length (in inches):  ");

	/* Get the length */
	scanf("%d", &length);

	/* Calculate the area */
	area = double(width * length);

	/* Calculate the perimeter */
	perimeter = double(2 * (width + length)) / 12;

	/* Calculate the number of feet */
	feet = int(perimeter);

	/* Calculate the number of inches */
	inches = (perimeter - feet) * 12;

	/* Print the perimeter */
	printf("\n\nThe perimeter of the rectangle is %d feet and %5.1lf inches\n", feet, inches);

	/* Display the area */
	printf("The area of the rectangle is %5.1lf square inches\n\n", area);
	

	/* Get the radius */
	return 1;
}
