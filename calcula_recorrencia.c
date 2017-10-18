#include <stdio.h>
#include <stdlib.h>  

int a, b, c, d, e, f, g, n;

int main(int argc, char* argv[]){

	if(argc == 9){
		a = atoi(argv[1]), b = atoi(argv[2]), c = atoi(argv[3]), 
		d= atoi(argv[4]), e = atoi(argv[5]), f = atoi(argv[6]), 
		g = atoi(argv[7]), n = atoi(argv[8]);
		
		printf("a:%d, b:%d, c:%d, d:%d, e:%d, f:%d, g:%d, n:%d\n", 
				a, b, c, d, e, f, g, n);
	}
	else{
		printf("error: missing arguments!\n");
	}

	return 0;
}
