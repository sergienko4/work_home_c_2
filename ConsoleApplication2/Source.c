#include <stdio.h>
#include<string.h>
#include <ctype.h>
#include "node.h"

void Ex1();
char** exLogic(char c, int* arrayLength);
void main() {
	Ex1();
}
char** exLogic(char c, int* arrayLength) {
	Node* list = NULL;
	char c_upp = NULL;
	Node* temp = NULL;
	char** arr;
	int strLength = 0, i = 0, j = 0, start = 0, count = 0, k = 0;
	char* str = (char*)malloc(sizeof(char) * 101);

	// get input
	printf("Enter input MAX 100\n");
	gets(str);
	gets(str);
	//scanf("%s",str);
	strLength = strlen(str);

	c_upp = toupper(c);


	// create list struct with data about the words. index start end
	for (i = 0; i < strLength; i++)
	{
		if ((str[i] == c || str[i] == c_upp) && (str[i - 1] == ' ' || i == 0)) {
			start = i;
			while (str[i] != ' ' && i < strLength)
			{
				i++;
			}
			if (list == NULL) {
				list = createNode(start, i);

			}
			else {
				addNode(&list, start, i);
			}
			// cout total words
			count++;
		}
	}

	// check if have records
	if (count == 0) {
		printf("Zero words");
		return;
	}
	//have record - create array
	arr = (char**)malloc(sizeof(char*)*count);

	i = 0;

	// set data to array
	while (list != NULL)
	{
		k = 0;
		// create array for a word
		arr[i] = (char*)malloc(sizeof(char)*(list->indexEnd - list->indexStart) + 1);

		// put data by index to new array from srt
		for (j = list->indexStart; j < list->indexEnd; j++)
		{
			arr[i][k] = str[j];
			k++;
		}

		// end string
		arr[i][k] = '\0';

		i++;
		temp = list->next;
		free(list);
		list = temp;
	}
	free(str);
	free(temp);
	*arrayLength = count;
	return arr;
}
void Ex1() {
	int arrayLength = 0, i = 0;
	char c_small = NULL;
	char** arr;
	printf("split by: \n");
	
	//get input char
	c_small = tolower(getchar());

	// build array of strings
	arr = exLogic(c_small, &arrayLength);

	printf("\n\noutput: \n");
	// print output
	for(i = 0; i < arrayLength; i++) {
		puts(arr[i]);
		free(arr[i]);
	}
	free(arr);

}