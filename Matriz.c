#include <stdio.h>

int main(){
	
	int matriz[4][4];
	int i;
	int j;
	
    for(i=0; i<4; i++){
    	for(j=0; j<4; j++){
    		printf("\nDigite o valor que esta na linha %d, coluna %d: ", i, j);
    		scanf("%d", &matriz[i][j]);
		}
	}
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			matriz[i][j] = matriz[i][j] * 3;
		}
	}

	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
		printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
