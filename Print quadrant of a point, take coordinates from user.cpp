/* Print quadrant of a point, take coordintaes from user.
Problem Solving Approach:
1.print quadrant of a point, take coordintaes from user 
  2.  input:  coordinates (x,y)
	output: quadrant 1 or 2 or 3 or 4
	formula: point is in 1st quadrant if x and y are +ve
			 point is in 2nd quadrant if x is -ve and y is +ve
			 point is in 3rd quadrant if x and y are -ve
			 point is in 4th quadrant if x is +ve and y is -ve	
  3.  3.1: declare variables : x and y 
   	  3.2	 take input: x and y coordinates
	  3.3	 formula: process output using if-else:
			 point is in 1st quadrant if x and y are >0
			 point is in 2nd quadrant if x <0 and y >0
			 point is in 3rd quadrant if x and y are <0
			 point is in 4th quadrant if x >0 and y <0		
      3.4: display output: quadrant of point.
*/
#include<stdio.h>
int main()
{
	float x,y;
	printf("Enter coordinates of a point to find its quadrant:\n");
	scanf("%f %f",&x,&y);
	if(x>0 && y>0)
	printf("The point ( %f , %f ) lies in 1st quadrant.",x,y);
    else if(x<0 && y>0)
	printf("The point ( %f , %f ) lies in 2nd quadrant.",x,y);	
    else if(x<0 && y<0)
	printf("The point ( %f , %f ) lies in 3rd quadrant.",x,y);
	else if(x>0 && y<0)
	printf("The point ( %f , %f ) lies in 4th quadrant.",x,y);
	else if(x==0 && y!=0)
	printf("The point ( %f , %f ) lies on y-axis",x,y);
	else if(y==0 && x!=0)
	printf("The point ( %f , %f ) lies on x-axis",x,y);	
    else
	printf("The point ( %f , %f ) lies on origin",x,y);
}
