#include <stdio.h>
#include <ctype.h>
 // girilen metindeki küçük harfleri büyüğe,büyük harfleri küçüğe çevir

int main()
   
{

 char metin[50];
 int i = 0;
 
 printf("metin girin: ");
 gets(metin);
 
 while(metin[i] != '\0')
 {
  char ch = metin[i];
  
  if(ch >= 65 && ch <= 90)
  {
    metin[i] = tolower(metin[i]);
  }
  
  else if(ch >= 97 && ch <= 122)
  {
    metin[i] = toupper(metin[i]);
  }
  
  i++;
 }
 
 printf("%s",metin);

 return 0;
 
}
