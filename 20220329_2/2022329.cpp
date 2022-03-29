#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int hi(int e)
{
	return e + 2;
}

int main()
{
	//문자열 : 가장 끝에 NULL 문자가 포함됩니다.

	char a[6] = { 'A','B','C','D','E','F' };
	char character[10] = { 'A','B','C','D','E','F' };
	for (int i = 0; i < 6; i++)
	{
		printf("%c\n", a[i]);
	}
	printf("%s\n", a);
	printf("%s\n", character);

	printf("배열의 주소 : %p\n", character);


	//배열은 컴파일 타임에 크기가 정해집니다.

	// i바이트 포인터 ///[k] [i] [m] [g] [e] [u] [m] [s] [o] [o] [\0] 
	// value라는 포인터 변수는 문자배열의 시작주소를 가리킵니다.
	// 상수 지시 포인터로 선언해서 포인터에 접근해서 값을 변경할 수 없도록 설정합니다.

	const char* value = "kimgeumsoo";

	int b = 10;

	int* ptr = &b;

	printf("%s\n", value);

	printf("%d\n", hi(2));

	// 아스키 코드;

	char balue = 'A';

	printf("%d\n", balue);
	printf("%c\n", 65);

	//아스키 코드의 문자를 출력하세요.

	// A~Z 까지

	for (int i = 0; i < 26; i++)
	{
		printf("%d ", 'A' + i);
		printf("(%c)\n", 'A' + i);
	}

	//문자열 길이 출력 함수

	char oop[] = "game";

	int e = strlen(oop);

	printf("%d\n", e);

	char name[] = "k i n g g a m e";

	printf("%d\n", strlen(name));

	char Koname[] = "이동현";

	printf("%d\n", strlen(Koname));

	char number[] = "lee\0ss";

	printf("%d\n", strlen(number));

	char abc[] = "abc";

	char bcd[] = "bcd";

	//문자열 연결함수

	char Forename[] = "Geumsoo";

	char Surnname[1000000] = "Kim";

	strcat_s(Surnname, Forename);

	printf("%s\n", Surnname);

	//문자열 비교함수
	// aaa의 문자배열을  아스키코드로 변환하면 97+97+97=291.
	//aab의 문자배열을 아스키코드로 변환하면 97 97 98 292.


	//첫번 문자배열이 크면 1을 반환, 서로같으면 0을 반환
	// 두번째 문자열이 크면 -1을 반환
	char aaa[] = "aaa";
	char aab[] = "aab";
	printf("%d\n", strcmp(aaa, aab));


	return 0;
}

/*
#include <stdio.h>
#include <string.h>

int main()
{
	int sum =0;
	int s;
	int check;
	char a[26];
	char b[101];
	
	scanf("%d",&s);
	for(int i=0;i<s;i++)
	{
		scanf("%s",b);
		for(int j=0; j<101;j++)
		{
			a[b[j]-'a']+=1;
			
			if(a[b[j]-'a']==2)
			{
				break;
			}
			else if(b[j]=='\0')
			{
				sum++;
				break;
			}
		}
	}
	printf("%d",sum);

	return 0;
	
}
*/
