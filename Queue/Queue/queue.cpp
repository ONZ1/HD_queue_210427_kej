#include <stdio.h>
//큐의 사이즈는 10
#define SIZE 10
int front = -1;		//front 큐 첫번째에 위치한 값의 인덱스
int rear = 0;		//rear 큐 마지막에 위치한 값의 인덱스

int queue[SIZE] = { NULL };

bool IsQueueEmpty() {
	if (front == rear-1)return true;		//배열이 비어있거나 모두 불러온 상태면 초기값과 같이 1 차이가 나기 때문에
	else return false;
}

//큐에 입력된 정수값을 저장하고 rear를 늘려주는 added_queue()함수
void AddedQueue(int num) {
	if (rear == SIZE)
//마지막 인덱스는 0에서 시작해서 SIZE까지 입력 가능. 
//마지막 인덱스의 값 입력 후 ++되어 SIZE와 같아지므로 이 이후 입력값은 추가될 수 없음.
	{
		printf("수용 한계 초과로 추가 불가\n");
	}
	else {
		queue[rear] = num;		//큐의 마지막 인덱스(0부터 시작)에 입력값 추가
		rear++;		//추가 후 인덱스값 1 올리기
	}
}

//큐의 값을 불러오고 front들 당겨오는 delete_queue()함수
int DeleteQueue() {
	front++;		//초기값은 -1이기 때문에 먼저 당겨와서 인덱스값 맞추기
	return queue[front];
}