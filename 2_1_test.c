//#include<stdio.h>
//int main()
//{
//	unsigned char a = 200;
//	//00000000 00000000 00000000 11001000
//	// 11011000
//	unsigned char b = 100;
//	//00000000 00000000 00000000 01100100
//	// 01100100
//	unsigned char c = 0;
//	c = a + b;
//	// 00000000 00000000 00000000 11001000
//	// 00000000 00000000 00000000 01100100
//	// 00000000 00000000 00000001 00101100  
//
//	// c-00101100
//
//	printf(" % d % d", a + b, c);
//	return 0;
//}


// ��ӡ�������
//#define N 10
//#include<stdio.h>
//int main()
//{
//	int arr[N][N] = { 0 };
//	int i = 0, j = 0;
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j < N; j++)
//		{
//			if (i == j || j == 0)
//			{
//				arr[i][j] = 1;
//			}
//		}
//	}
//	for (i = 2; i < N; i++)
//	{
//		for (j = 1; j <= i - 1; j++)
//		{
//			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < N; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%4d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}



//�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
//����Ϊ4�����ɷ��Ĺ��� :
//A˵�������ҡ�
//
//B˵����C��
//
//C˵����D��
//
//D˵��C�ں�˵
//
//��֪3����˵���滰��1����˵���Ǽٻ���
//
//�����������Щ��Ϣ��дһ��������ȷ������˭������.

//#include<stdio.h>
//int main() {
//	char muder = 'A';
//	for (muder = 'A'; muder <= 'D'; muder++)
//	{
//		if ((muder != 'A') + (muder == 'C') + (muder == 'D') + (muder != 'D') == 3)
//		{
//			printf("muder is %c\n", muder);
//		}
//	}
//	return 0;
//}


//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ��������:
//Aѡ��˵��B�ڶ����ҵ�����
//
//Bѡ��˵���ҵڶ���E���ģ�
//
//Cѡ��˵���ҵ�һ��D�ڶ���
//
//Dѡ��˵��C����ҵ�����
//
//Eѡ��˵���ҵ��ģ�A��һ��
//
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ������������

#include<stdio.h>
int main()
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	for (a = 1; a <= 5; a++)
	{
		for (b = 1; b <= 5; b++)
		{
			if (a != b)
			{
				for (c = 1; c <= 5; c++)
				{
					if (a != c && b != c)
					{
						for (d = 1; d <= 5; d++)
						{
							if (a != d && b != d && c != d)
							{
								for (e = 1; e <= 5; e++)
								{
									if (a != e && b != e && c != e && d != e)
									{
										if (((b == 2) + (a == 3) == 1) &&
											((b == 2) + (e == 4) == 1) &&
											((c == 1) + (d == 2) == 1) &&
											((c == 5) + (d == 3) == 1) &&
											((e == 4) + (a == 1) == 1))
										{
											printf("a = %d b = %d c = %d d = %d e = %d\n", a, b, c, d, e);
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
