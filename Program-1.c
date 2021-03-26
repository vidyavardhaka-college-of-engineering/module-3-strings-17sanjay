Complete the given program with string declaration/initialization & read/print the string
// Instructions:-
//1) Initially, declare a string with size
//2) read the input string from user 
//3) Finally, Print the input string obtained from user.

//Expected input & output:-
//Enter a String: Vidyavardhaka
//The input string is Vidyavardhaka

#include <stdio.h>
int main() 
{
  int c=0,count=0;
  char s[100];
                      //Declare the string
printf("Enter a String: ");
scanf("%s",s);
while (s[c] != '\0')
{
  if(s[c]=='a' || s[c]=='A' || s[c]='e' || s[c]=='E'
  || s[c]=='i' || s[c]=='I' || s[c]=='o' ||  s[c]=='O'||  s[c]=='0' || s[c]=='u' ||  s[c]=='U' )
  count++;
  c++;

}
 printf("number of vowels i the string ="%d",count)                  
                      //Print the string
return 0;
}
