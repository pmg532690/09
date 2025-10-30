#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int grade[SIZE];
	int score[SIZE];
	
	for(i=0;i<SIZE;i++)
		grade[i] = rand() % 100; //0부터 99까지의 정수만 취함 
	

	for(i=0;i<SIZE;i++)
	{
		grade[i] = score[i];
	}
	
	for(i=0;i<SIZE;i++)
		printf("grade[%d] = %d\n",i,score[i]);	
	for(i=0;i<SIZE;i++)
		printf("score[%d] = %d\n",i,score[i]);
	return 0;
}
