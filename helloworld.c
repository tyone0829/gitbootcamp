#include <stdio.h>

int main(){
int rtn, i;

	rtn=0;
	for(i=0; i<30; i++){
		rtn +=i;
	}


	printf("%d /// Hello, World7 /// \n", rtn);

	printf("%d\n", i);
	printf("%d\n",i*rtn);
	printf("%d\n",i/rtn);
	printf("%d\n",i%rtn);

	return rtn;
}
