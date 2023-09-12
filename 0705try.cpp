#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	int i, n;
	i = 0;
	n = 100;

	for(i; i<n; 0){
		i++;
		if ((i % 3 == 0)&&(i % 5 == 0)){
			printf("FizzBuzz\n");
		}
		else if (i % 3 == 0){
			printf("Fizz\n");
		}
		else if (i % 5 == 0){
			printf("Buzz\n");
		}
		else{
			printf("%d\n", i);
		}
	}
	return 0;
}
