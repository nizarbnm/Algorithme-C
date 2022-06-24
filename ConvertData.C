#include <stdio.h>
#include <math.h>
#include <float.h>
#include <stdbool.h>

void convertdata(char * name, float height, float weight)
{
	height=height * 12 * 2.54;
	weight=weight *.453592;
	printf("%s %.1f cms tall and weight %2f kg \n", name, height, weight);
}
int main(int argc, const char * argv[])
{
	char * name = "nizar";
	convertdata(name,5.7,169);
	printf(" name in main : %s", name);
	return 0;
}
