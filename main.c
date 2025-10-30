#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int testscore[5];
	int i;
	
	testscore[0] = 10;
	testscore[1] = 20;
	testscore[2] = 30;
	testscore[3] = 40;
	testscore[4] = 50;
	
	for(i=0;i<5;i++)
		printf("grade[%i] = %i\n", i, testscore[i]);
			
	return 0;
}
