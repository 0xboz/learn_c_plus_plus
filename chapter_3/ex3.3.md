**Exercise 3.3:** Explain how whitespace characters are handled in the string input operator and in the getline function.

```Whitespace``` characters include ```space```, ```newline``` and ```tab```.

>The string input operator ```>>``` reads and discards any leading whitespace (e.g., spaces, newlines, tabs). It then reads characters until the next whitespace character is encountered.

Basically, any whitespace becomes a line break for string input operator.

>The getline function takes an input stream and a string. This function reads the given stream up to and including the first newline and stores what it read (not including the newline) in its string argument. After getline sees a newline, even if it is the first character in the input, it stops reading and returns. If the first character in the input is a newline, then the resulting string is the empty string.

It means ```getline()``` function treats everything (including ```space``` and ```tab```) as a line before each ```newline```.