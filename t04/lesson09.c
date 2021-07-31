#include <stdio.h>

int main(void){ 
	char ch;
	int space = 0;
	int new_line = 0;
	int other = 0;
	while ((ch = getchar()) != '#') {
		if (ch == ' ')
		{
			space++;
		} else if (ch == '\n')
		{
			new_line++;
		}else other++;
	}

	printf("spaces = %d;\nnewlines = %d;\nothers = %d;\n",space, new_line, other );
	

	return 0;
}
