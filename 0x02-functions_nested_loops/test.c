#include <unistd.h>

int main()
{
	char c[] = "I am a good person";
	int len = sizeof(c);

	write(STDOUT_FILENO, c, len);
	return (0);
}
