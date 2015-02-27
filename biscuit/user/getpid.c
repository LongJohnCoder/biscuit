#include <litc.h>

int main()
{
	int i;
	fork();
	for (i = 0; i < 30000; i++) {
		int pid = getpid();
		asm volatile("" :: "g"(pid) : "memory");
		printf("my pid is %d.\n", pid);
	}

	return 0;
}