/* Comment Header */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <signal.h>
#include <errno.h>

int main(int argc, char **argv){

	int i;
	char argvector[5][8] = {"Name", "IP", "TCP", "regIP", "regTCP"}; /* Desired Arguments Description */

	printf("Number of arguments: %d\n", argc);
	for(i=0; i<argc; i++){
		printf("%s: %s\n", argvector[i], argv[i]);
	}
	if(argc != 5){
		printf("Invalid number of arguments.\n");
	}
	else{
		printf("Arguments are valid.\n");
	}

	
	while(1){
		break;
	}

	exit(0);
}