//Write code to reverse a C-Style string.

void reverse(char *str) { //Points to beginning of character array
    char * end = str;     //Points to beginning of character array
    char tmp;
    if (str) {            //True if pointing to a character that isn't null
        while (*end) {
            ++end;        //Brings the end pointer to null terminator
	}
	--end;            //Moves from null pointer to last character in string
	while (str < end) {
	    tmp = *str;   //Stores first character (1st iteration)
	    *str++ = *end; //Advances pointer AFTER str is given end char
	    *end-- = tmp;  //Stores temporary character in end, advances pointer after
	}
    }
}
