#include <stdio.h>

int main() {
    // char txt[] = "We are the so-called "Vikings" from the north."; //The solution to avoid this problem, is to use the backslash escape character.
    char txt[] = "We are the so-called \"Vikings\" from the north.";

    return 0;
}

/*
The backslash (\) escape character turns special characters into string characters:

Escape character	Result	Description
\'	'	Single quote
\"	"	Double quote
\\	\	Backslash
*/
