# get_next_line
Function to read the first line until a newline character from the file descriptor.

GNL is a function I created that is able to pull a line of text from any document, and if called again, it will pull the next line in descending order down the page!
GNL works with multiple file descriptors by using a doubly linked list to save your position in each document.
