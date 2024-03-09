#include <stdio.h>

int main(){
int rtn, i;

/* 内部生成した値を戻り値とする */

	rtn=0;
	for(i=0; i<30; i++){
		rtn +=i;
	}

/* 表示内容 */
	printf("%d /// Hello, World8 /// \n", rtn);

	return rtn;
}
