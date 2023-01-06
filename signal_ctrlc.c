ls
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <pthread.h>
#include <sys/time.h>

void SignalHandler( int signal_num ) {
		fprintf( stderr, "Catch ctrl-c\n");
		}


void main( void )	{ 
	
	struct sigaction sa;

	sigemptyset(&sa.sa_mask);
	sa.sa_handler=SignalHandler;

	sigaction ( SIGINT, &sa, NULL);
	while(1) sleep(1);
	}
