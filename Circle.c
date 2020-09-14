#include<stdio.h>
#define pi 3.14
float GetDiameter(float r)
	{
		return 2*r;
	}
float GetArea(float r)
	{
		return 2*pi*r*r;
	}
float GetCircumference(float r)
	{
		return 2*pi*r;
	}
int main()
	{
		float r;
		printf("\n Enter the radius of circle:");
		scanf("%f",&r);
		
		printf("\n Diameter =%f",GetDiameter(r));
		printf("\n Area =%f",GetArea(r));
		printf("\n Area =%f",GetCircumference(r));
		
		printf("\n\n");
		return 0;
		
	}
