
#include <stdio.h>

int main() {
    
    char a[100];
    scanf("%s",a);
    int l=0,i;
   
 for(int i=0;a[i]!='\0';i++){
     l++;
 }
 int c=0;
 for(int i=0,j=l-1;i<j;i++,j--){
     if(a[i]!=a[j]){
         c=1;
         break;
     } }
     if(c==0){
         printf("yes");
     }
     else {
         printf("no");
     }
}
