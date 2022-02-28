#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char str[100], * p, a[10][101] = { 0 };
	int k = 0;
	scanf("%[^\n]s", str);
	//printf("%s\n", str);
	p = strtok(str, " ");
	while (p != NULL)
	{
		strcpy(a[k], p);
		k++;
		p = strtok(NULL, " ");

	}

	for (int i = 0; i < k - 1; i++)
		for (int j = i + 1; j < k; j++) {
			if (strlen(a[i]) < strlen(a[j]))
				std::swap(a[i], a[j]);
			else if (strlen(a[i]) == strlen(a[j]))
				if (strcmp(a[i], a[j]) < 0)
					std::swap(a[i], a[j]);
		}

			for (int j = 0; j < k; j++)
				printf("%s\n", a[j]);

	return 0;

}