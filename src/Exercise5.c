/*
5. Write a function to move all positive element of an array upfront
Ex:
______________________________________
| Input: 2 -3 4 6 -7 9 8 -2          |
| Output: 2 4 6 9 8 -3 -7 -2         |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void Ex5(int arr[], int n) {
	//Your codes here
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] < 0 && arr[j]>0)
			{
				int t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
	int numpos = 0;
	while (arr[numpos] >= 0)
	{
		numpos += 1;
	}
	for (int i = 0; i < numpos-1; i++)
		for (int j = i + 1; j < numpos; j++)
			if (arr[i] > arr[j])
			{
				int t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}

	for (int i = 0; i < n; i++)
		printf("%d ", arr[i]);

}

int main(int argc, char* argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	argc--;
	int testcase[argc], i;
	for (i = 0; i < argc; i++) {
		testcase[i] = atoi(argv[i + 1]);
	}

	Ex5(testcase, argc);

	return 0;
}