#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("%c is an alphabet.\n");
//		}
//		else
//		{
//			printf("%c is not an alphabet.\n");
//		}
//		getchar();
//	}
//	return 0;
//}
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int w, l;
//	while (~scanf("%d%d", &w, &l))
//	{
//		float B;
//		B = sqrt (w / ((l / 100.0)));
//		if (B<18.5)
//		{
//			printf("Underweight\n");
//		}
//		else if (B >= 18.5 && B <= 23.9)
//		{
//			printf("Normal\n");
//		}
//		else if (B>27.9)
//		{
//			printf("Obese\n");
//		}
//		else
//		{
//			printf("Overweight\n");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	float a, b;
//	char ch = 0;
//	while (~scanf("%f%c%f", &a, &ch, &b))
//	{
//		switch (ch)
//		{
//		case '+':
//			printf("%.4f+%.4f=%.4f", a, b, a + b);
//			break;
//		case '-':
//			printf("%.4f-%.4f=%.4f", a, b, a - b);
//			break;
//		case '*':
//			printf("%.4f*%.4f=%.4f", a, b, a*b);
//			break;
//		case '/':
//			if (b == 0)
//			{
//				printf("Wrong!Division by zero!\n");
//				break;
//		default:
//			printf("Invalid operation!\n");
//			break;
//			}
//			printf("%.4f/%.4f=%.4f", a, b, a / b);
//			break;
//		}
//	}
//	return 0;
//
//
//}