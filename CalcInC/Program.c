#include <stdio.h>;

void Add(double* pFirst, double* pSecond);
void Subtract(double* pFirst, double* pSecond);
void Multiply(double* pFirst, double* pSecond);
void Divide(double* pFirst, double* pSecond);
void Power(double* pFirst, double* pSecond);

int main()
{
	double aNum, bNum, * pANum = NULL, * pBNum = NULL; 
	pANum = &aNum;
	pBNum = &bNum;

	char ch;
	char* pCH = NULL;
	pCH = &ch;



	printf("Set first num \n");
	scanf_s("%lf",pANum);
	


	while (1)
	{
		printf("Set operator {+,-,*,/,^,=}\n");
		scanf_s(" %c", pCH);
		if (*pCH == '=')
			break;

		printf("Set another num\n");
		scanf_s("%lf", pBNum);

		switch (*pCH)
		{
			case '+':
				Add(pANum,pBNum);
				break;

			case '-':
					Subtract(pANum, pBNum);
					break;

			case '*':
				Multiply(pANum, pBNum);
				break;
			case '/':
				Divide(pANum, pBNum);
				break;
			case '^':
				Power(pANum, pBNum);
				break;
		}
		
	}
	printf("Result is %lf",*pANum);
	
	return 0;
}

void Add(double* pFirst, double* pSecond)
{
	*pFirst +=  *pSecond;
}

void Subtract(double* pFirst, double* pSecond)
{
	*pFirst -= *pSecond;
}

void Multiply(double* pFirst, double* pSecond)
{
	*pFirst *= *pSecond;
}

void Divide(double* pFirst, double* pSecond)
{
	*pFirst /= *pSecond;
}

void Power(double* pFirst, double* pSecond)
{
	double pow = *pFirst;
	for (size_t i = 0; i < *pSecond-1; i++)
	{
		*pFirst *= pow;
	}
}