#include "holberton.h"

int printf_new(char *pszFormatString, ...);

int _cdecl main(int argc, char *argv[])
{
	printf_new(argv[0]);
	printf_new("\nHello\n");
	printf_new("Test Strng %s with integer %i n' %% test\n", argv[0], argc);

	printf_manual(argv[0]);
	printf_manual("\nHello\n");
	printf_manual("Tst Strg %s wth integer %i n' %% test\n", argv[0], argc);

	return 0;
}


int  printf_new(char *pszFormatString, ...)
{
	int CharacterCount = 0;
	int PrintInteger;
	char IntegerString[10];
	char *pPrintString;
	va_list VaList;

	va_start(VaList, pszFormatString);

	while(*pszFormatString)
	{
		if(*pszFormatString == '%')
		{
			pszFormatString++;
			switch(*pszFormatString)
			{
			case 's':
				pPrintString = va_arg(VaList, char *);
				fputs(pPrintString, stdout);
				pszFormatString++;
				CharacterCount += strlen(pPrintString);
				break;
			case 'i':
				PrintInteger = va_arg(VaList, int);
				_itoa(PrintInteger, IntegerString, 10);
				fputs(IntegerString, stdout);
				pszFormatString++;
				CharacterCount += strlen(IntegerString);
				break;
			case '%':
				putchar('%');
				pszFormatString++;
				CharacterCount++;
				break;
			case '\0':
				break;
			default:
				putchar('%');
				putchar(*pszFormatString);
				pszFormatString++;
				CharacterCount +=2;
			}
		}
		else
		{
			putchar(*pszFormatString);
			pszFormatString++;
			CharacterCount++;
		}
	}

	va_end(VaList);

	return CharacterCount;
}
