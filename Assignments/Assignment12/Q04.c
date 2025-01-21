/*
Output- Port given=4096
Reason- The sin_port field is stored in
network byte order, but the printf function
prints it as a decimal integer without converting
it back to host byte order. 
*/