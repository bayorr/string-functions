/* header file for encryt.c */
/*
Takes a string in as argv[1]. Does an alternating shuffle on string and outputs two scambled strings to argv[2] and argv[3]. Make sure your buffer is no larger than argv[1]*2
*/
int simpleShuffle(char * a, char * b, char * c);

/*
Takes two strings, argv[1] and argv[2] and appends them together to argv[3].
*/
int cutDeck(char * a, char * b, char * c);

/*
Takes two strings and appends them together, alternating values
*/
int removeShuffle(char * a, char * b, char * c);

/*
Reverse operation to cutDeck().
*/
int removeCut(char * a, char * b, char * c);

/*
Helper function to get string length
*/
int stringlen(char * a);
