/* [평가항목 1] : 과제설명
	컴퓨터프로그래밍 평과과제 (배점 25점)
	학과 : 컴퓨터공학부
	학번 : 202202745
	이름 : 이준서

	과제 주제 : 한국과 중국의 최근 5일간 코로나 확진자 수 통계 자료


*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
struct Covid {	// [평가항목 5] : 구조체 사용

	char name;
	int youryear;
};

int main(void)
{
	struct Covid s;
	
	char country;
	int number;
	int number2;

	printf("자료 검색 전 신원 확인을 위해 이름을 입력해주세요 : ");
	scanf("%s", &s.name);

	printf("자료 검색 전 신원 확인을 위해 주민번호를 입력해주세요 : ");
	scanf("%s", &s.youryear);

	printf("최근 5일 간 코로나 확진자 현황이 궁금한 국가를 입력해주세요. (한국 : k 중국 : c) : ");
	scanf("%s", &country);

	if (country == 'k') {
		number = korea();
		printf("확진자 수는 %d명 입니다.", number);
	}

	else if (country == 'c') {
		number2 = china();
		printf("확진자 수는 %d명 입니다.", number2);
	}

	else {
		printf("잘못된 입력입니다.");
	}
	return 0;
}

int korea(int x)	// [평가항목 2] : 함수 사용 
{
	int i, kor[5], day;
	printf("궁금한 날을 0부터 4까지 숫자로 입력하세요 (5일전(4) ~ 오늘(0) ) : ");
	scanf("%d", &day);

	kor[0] = 13355;		// [평가항목 3] : 배열 사용 
	kor[1] = 12158;
	kor[2] = 9315;
	kor[3] = 8442;
	kor[4] = 7382;
	for (i = 0; i < 5; i++) {
		if (i == day)
			break;
	}
	x = kor[i];
	return x;
}

int china(int y)	// [평가항목 2] : 함수 사용 
{
	int j, chi[5], day1;
	printf("궁금한 날을 0부터 4까지 숫자로 입력하세요 (5일전(4) ~ 오늘(0) ) : ");
	scanf("%d", &day1);

	chi[0] = 46548;		// [평가항목 3] : 배열 사용
	chi[1] = 56231;
	chi[2] = 55432;
	chi[3] = 35601;
	chi[4] = 37940;
	for (j = 0; j < 5; j++) {
		if (j == day1)
			break;
	}
	y = chi[j];
	return y;
}