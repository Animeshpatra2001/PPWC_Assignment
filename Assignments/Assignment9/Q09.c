/*
Parent PFDT
Descriptor	Description
0	    stdin
1	    stdout
2	    stderr
fd[0]	Read end of the pipe
fd[1]	Write end of the pipe
fs[0]	Read end of pipe fs
fs[1]	Write end of pipe fs
fds[0]	Read end of pipe fds
fds[1]	Write end of pipe fds
*/

/*
Child PFDT
Descriptor	Description
0	        stdin
1	        stdout
2	        stderr
fd[0]	    Read end of the pipe
fd[1]	    Write end of the pipe
*/