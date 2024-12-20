#include <stdio.h>

int main(){
	
	int matriz[4][4];
	int mat[4][3];
	int i;
	int j;
	
    for(i=0; i<4; i++){
    	for(j=0; j<4; j++){
    		printf("\nDigite o valor que esta na linha %d, coluna %d da primeira matriz: ", i, j);
    		scanf("%d", &matriz[i][j]);
		}
	}
	
	for(i=0; i<4; i++){
		for(j=0; j<3; j++){
			printf("\nDigite o valor que esta na linha %d, coluna %d da segunda matriz: ", i, j);
			scanf("%d",&mat[i][j]);
		}
	}
	
	
	for(i=0; i<4; i++){
		for(j=0; j<4; j++){
			matriz[i][j] = matriz[i][j] * mat[i][j];
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
