# get_next_line
Function to read the first line until a newline character from the file descriptor.

GNL is a function I created that is able to pull a line of text from any document, and if called again, it will pull the next line in descending order down the page!
GNL works with multiple file descriptors by using a doubly linked list to save your position in each document.

## Challenges
- Memory Management
- Understanding of the Buffer
- Understanding NULL
- Test Cases
- Linked Lists
- Bus Errors/Seg Faults

I had a very clean and elegant "working" version of this project originall. I was so proud of it until I submitted my project to be graded and was failed immediately with a Bus Error. So I added a few test cases and re-submitted. Again I failed. Fast forward 3 more attempts and fails, and I was fed up. I completely re-wrote the function, losing all my elegance by splitting 2 functions into 5. SUCCESS!

This project tested my patience multiple times. The only reason I prevailed is because I stuck with it and relentlessly tested my code.

Here are some pics from the Project!

![alt text](https://github.com/jeftekhari/get_next_line/blob/master/pics/Driver.png "Driver")

This is where the magic starts. GNL pulls a line in from the buffer, after error checking of course, and parses and presents it until the *\n* is found.

![alt text](https://github.com/jeftekhari/get_next_line/blob/master/pics/helper.png "Helper")

![alt text](https://github.com/jeftekhari/get_next_line/blob/master/pics/listfunction.png "List function")
