/*
Parent pfdt
0: stdin
1: stdout
2: stderr
3: fd[0] (pipe read)
4: fd[1] (pipe write)
*/

/*
Child pfdt
0: stdin
1: stdout
2: stderr
3: fd[0] (pipe read, inherited)
4: fd[1] (pipe write, inherited)
5: fs[0] (pipe read)
6: fs[1] (pipe write)
7: fds[0] (pipe read)
8: fds[1] (pipe write)
*/