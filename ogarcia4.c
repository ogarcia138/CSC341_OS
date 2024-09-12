//Omar Garcia
//CSC 341
//Lab 4 Pointer Program

#include <stdio.h>
#include <stdlib.h>

//Global Variables
int o;//uninitialized var
int g = 6;//initialized var

int main(int argc, char *argv[]){
	//Local variables
	int stack1 = 9;

	//Dynamic memory for heap
	int *heap1 = (int *)malloc(sizeof(int));
	*heap1 = 11;
	
	//Print addresses 
	printf("Address of argc: %p\n",&argc);
	printf("Address of stack1: %p\n",&stack1);
	printf("Address of heap1: %p\n", heap1);
	printf("Address of global uninitialized variable 'o': %p\n",&o);
	printf("Address of global initialized variable 'g': %p\n",&g);

	//Free allocated memory
	free(heap1);
	return EXIT_SUCCESS;
}//end main()
