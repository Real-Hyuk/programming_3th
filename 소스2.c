#include<stdio.h>

int main() {


	//1. 10진수 정수를 입력 받아서 16진수로 출력하는 프로그램을 작성하시오.

	int num_10; //십진수 정수를 입력받을 수 있는 변수 선언
	printf("10진수 정수를 입력해주세요\n"); //정수 입력받음
	scanf_s("%d", &num_10); //num_10에 넣음

	printf("10진수 : %d -> 16진수 : %X\n", num_10, num_10); // 입력받은 10진수를 16진수로 변환


	//2. 프로그램 사용자로부터 두개의 정수를 입력 받아서 구구단을 출력하는 프로그램을 작성하시오.
	int num1, num2; 
	printf("정수를 두개 입력하세요.\n");
	scanf_s("%d %d", &num1, &num2); //입력받은 두 정수를 저장
	printf("%d단은 다음과 같습니다.\n", num1); //첫번째 정수에 대한 구구단 출력
	for (int i = 0; i < 9; i++) { //1~9단까지 출력하므로 0~8까지 반복문
		printf("%d X %d = %d\n",num1, i+1, num1*(i+1));  //각각 반복시마다 출력
	}
	printf("%d단은 다음과 같습니다.\n", num2); //상동
	for (int i = 0; i < 9; i++) {
				printf("%d X %d = %d\n", num2, i + 1, num2 * (i + 1));
	}

	//3. 두 개의 정수를 입력 받아서 최대 공약수를 구하는 프로그램을 작성하시오.
	int n1, n2 =0; //입력받을 변수 선언
	int a=0; //최대공약수 변수
	printf("정수를 두개 입력하세요.\n");
	scanf_s("%d %d", &n1, &n2); //입력받은 두 정수 저장
	for (int j = 1; j <= n1; j++) { //첫번째 정수보다 작은 수들로 계속 나눔
		if (n1 % j == 0) //나머지가 0이라는 것은 해당 수의 약수라는 것이므로 j는 첫번째 정수의 약수
		{
			if (n2 % j == 0) //j가 n1의 약수이면서 동시에 n2의 약수라면 j는 n1과 n2의 공약수
				a = j;
		}// break하지 않고 계속 진행해서 n1보다 작거나 같은 수까지 계속 반복, n1과 같을 경우 n1자체가 두 수의 최대공약수
	}
	printf("%d와 %d의 최대공약수는 %d입니다.\n", n1, n2, a); //결과 출력

	
	//4. 10개의 소수(prim number)를 계산해서 출력하는 프로그램을 작성하시오. (소수는 약수가 1과 자기자신인 수를 말함)
	int p;
	int q;
	int check; 
	int ctr = 0;
	printf("10개의 소수:");
	for (p = 1; ; p++)
	{
		if (ctr == 10) //10개가 채워지면 반복문 탈출, 증가를 마지막에 시켰고 0으로 시작했으므로 시작할때 체크하면 10개가 나온다.
		{
			break;
		}
		for (q = 2; q < p; q++)//
		{
			if (p % q == 0)//p는 q의 약수가 된다.
			{
				break;//p가 q의 약수면 소수가 아니니까 탈출하고 다음 숫자로 계산해야함
			}
		}
		if (p == q)//앞의 반복문에서 약수가 없이 탈출하고 자기 자신과 같으면 1과 자기자신만을 약수로 가지므로 소수임
		{
			printf("%d, ", p); //소수 출력
			ctr++; //카운트 하나 증가
		}
	}
	printf("\n");


		

	//5. 프로그램 사용자로부터 초(second)를 입력받은후, 이를 시, 분, 초로 변환하여 출력하는 프로그램을 작성하시오.

	int input, min1 =0;  //입력값 선언
	int sec, min, hour; //시, 분, 초 할당
	printf("초를 입력하세요.\n"); 
	scanf_s("%d", &input); //입력받고 저장
	sec = input % 60; //입력 받은 값은 초 단위이므로 60으로 나눈 나머지가 초가 된다.
	min1 = input / 60; //입력받은 값은 초 단위이므로 60으로 나눈 몫이 분 단위가 된다. sec에서 초는 이미 사용했으므로 나머지는 빼지 않아도 된다.
	hour = min1 / 60; //입력받은 값에서 sec을 뺀 것을 60으로 나눈 몫은 분 단위이므로, 이를 다시 60으로 나눈 몫은 시 단위가 된다.
	min = min1 % 60; //분 단위의 값을 60으로 나눈 나머지는 시 단위로 넘어가지 않은 시간을 분단위로 나타낸 것이다.
	printf("%d시 %d분 %d초\n", hour, min, sec); // 따라서 시, 분, 초를 출력하면 다음과 같다.


	
	//6. 프로그램 사용자로부터 숫자(n)을 입력 받아 다음의 공식이 성립하는 k의 최대값을 계산해서 출력하는 프로그램을 작성하시오.
	
	int nu; //입력받는 숫자 n선언
	int k=1; //k선언
	int abc=2; //2의 배수가 되도록 2로 시작
	printf("숫자를 입력하세요\n");
	scanf_s("%d", &nu); //입력값 받음
	
	for (int l = 0;; l++) { //될때까지 반복
		
		if (abc <=nu) { //입력값보다 계산중인 2의 배수가 작을 경우 
			abc = abc * 2; // 계산중인 2의 배수를 한번더 == 2의 k승에서 k를 1증가
			k++; //k를 1 증가
		}
		else if (abc > nu) { //계산중인 2의 배수가 입력값보다 클 경우, k의 최대값보다 커진 숫자가 된다.
			abc = abc / 2; //따라서 현재 abd에 들어가있는 2의 배수보다 한번 전, 즉 현재 계산중인 k값에서 1를 뺀 값이 최대값이 된다. 이때 k는 증가하지 않았으므로 그대로 가도 된다.
			printf("%d보다 작은 2의 배수 중 가장 큰 수는 %d입니다.\n", nu, abc); //출력
			break;
		}
	}
	

	//7. 2의 n승을 구하는 함수를 재귀적으로 구현하여 n이 11일 때 결과를 출력하는 프로그램을 작성하시오.
		int pk = 1; 
		ne2(pk,1); //2의 제곱을 구하는 함수 ne2호출
	
	return 0;
}

int ne2(int pl, int b) {
	int a; //2의 제곱 저장
	a = pl * 2; //2의 몇승인지에 대한 결과값, 입력값 pk는 위에서 1로 받음
	b++;
	printf("n이 %d일때  %d\n",b-1, a);
	if (b < 12) { //b이 11일때 결과를 출력해야하므로 b가 11까지 진행
		ne2(a,b); //재귀함수 사용
	}
	}