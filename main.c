#include <stdio.h>
#include <stdlib.h>


void v() {
	
	char c; 
	FILE *fp;
	fp = fopen("predaj.txt", "r");

	if (fp = fopen("predaj.txt", "r")) { //if open file right
	
		while ((c = getc(fp)) != EOF) {
			printf("%c",c);
		}
		printf("\n");
	}
	
	else
	{
		printf("Neotvoreny subor");
	}

}


int main() {
	char ch;

	while ((ch=getchar())!='k')
	{
		if (ch!='\n') {
		
			switch (ch)
			{
			case 'v':
				v();
				break;
			default:
				break;
			}
		}
		
	}

	return 0;
}