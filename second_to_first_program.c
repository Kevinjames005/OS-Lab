#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void main(){
	char*args[]={"./exec",NULL};
	execvp(args[0],args);
	printf("End.");
}
