
#include<stdio.h>

int main() {

	int arr[5]; // 0~4까지 5개 칸을 가진 배열 생성
	int sum = 0, i; //변수sum을 선언하고 초기화, 변수 i선언
	arr[0] = 10, arr[1] = 20, arr[2] = 30, arr[3] = 40, arr[4] = 50;//arr 배열 0에는 10 1에는 20,,,으로 배열 내에 숫자 할당
	
	for (i = 0; i < 5; i++) { //i=0ㅇ서 4까지 5번 반복
		sum += arr[i]; //0의 값을 갖고 있는 sum에 arr[0]~[4]의 값을 더함
	}
	 
	printf("배열 요소에 저장된 값의 합: %d\n", sum);//sum에 저장되어있는 arr[0]~[4]의 합 출력

	int arr1[5] = { 1,2,3,4,5 }; //arr1 배열에 5칸을 생성하고 각 칸에 1~5를 넣는다.
	int arr2[] = { 1,2,3,4,5,6,7 }; //arr2배열을 생성할 때 크기를 정하지 않고 1~7을 넣으면 7칸으로 자동생성
	int arr3[5] = { 1,2 }; // arr3배열에 5칸을 할당하고 1,2 두개만 넣으면 나머지는 0으로 채워진다.
	int ar1Len, ar2Len, ar3Len; // arr 배열 세개의 크기를 구하기 위한 변수를 생성한다. i는 위에서 할당하여 생략

	printf("배열 arr1의 크기: %d \n", sizeof(arr1)); //arr1의 크기를 출력
	printf("배열 arr2의 크기: %d \n", sizeof(arr2)); //arr2의 크기를 출력
	printf("배열 arr3의 크기: %d \n", sizeof(arr3)); //arr3의 크기를 출력
	ar1Len = sizeof(arr1) / sizeof(int); //arr1의 칸수는 전체 할당된 크기에서 할당한 변수인 int를 나눈 것이다.
	ar2Len = sizeof(arr2) / sizeof(int); //즉 arr 배열들의 크기를 int의 크기로 나누면 총 몇칸인지를 구할 수 있다.
	ar3Len = sizeof(arr3) / sizeof(int); // 따라서 arLen의 변수로 각 배열들의 칸 수를 저장한다.

	for (i = 0; i < ar1Len; i++) //위에서 계산한 arr1의 칸 수 만큼 반복문을 돌려서 각 칸에 할당된 숫자를 확인한다.
		printf("%d", arr1[i]); //arr1의 각 요소들을 출력한다.
	printf("\n");

	for (i = 0; i < ar2Len; i++) //마찬가지로 arr2의 칸 수만큼 반복하여 확인한다.
		printf("%d", arr2[i]); //arr2의 각 요소들을 출력한다.
	printf("\n");

	for (i = 0; i < ar3Len; i++) //마찬가지로 arr2의 칸 수만큼 반복하여 확인한다.
		printf("%d", arr3[i]); //arr3의 각 요소들을 출력한다.
	printf("\n");


	char str[] = "Good Morning!"; //char형 배열로 Good Morning! 입력 시 공백도 같이 들어감
	printf("배열 str의 크기: %d \n", sizeof(str)); //배열의 크기 출력
	printf("널 문자 문자형 출력: %c \n", str[13]); //str 배열에 들어간 값을 문자형으로 출력
	printf("널 문자 정수형 출력: %d \n", str[13]);//str 배열에 들어간 값을 정수형으로 출력
	str[12] = '?'; //배열의 12번째 칸에 ?를 삽입
	printf("문자열 출력: %s \n", str); //잘 삽입되었는지 확인


	char nu = '\0'; //널 문자 저장
	char sp = ' '; //공백 문자 저장
	printf("%d %d", nu, sp); //널과 공백 문자 출력

	//scanf함수를 이용한 문자열의 입력
	char str_2[50]; //50 크기의 배열 생성
	int idx = 0; //출력을 위한 인덱스 
	printf("문자열 입력: "); //문자열을 입력받음
	scanf_s("%s", str_2); //문자열을 입력받아서 배열 str에 저장
	printf("입력 받은 문자열: %s \n", str_2); //입력받은 문자열 출력

	printf("문자 단위 출력: "); 
	while ((str_2[idx] != '\0')) { //널문자가 나올때 까지 문자열에 입력된 값을 출력
		printf("%c", str_2[idx]);
		idx++;
	}
	printf("\n");

	char arr_1[] = { 'H','i','~' }; //문자 "배열"
	char arr_2[] = { 'H','i','~','\0' }; //문자"열" b/c 널 문자가 끝에 존재함

	char str_3[50] = "I like C programming"; //배열에 문자열 저장
	printf("string: %s \n", str); //문자열 출력

	str_3[8] = '\0'; //8번 칸에 널값 입력 시 문자열 끝이 여기로 인식
	printf("string: %s \n", str); //확인

	str_3[6] = '\0'; //6번 칸에 널값 입력 시 문자열 끝이 여기로 인식
	printf("string: %s \n", str);

	str_3[1] = '\0'; //1번 칸에 널값 입력 시 문자열 끝이 여기로 인식
	printf("string: %s \n", str);


	char str_4[50];
	int idx_2 = 0;

	printf("문자열 입력: ");
	scanf_s("%s", str_4); //입력받은 문자열을 저장
	printf("입력 받은 문자열: %s \n", str);

	printf("문자 단위 출력: ");
	while ((str_4[idx_2] != '\0')) { //str_4의 첫번째 값부터 널값이 나올때 까지 출력
		printf("%c", str_4[idx_2]); 
		idx_2++;
	} //scanf는 공백을 받으면 끝났다고 생각해서 공백이 있으면 뒤는 읽지 않는다.
	printf("\n");
		


	return 0;
}

