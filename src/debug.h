#ifndef __DEBUG_H__
#define __DEBUG_H__

#ifdef __linux__
#endif
#ifdef BSD
#endif

class debug_process {
	private:
		pid_t pid;
		int pfds [2];
		const char * exec;
	public:
		debug_process ();
		debug_process (const char * _exec);
		debug_process (pid_t _pid);
		~debug_process ();
		pid_t fork_exec (const char * _exec);
		pid_t attach_pid (pid_t _pid);
		pid_t getpid ();
		void kill ();
		void run ();
};

#endif
