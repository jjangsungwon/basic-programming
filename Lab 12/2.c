#define _CRT_SECURE_NO_WARNINGS

//2015117800 �强��
#include<stdio.h>
#include<ctype.h>

int main(void)
{
	char in[100];
	char out[100];
	FILE *fp1, *fp2;
	char ch;

	printf("�Է� ���ϸ� �Է� : ");
	scanf("%s", in);
	printf("��� ���ϸ� �Է� : ");
	scanf("%s", out);

	fp1 = fopen(in, "r");
	fp2 = fopen(out, "w");

	if(fp1 == NULL || fp2 == NULL) {
		fprintf(stderr, "error\n");
		return 1; //������ ����
	}

	while ((ch = fgetc(fp1)) != EOF)
	{
		ch = toupper(ch);
		_putch(ch);
		fputc(ch, fp2);

	}

	fclose(fp1);
	fclose(fp2);
}