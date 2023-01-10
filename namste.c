 //print namaste if you are indian and bonjour for french
 
 #include<stdio.h>
 //declaration 
 void namaste();
 void bonjour();
 
 
 //function call
 int main()
 {
 printf("enter 'i'for india & 'f' for french");
 char ch,i;
 if(ch==i)
 namaste();
 else
 bonjour();
}
 //function defination
 void namste()
 {
 	printf("Namaste\n");
 }
 
 void bonjour()
 {
 	printf("Bonjour\n");
 }
