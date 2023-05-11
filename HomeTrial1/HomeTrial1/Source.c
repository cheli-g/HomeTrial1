// HomeTrial1.c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//




#include "Stdio.h"
#include "string.h"
#include "math.h"

void rectangle(int height,int width) {

	if ((height - width) > 5 || (height - width) < -5) {
		printf("%d", height * width);
	}
	else
		printf("%d", height * 2 + width * 2);
}

void triangular(int height, int width) {
	int option = 0;
	while (option != 1 && option != 2) {
		printf("press 1 for get the triangle perimeter and 2 for print the triangle:");
		scanf_s("%d", &option);
	}
	if (option == 1) {
		int side = sqrt((height *height) + ((width / 2)* (width / 2)));
		//printf("%d\n",side);
		int perimeter = (2 * side) + width;
		printf("%d\n", perimeter);

	}
	if (option == 2) {
		int w = width, h = height,z=width;
		if (w % 2 == 0 || w / 2 > h) {
			printf("we can't print triangular with this data, we're realy sorry");
		}
		else {
			int y = height - 2;
			int x = ((width - 4) / 2) +0.5;
			
			double decimal = (y / x) %1;
			double num = (y / x);
			int extra = decimal * x;
			//(int)num;
			printf("*\n");
			for (int i = 1; i < extra; i++) {
				printf("***\n");
			}
			//רקורסיה שתדפיס
			printf("\n");
			int downLine = z;
			while (downLine >= 1) {
				printf("*");
				downLine--;
			}
			
		}


	}
}

void main()
{
	int choice = 0;
	while (choice != 3)
	{
		printf("enter your choice- 1 for rectangle 2- for triangular and 3 for exit\n");
		scanf_s("%d", &choice);
		if (choice == 1||choice == 2)
		{
			int height = 0;
			int width = 0;
			printf("enter height and width");
			scanf_s("%d%d", &height, &width);
			printf("the heigth that you choose is %d\n and the width is %d\n", height, width);
			if (choice == 1) {

				rectangle(height, width);
			}
			else
				printf("hey");
				triangular(height, width);
			
		}
		else 
		{
			/*if ()
			{
				printf("your choice is 2");
				func2();
			}*/
			
			/*else */
			/*printf("nothing");*/
			continue;
		}
	
	}
	
}
