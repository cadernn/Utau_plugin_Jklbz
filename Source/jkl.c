#include <stdlib.h>
#include <stdio.h>
int main(int argc, char* argv[])
{
 	FILE *fp = fopen("Address.txt", "w");
 	system("pause");
 	fprintf(fp,"%s",argv[1]);
 	fclose(fp);
 	system("jklbz.exe");
 	getchar();
 	system("pause");
 	return 0;
}
