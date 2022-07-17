#include <ansi_c.h>
#include <cvirte.h>

int main (int argc, char *argv[])
{
	if (InitCVIRTE (0, argv, 0) == 0)
		return -1;    /* out of memory */
	
	while (1)
	{
		printf("cccc");
	}
	
	
	return 0;
}