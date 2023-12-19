// #include<stdio.h>

// int main(){
//   int character;
//   printf("Enter a character here: ");
//   scanf("%c",&character);

//   if(character>='a' && character<='z'){
//     printf("This character is lowercase.");
//   }

//   else if(character>='A' && character<='Z'){
//     printf("This character is Uppercase.");
//   }

//   else if(character>='0' && character<='9'){
//     printf("This character is a digit.");
//   }

//   else{
//     printf("This is a special type of character.");
//   }

//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int character;
//   printf("Enter a character here: ");
//   scanf("%c", &character);

//   if (character >= '0' && character <= '9') {
//     printf("This character is a digit.");
//   } else if (character >= 'a' && character <= 'z') {
//     printf("This character is lowercase.");
//   } else if (character >= 'A' && character <= 'Z') {
//     printf("This character is Uppercase.");
//   } else {
//     printf("This is a special type of character.");
//   }

//   return 0;
// }


#include <stdio.h>

int main() {
   char ch;

   printf("Enter a character: ");
   scanf("%c", &ch);

   if (ch >= 'A' && ch <= 'Z') {
       printf("%c is an uppercase letter.\n", ch);
   } else if (ch >= 'a' && ch <= 'z') {
       printf("%c is a lowercase letter.\n", ch);
   } else if (ch >= '0' && ch <= '9') {
       printf("%c is a digit.\n", ch);
   } else {
       printf("%c is a special character.\n", ch);
   }

   return 0;
}
