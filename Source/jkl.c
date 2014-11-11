#include <stdlib.h>
#include <stdio.h>
int main(int argc, char* argv[])
{
 	FILE *fp = fopen("Address.txt", "w");
 	fprintf(fp,"%s",argv[1]);
 	fclose(fp);
 	system("jklbz.exe");
 	getchar();
 	return 0;
}
