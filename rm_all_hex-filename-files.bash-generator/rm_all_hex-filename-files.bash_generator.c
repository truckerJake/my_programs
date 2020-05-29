
#include <stdio.h>
int main (int argc, char**  argv) {
	
	if (argc != 2)
	{
		printf("provide the destination path as argument"
				"...stay compiling, stay fresh\n");
		return 1;
	}
	FILE* fp;
	fp = fopen("rm_all_hex-filename-files.bash", "w");
	
	fprintf(fp, "#! /bin/bash\n#\
			Made by Cyberw1nd at GPL.\n\n#\
			fuckin thumbnail files escaped by directory_killer\n");

	char hex[2]['F'-'A'];
	for (int letter = 'a'; letter <= 'f'; letter++)
	{
		for (int zahl = 0; zahl <= 9; zahl++)
		{
			fprintf(fp, "rm --verbose %s\*%i%c\*\n",argv[1], zahl, letter);
		}
	}
	fclose(fp);
	printf("rm_all_hex-filenames-files.bash has been created by Cyberw1nd\n");
return 0;
}
