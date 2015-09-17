#include <stdio.h>
#define TRUE 1
#define FALSE 0

int* mysort(int*, int);

void print_tab(int* tab, int size){
	int i = 0;
	for(i = 0; i < size; i++){
		printf("%d ", tab[i]);
	}
	printf("\n");
}

int main(int argc, char **argv)
{
	int tab[] = {-2, 45, -81, 43, 1, 27};
	print_tab(tab, 6);
	int* newTab = mysort(tab, 6);
	print_tab(tab, 6);
	return 0;
}

int* mysort(int* tab, int tabSize){
	int echange = TRUE;
	int i = tabSize;
	while(i > 0 && echange == TRUE){
		echange = FALSE;
		int j = 1;
		for(j = 1; j <= i-1; j++){
			if(tab[j] > tab[j+1]){
				int tmp = tab[j];
				tab[j] = tab[j+1];
				tab[j+1] = tmp;
				echange = TRUE;
			}
		}
		i--;
	}
	return tab;
}
