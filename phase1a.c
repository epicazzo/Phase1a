#include phase1.h
#include phase1a.h
#include <stdlib.io>


Process process_table[MAXPROC];
RunQueue run_queues[6] = NULL;
Process *current;


void phase1_init() {

}

int spork(char *name, int(*func)(void *), void *arg, int stacksize, int priority) {

}

int join(int *status) {

}

void quit_phase_1a(int status, int switchToPid) {

}

int getpid() {
	return *current->PID;
}

void dumpProcesses() {

}

void TEMP_switchTo(int pid) {

}
