/************************************************************************************************
// Author: Alex Hamilton
// Date: 16 February, 2016
// 
// Description: Fizzbuzz for fun
************************************************************************************************/
#include <stdio.h>

int main(int argc, char* argv[]){
	int i;
	
	for(i = 1; i <= 100; i++){
		if(i % 3 == 0 || i % 5 == 0){
			if(i % 5 != 0)
				printf("Fizz\n");
			
			else if(i % 3 != 0)
				printf("Buzz\n");
			
			else
				printf("FizzBuzz\n");
		}
		else
			printf("%d\n", i);
	}
	
	return 0; 
}