#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int hi(int e)
{
	return e + 2;
}

int main()
{
	//���ڿ� : ���� ���� NULL ���ڰ� ���Ե˴ϴ�.

	char a[6] = { 'A','B','C','D','E','F' };
	char character[10] = { 'A','B','C','D','E','F' };
	for (int i = 0; i < 6; i++)
	{
		printf("%c\n", a[i]);
	}
	printf("%s\n", a);
	printf("%s\n", character);

	printf("�迭�� �ּ� : %p\n", character);


	//�迭�� ������ Ÿ�ӿ� ũ�Ⱑ �������ϴ�.

	// i����Ʈ ������ ///[k] [i] [m] [g] [e] [u] [m] [s] [o] [o] [\0] 
	// value��� ������ ������ ���ڹ迭�� �����ּҸ� ����ŵ�ϴ�.
	// ��� ���� �����ͷ� �����ؼ� �����Ϳ� �����ؼ� ���� ������ �� ������ �����մϴ�.

	const char* value = "kimgeumsoo";

	int b = 10;

	int* ptr = &b;

	printf("%s\n", value);

	printf("%d\n", hi(2));

	// �ƽ�Ű �ڵ�;

	char balue = 'A';

	printf("%d\n", balue);
	printf("%c\n", 65);

	//�ƽ�Ű �ڵ��� ���ڸ� ����ϼ���.

	// A~Z ����

	for (int i = 0; i < 26; i++)
	{
		printf("%d ", 'A' + i);
		printf("(%c)\n", 'A' + i);
	}

	//���ڿ� ���� ��� �Լ�

	char oop[] = "game";

	int e = strlen(oop);

	printf("%d\n", e);

	char name[] = "k i n g g a m e";

	printf("%d\n", strlen(name));

	char Koname[] = "�̵���";

	printf("%d\n", strlen(Koname));

	char number[] = "lee\0ss";

	printf("%d\n", strlen(number));

	char abc[] = "abc";

	char bcd[] = "bcd";

	//���ڿ� �����Լ�

	char Forename[] = "Geumsoo";

	char Surnname[1000000] = "Kim";

	strcat_s(Surnname, Forename);

	printf("%s\n", Surnname);

	//���ڿ� ���Լ�
	// aaa�� ���ڹ迭��  �ƽ�Ű�ڵ�� ��ȯ�ϸ� 97+97+97=291.
	//aab�� ���ڹ迭�� �ƽ�Ű�ڵ�� ��ȯ�ϸ� 97 97 98 292.


	//ù���� ���ڹ迭�� ũ�� 1�� ��ȯ, ���ΰ����� 0�� ��ȯ
	// �ι�° ���ڿ��� ũ�� -1�� ��ȯ
	char aaa[] = "aaa";
	char aab[] = "aab";
	printf("%d\n", strcmp(aaa, aab));


	return 0;
}