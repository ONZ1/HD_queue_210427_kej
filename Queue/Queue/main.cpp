#include "queue.h"

void main() {
	AddedQueue(1);
	AddedQueue(2);
	AddedQueue(3);
	AddedQueue(4);
	AddedQueue(5);
	AddedQueue(6);
	/*AddedQueue(7);
	AddedQueue(8);
	AddedQueue(9); 
	AddedQueue(10);
	AddedQueue(11);
	AddedQueue(12);*/
	while (true)
	{
		if (IsQueueEmpty() == true)
		{
			printf("Á¾·á\n");
			break;
		}
		else printf("%d\n", DeleteQueue());
	}

	fgetc(stdin);
}