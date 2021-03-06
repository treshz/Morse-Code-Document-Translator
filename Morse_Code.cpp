#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

int main()
{

	char char_read[1000];
	char file_name_read[40];
	char file_name_write[40];
	int count;
	int wordcount = 1;
	int ccount = 0;
	int linecount = 1;

	/*The name of the input and output files are scanned in and stored in
	variables as strings*/

	printf("Enter the name of the file you want to read in:");
	scanf("%s", &file_name_read);

	printf("Enter the name of the file you want to print to:");
	scanf("%s", &file_name_write);

	printf("\n\n");

	/*File input and output streams are defined and opened.*/

	FILE *file_in;
	file_in = fopen(file_name_read, "r");

	FILE *file_out;
	file_out = fopen(file_name_write, "w");

	/*The following 'if' statement displays an error message
	if the input file cannot be found, i.e. it returns a NULL*/

	if ((file_in = fopen(file_name_read, "r")) == NULL)
	{
		printf("Error! The file you want to read from cannot be found\n\n");
	}
	else
	{
		
		/*The following while loop will only scan characters in 
		until the EOF is reached*/

		while (!feof(file_in))
		{

			/*The for loop increments its way through the string, assigning
			one character at a time to each element and runnning it through the
			switch statement*/

			for (count = 0; count <= 1000; count++)
			{
				fscanf(file_in, "%c", &char_read[count]);

				/*Each characeter from the input file is run through the switch statement
				and the relevant morse code is printed out to the screen and to the output file.
				The relevant variables storing the statistics about the input file are incremented
				too.*/

				switch (char_read[count])
				{

				case '0':
					fprintf(file_out, "----- ");
					printf("----- ");
					ccount++;
					break;

				case '1':
					fprintf(file_out, ".---- ");
					printf(".---- ");
					ccount++;
					break;

				case '2':
					fprintf(file_out, "..--- ");
					printf("..--- ");
					ccount++;
					break;

				case '3':
					fprintf(file_out, "...-- ");
					printf("...-- ");
					ccount++;
					break;

				case '4':
					fprintf(file_out, "....- ");
					printf("....- ");
					ccount++;
					break;

				case '5':
					fprintf(file_out, "..... ");
					printf("..... ");
					ccount++;
					break;

				case '6':
					fprintf(file_out, "-.... ");
					printf("-.... ");
					ccount++;
					break;

				case '7':
					fprintf(file_out, "--... ");
					printf("--... ");
					ccount++;
					break;

				case '8':
					fprintf(file_out, "---.. ");
					printf("---.. ");
					ccount++;
					break;

				case '9':
					fprintf(file_out, "----. ");
					printf("----. ");
					ccount++;
					break;

				case 'A':
				case 'a':
					fprintf(file_out, ".- ");
					printf(".- ");
					ccount++;
					break;

				case 'B':
				case 'b':
					fprintf(file_out, "-... ");
					printf("-... ");
					ccount++;
					break;

				case 'C':
				case 'c':
					fprintf(file_out, "-.-. ");
					printf("-.-. ");
					ccount++;
					break;

				case 'D':
				case 'd':
					fprintf(file_out, "-.. ");
					printf("-.. ");
					ccount++;
					break;

				case 'E':
				case 'e':
					fprintf(file_out, ". ");
					printf(". ");
					ccount++;
					break;

				case 'F':
				case 'f':
					fprintf(file_out, "..-. ");
					printf("..-. ");
					ccount++;
					break;

				case 'G':
				case 'g':
					fprintf(file_out, "--. ");
					printf("--. ");
					ccount++;
					break;

				case 'H':
				case 'h':
					fprintf(file_out, ".... ");
					printf(".... ");
					ccount++;
					break;

				case 'I':
				case 'i':
					fprintf(file_out, ".. ");
					printf(".. ");
					ccount++;
					break;

				case 'J':
				case 'j':
					fprintf(file_out, ".--- ");
					printf(".--- ");
					ccount++;
					break;

				case 'K':
				case 'k':
					fprintf(file_out, "-.- ");
					printf("-.- ");
					ccount++;
					break;

				case 'L':
				case 'l':
					fprintf(file_out, ".-.. ");
					printf(".-.. ");
					ccount++;
					break;

				case 'M':
				case 'm':
					fprintf(file_out, "-- ");
					printf("-- ");
					ccount++;
					break;

				case 'N':
				case 'n':
					fprintf(file_out, "-. ");
					printf("-. ");
					ccount++;
					break;

				case 'O':
				case 'o':
					fprintf(file_out, "--- ");
					printf("--- ");
					ccount++;
					break;

				case 'P':
				case 'p':
					fprintf(file_out, ".--. ");
					printf(".--. ");
					ccount++;
					break;

				case 'Q':
				case 'q':
					fprintf(file_out, "--.- ");
					printf("--.- ");
					ccount++;
					break;

				case 'R':
				case 'r':
					fprintf(file_out, ".-. ");
					printf(".-. ");
					ccount++;
					break;

				case 'S':
				case 's':
					fprintf(file_out, "... ");
					printf("... ");
					ccount++;
					break;

				case 'T':
				case 't':
					fprintf(file_out, "- ");
					printf("- ");
					ccount++;
					break;

				case 'U':
				case 'u':
					fprintf(file_out, "..- ");
					printf("..- ");
					ccount++;
					break;

				case 'V':
				case 'v':
					fprintf(file_out, "...- ");
					printf("...- ");
					ccount++;
					break;

				case 'W':
				case 'w':
					fprintf(file_out, ".-- ");
					printf(".-- ");
					ccount++;
					break;

				case 'X':
				case 'x':
					fprintf(file_out, "-..- ");
					printf("-..- ");
					ccount++;
					break;

				case 'Y':
				case 'y':
					fprintf(file_out, "-.-- ");
					printf("-.-- ");
					ccount++;
					break;

				case 'Z':
				case 'z':
					fprintf(file_out, "--.. ");
					printf("--.. ");
					ccount++;
					break;

				case '.':
					fprintf(file_out, " (.) ");
					printf(" (.) ");
					break;

				case '\n':
					fprintf(file_out, "\n");
					printf("\n");
					linecount++;
					wordcount++;
					break;

				case ' ':
					fprintf(file_out, " / ");
					printf(" / ");
					wordcount++;
					break;


				}

			}
		}

		/*The file streams are closed*/

		fclose(file_in);
		fclose(file_out);

		/*The statistics about the input file are then printed to the screen*/

		printf("\n\n");
		printf("\nThere are %d words", wordcount);
		printf("\nThere are %d lines", linecount);
		printf("\nThere are %d characters", ccount);
		printf("\n\n");

	}

	return 0;

}



