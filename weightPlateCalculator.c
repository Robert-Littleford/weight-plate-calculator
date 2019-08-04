#include <stdio.h>

int length = 14;//number of plates to start
int j = 0; //number of plates used

float * calculate(float weightToCalculate)
{
    int i; //counter
    int c; //counter used when removing plates when they are no longer available
    float plates[14] = { 45,45,35,35,25,25,10,10,5,5,5,5,2.5,2.5 };
    static float answer[14]; //store the plates that are used
    weightToCalculate -= 45; //subtract the bar
    weightToCalculate /= 2; //calculate the weight on just one side of the bar

    while (weightToCalculate != 0 && length > 0)
    {
	i = 0;
	while (i < length)
	{
	    if ((weightToCalculate - plates[i]) < 0)
	    {
	        i++;
	    }
	    else
	    {
	        answer[j] = plates[i];
	        j++;
	        weightToCalculate -= plates[i];
	        for ( c = i ; c < length - 1 ; c++ )
                {
		    plates[c] = plates[c+1];
	        }
	        length--;
		break;
	    }
	}
    }
    return answer;
}

int main()
{

    int i; //counter
    float weight; //weight to calculate
    float *solution; //used to hold the answer
    printf("Please enter the weight:\n");
    while (scanf("%f",&weight) == 1)
    {
	solution = calculate(weight);
	for ( i = 0; i < j; i++ )
	{
	    if (i == 0)
	    {
		printf("%.1f",solution[i]);
	    }
	    else
	    {
		printf(", %.1f",solution[i]);
	    }
	}
	length = 14;
	j=0;
	printf("\nPlease enter the weight:\n");
    }
    return 0;
}