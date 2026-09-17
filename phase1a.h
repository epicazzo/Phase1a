#include phase1.h

// Struct for Process
struct Process {
	char[MAXNAME];
	int PID;
	int parent_PID;
	int priority;
	int runnable_status;
	int quit_state;
} Process;

// Struct for Queues
struct RunQueue {
	Process this_process;
	Process next_process;
} RunQueue;

// Enqueue Method
void enqueue_process(Process *aProcess);

// Dequeue Method
void dequeue_process(Process *aProcess);
