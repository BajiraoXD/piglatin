void pigLatin(char english[])
{
    int index = 0;
    char piglatin[80];

    for (int i = 0, start = 0 , locateSpace = 0; english[i] != '\0'; i++, locateSpace++)
    {
        char temp = english[i];

        for (;english[i] != ' ' && english != '\0' && english[i + 1] != '\0';) {
            locateSpace++;
            i++;
        }

        for (; start < locateSpace ; start++ , index++) {
            piglatin[index] = english[start +1];
        }

        piglatin[index - 1] = temp; 
        piglatin[index] = 'a'; 
        piglatin[index + 1] = 'y';
        piglatin[index + 2] = ' ';

        index += 3;
        start = locateSpace + 1;
    }
    piglatin[index] = '\0';//close the end of string 
}