#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
//#include "new.h"
/*#define name "shyam"
 #define age 20*/
int main(){

        /*   int x = 10;
            int y = 20;
            int z = y / x;
            printf("%d",z); */

        /*  float x = 10.00;
           float y =20.00;
           float z = x * y;*/

        //  printf("your answer is %.2f" , z);
        // compound interest

/*float fdeposit = 10000;
   float rate = 1.7;

   fdeposit *= rate;
   printf("your amount is %.f\n" , fdeposit);
   fdeposit *= rate;
   printf("your amount is %.f\n" , fdeposit);
   fdeposit *= rate;
   printf("your amount is %.f\n" , fdeposit); */


        /*                    // type conversion and avg
           float dailyincome;
           int price = 30;
           int apples = 200;
           int workingdays = 7;
           dailyincome = (float)price * (float)apples / 7;
           printf("\nyour daily wage is %.3f\n", dailyincome);
           return 0; */
        //if else
        /* int x = 20;
           if (x <  10){
           printf("hey nice");
           }else {
           printf("hello intelligent");
           }     */
        // if else if
        /* int shyam ;

           printf("enter your number :");
           scanf("%d" , &shyam);
           if(shyam <= 15){
           printf("he should be in hostel");
           }
           else if(shyam > 15 || shyam <= 40) {
              printf(" he can go to pub");
           }else {
           printf("he is crazy");
           } */
        // average
        /*int x , y, z , xy;
           int yz;
           printf("welcome enter the marks in x : \n");
           scanf("%d" , &x);
           printf("welcome enter the marks in y : \n");
           scanf("%d" , &y);
           printf("welcome enter the marks in z : \n");
           scanf("%d" , &z);
           printf("welcome enter the marks in xy : \n");
           scanf("%d" , &xy);
           yz = (x+y+z+xy)/4;
           printf("your result is %d" , yz);
           return 0;*/
        //using int and char

/*int age;
   char shyam[20];
   printf("enter the age\n");
   scanf("%d",&age);
   printf("enter your gender? (m/f) \n");
   scanf("%s" , &shyam[20]);

   if(shyam[20] == 'm'){
    printf("hello sir\n");
   }else{
      printf("hello mam\n");
   }

   if(age <= 10){
   printf("u can enjoy\n");
   }else{
   printf(" u can \n");
   } */
        // using int doing avg and grading

/*float telugu;
   float hindi;
   float english;
   float avg;
   printf("enter the marks obtained in telugu sub :\n");
   scanf("%f" , &telugu);
   printf("enter the marks obtained in hindi sub :\n");
   scanf("%f" , &hindi);
   printf("enter the marks obtained in english sub :\n");
   scanf("%f" , &english);
   avg = (telugu + hindi + english)/ 3;
   printf("your avg is %.2f\n" , avg);
   if(avg <= 85){
   printf("\n Grade : B");
   }
   else if(avg > 95){
   printf("\n Grade : A");
   }
   return 0; */
        //nested if (/* condition */)
        /* code */

        /*float x,y,z, avg;
           printf("enter the marks in x :\n");
           scanf("%f" , &x);
           printf("\nenter the marks in y :\n");
           scanf("%f" , &y);
           printf("\nenter the marks in z: \n");
           scanf("%f" , &z);
           avg = (x+y+z)/3;
           printf("\nyour avg is %.2f\n" , avg);
           //35+
           if(x >= 35){   // and also use this case if(x>=35)&&(y>=35)&&(z>=35)
           if(y >= 35){
             if(z >= 35){
               printf("\ngrade : passed\n");
             }else{
               printf("\nfailed in z\n");
             }
           }else{
             printf("\nfailed in y\n");
           }
           } else{
           printf("\nfailed in x\n");
           }  */
        // calculaion challenge
/*int x,y,z;
   printf("enter the first number :\n");
   scanf("%d" , &x);
   printf("\nenter the second number :\n");
   scanf("%d", &y);
   z = (x * y);
   printf("\nyour result is : %d" , z);
   } */
        //using header  import data

/*printf("my name is %s and my age is %d" , name , age);
   return 0; */

        //using char
        /*char shyam;
           printf("welcome\n");
           printf("\nenter your digit!\n");
           scanf("%s" , &shyam);

           if((shyam  > 'a') && (shyam < 'c')){
             printf("\nyou got it\n");
           }else {
             printf("\nyou may done mistake somewhere\n");
           } */
        //  test case and important


        /* int shyam;
           printf("\n how many friends do u have ?\n");
           scanf("%d" , &shyam);

           printf("\n u have %d friend%s \n" , shyam ,(shyam == 1)? "" : "s"); */

        //char
/*char shyam[20] = "pavan reddy";

   printf("your name is %s" , shyam);*/
        // char with scanf
/*char shyam[20];
   printf("enter your name :\n");
   scanf("%s" ,shyam);
   printf("your name is %s" , shyam);*/

        //char using changes
/*
   char shyam[20] = "pavan reddy";
   printf("your name is %s\n" , shyam);

   // shyam[3] = 'n';
   //  strcpy(shyam, "rahul");
   printf("\nyour name is %s" , shyam);
   return 0; */

        //char using scanf changes

        /*char  shyam[20];
           printf("welcome\n");
           printf("\n enter your name :\n ");
           scanf("%s" , shyam);
           printf("\nyour name is %s\n" , shyam);
           return 0; */
        // char using changes in sentences

/*char *shyam[] = {"shiva" ,"uday"};
   printf("your first name is %s\n" , shyam[1]);

   shyam[1] = "reddy";
   printf("\nyour first name is %s\n" , shyam[1]); */

        //conditional operator
        /*int shyam;
           printf("\nenter your marks ?\n");
           scanf("%d" , &shyam);

           (shyam >= 35)? printf("\n passed") : printf("\nfailed\n"); */
        //  writing comb of int and char
        /*  int age = 20;
           char shyam[20] = "pavan";
           printf("my name is %s and my age is %d" , shyam , age); */
        // incremant operators
        /* int x , y;
           x = 10;
           x++;    // ++x // x--//--x
           printf("%d", x); */
        // calculaion using incremant

        /*  int x, y, z;
           x = 10;
           y = 10;
           //  z = x++ * y;
           z  = ++x * y;    // sam with sub
           printf("your result is : %d" , z); */

        //while loop
        /* int shyam = 5;

           while(shyam <= 10)  {
           printf("\nhello ur score is %d\n" , shyam);
           shyam++;
           }    */

        // loop using doubling the number

        /*  int day = 1;
           float amount = 1;

           while(day <= 30){
            printf("\non day %d your amount is %.2f\n" , day,amount);
            amount = amount * 2;
            day++;
           }  */
        // test case with s
/*  int number;
   printf("enter how many friends do u have ?");
   scanf("%d", &number);
   printf("u have %d friend%s " , number, (number ==1)? "" : "s"); */

        //practice doubling amount
        /*int day=1;
           float amount= 1;
           while(day <= 30){
            printf("\non day %d your amount is %.2f\n" , day , amount);
            amount*=2;
            day++;
           }  */
        // practice doubling amount with scanf
/*  int day;
   float amount;
   printf("\nenter starting day\n");
   scanf("%d" , &day);
   printf("\nenter the intial amount to be doubled :\n");
   scanf("%f", &amount);

   while(day <= 30){
   printf("\non day %d your amount is %.2f\n" , day , amount);
   amount*=2;
   day++;
   }*/
        // int char problem not solved
/*
   char y;
   int x;
   printf("\nwhat's your gender ? [m/f]\n");
   scanf("%s" , &y);
   printf("\nenter your age ? \n");
   scanf("%d" , &x);

   if(y == 'm' || y == 'f'){
   printf("\nhello sir/mam \n");
   }else{
   printf("please enter your gender ?[m/f]\n");
   }

   if(x <= 20){
   printf("\nyou are not allowed in to pub \n");
   }else{
   printf("\nyou are allowed in to pub\n");
   } */
        //do while
/*float totalmarks= 0;
   int nofsub = 0;
   float avg = 0;
   float marksentered = 0;
   /*printf("\ntotal subjects : %d \t total marks :%.f \t avg :%.f" , nofsub , totalmarks , avg);
   totalmarks+=50;
   printf("\ntotal subjects : %d \t total marks :%.f \t avg :%.f" , nofsub , totalmarks , avg);*/

        // aalso without dowhile condition we can add data to given numberusing scanf
        /*printf("\ntotal subjects : %d \t total marks :%.f \t avg :%.f" , nofsub , totalmarks , avg);
           printf("\nenter  marks :\n");
           scanf("%f", &marksentered);
           totalmarks = totalmarks+marksentered;
           printf("\ntotal subjects : %d \t total marks :%.f \t avg :%.f" , nofsub , totalmarks , avg);*/

/*  printf("\n enter 0 to stop");

   do{
    printf("\ntotal subjects : %d \t total marks :%.f \t avg :%.f" , nofsub , totalmarks , avg);
    printf("\nenter  marks :\n");
    scanf("%f", &marksentered);

    nofsub++;
    totalmarks+=marksentered;
    avg = totalmarks/nofsub;
   }while(marksentered!=0); */

        // for loop
/*
   int x , y, z;
   x = 19;
   y = 1;
   z;

   for(z=19; z<=190; z+=19){
    printf("\n %d * %d = %d \n" , x,y,z);
    y++;
   }      */
        // for loop with scanf

        /*
           int x;
           int y = 1;
           int z;

           printf("enter your table no : ");
           scanf("%d", &x);
           int a = x*10;
           for(z=x; z<=a; z+=x){
           printf("\n %d * %d = %d \n" , x,y,z);
           y++;
           }   */
        // trying for loop program in while
        //wrong
/*   int x ,z;
   int y =1;
   printf("enter the table number :");
   scanf("%d", &x) ;
   int a = x*10;

   while(z<=a) {
     printf("%d*%d = %d" , x,y,z);
     y++;
     z+=x;
   } */
        // using for loop creating rows and columns
/*    int rows;
    int columns;
    for(rows=1; rows<=5; rows++){
      for(columns=1; columns<=5; columns++){
        printf("| ");   // printf("%d",columns);
      }
      printf("__\n"); //printf("\n");
    } */
        // printing as many times given by user and putting break in for loop
/*

   int x;
   int y;

   printf("enter number of times u wanted to print the no");
   scanf("%d" ,&y);

   for(x=1; x<=10; x++){

           // if we print this we get one minus because it is not printing the next statement
                                     if(x==y){
                                           break;
                                       }    //
   printf(" %d shyam pavan reddy\n" , x);

   if(x==y){
     break;
   }  */
        // escaping the line using continue for loop
        // and  modifing x<=y here taking y value with scanf
/*  int x;
   int y;
   printf("enter max times u want to loop it :\n");
   scanf("%d" ,&y);
   for(x=1; x<=y; x++){
     if(x==3){
       continue;
     }
   printf("\n%d shyam pavan\n", x);
        //if we print this down no use because already statement which should be skipped printed already
   /*if(x==3){
     continue;
   } */

        // }
        // printing continue program using do while
        //    meaning of continue is first escape and later continue
/*int x =1;

   do{
   if(x==8){
   x++;
    continue;

   }
   printf("%d shyam\n",x);
   x++;
   }while(x<=10); */

        //in while conditio
        /*   int x=1;
                 while(x<=10){
                   if(x==5){
                     x++;
                     continue;
                   }
                   printf("%d shyam pavan\n",x);
                   x++;
                 } */
        //so using int we can store singlecolon element ,number, symbol
/*char x; //u can also use int to store singlecolon ex: int x='s';

   printf("enter a charecter ?");
   scanf("%c" , &x);

   if(isalpha(x)){
   if(isupper(x)){
     printf("%c is a upper case letter\n",x);
   }else if(islower(x)){
     printf("%c is a lower case letter\n",x);
   }


   }else if(isdigit(x)){
   printf("%c is a number\n",x);
   }else{
   printf("%c is a symbol\n",x);
   } */

        // using ifelse whileloop and switch
        //here using loop beacuse to satisfy user to get one chnace again to enter value

        /* char grade;
           int x=1;
           while(x<2){
            printf("\nenter your grade :\n");
            scanf("%c",&grade);

            if(isupper(grade)){

                switch(grade){
                  case 'A' : printf("\n excellent student\n");
                  break;
                      case 'B' : printf("\n good student\n");
                      break;
                          case 'C' : printf("\n avg student\n");
                            break;
                            case 'D' : printf("\n can do much better \n");
                              break;
                              default : printf("\n u are crazy\n");
                }
            }else{
               x=0;    // we use 0 here because to get x value 0 againa and loop should start again with 1
               printf("\nenter your grade correctly ! (A,B,C,D)\n");
            }

           x++;
           }    */
        // checking password secured or not by using char and int ;
        // with 4 conditions lower,upper, symbol,number
/*  char password[200]="shyamPAVANREDD2";
   int x=4;
   int i=0;

   // password should consist of lower case
   while(i<16){     //16 because the name consists of 16 charecter
    if(islower(password[i])){
      x--;
      printf("\n you entered a lower case\n");
      break;
    }
    i++;
   }
   // password should consist of upper case
   i=0;
   while(i<16){
    if(isupper(password[i])){
      x--;
      printf("\n you entered an upper case\n");
      break;
    }
    i++;
   }
   // password should consist of number
   i=0;
   while(i<16){
   if(isdigit(password[i])){
    x--;
    printf("\n you entered a number\n");
    break;
   }
   i++;
   }
   //password should consist of symbol
   i=0;
   while(i<16){   // default on 16th digit it is considering as symbol
    if(isalpha(password[i])){} else if(isdigit(password[i])){  // if it is alpha dont print anything and if it is number dont print anything but if it is remaining print it is a symbol

    }else{
      printf("\n you entered a symbol\n");
      x--;
      break;
    }
   i++;
   } */
        // using above same program and printing by scanf user wish

        /*     char password[200];
               int x=4;
               int i=0;
               int pw;
               printf("\n enter your password \n");
               scanf("%s",password);
                 // we are taking this because to measure user password and assign that to in whhile loop
               pw =strlen(password);
             printf("\nyour password length is %d\n",pw);
               // password should consist of lower case
               while(i<pw){
                 if(islower(password[i])){
                   x--;
                   printf("\n you entered a lower case\n");
                   break;
                 }
                 i++;
               }
               // password should consist of upper case
               i=0;
               while(i<pw){
                 if(isupper(password[i])){
                   x--;
                   printf("\n you entered an upper case\n");
                   break;
                 }
                 i++;
               }
             // password should consist of number
             i=0;
             while(i<pw){
               if(isdigit(password[i])){
                 x--;
                 printf("\n you entered a number\n");
                 break;
               }
               i++;
             }
             //password should consist of symbol
             i=0;
             while(i<pw){
                 if(isalpha(password[i])){} else if(isdigit(password[i])){  // if it is alpha dont print anything and if it is number dont print anything but if it is remaining print it is a symbol

                 }else{
                   printf("\n you entered a symbol\n");
                   x--;
                   break;
                 }
               i++;
             } */

        //  same above program without printing stataments just checking x value whether it satisying all conditions or not
        // removing printing stataments
        /*   char password[200];
             int x=4;
             int i=0;
             int pw;
             printf("\n enter your password \n");
             scanf("%s",password);
               // we are taking this because to measure user password and assign that to in whhile loop
             pw =strlen(password);
           printf("\nyour password length is %d\n",pw);
             // password should consist of lower case
             while(i<pw){
               if(islower(password[i])){
                 x--;

                 break;
               }
               i++;
             }
             // password should consist of upper case
             i=0;
             while(i<pw){
               if(isupper(password[i])){
                 x--;

                 break;
               }
               i++;
             }
           // password should consist of number
           i=0;
           while(i<pw){
             if(isdigit(password[i])){
               x--;

               break;
             }
             i++;
           }
           //password should consist of symbol
           i=0;
           while(i<pw){
               if(isalpha(password[i])){} else if(isdigit(password[i])){  // if it is alpha dont print anything and if it is number dont print anything but if it is remaining print it is a symbol

               }else{

                 x--;
                 break;
               }
             i++;
           }

           printf("\nx value is %d\n", x);// after all satisfying x values if we print this statemnt we will know what is remains

           if(x==0){
           printf("\n your password is secured\n");
           }else{
           printf("\n your password is not secured! try again \n");
           }  */

        // above program printing again by while condition to satisfy user to give one chance again

        /*   char password[200];
           int a = 1;
           while(a<2){   // keeping everythng in while condition
             int x=4;
             int i=0;
             int pw;
             printf("\n enter your password : \n");
             scanf("%s",password);
               // we are taking this because to measure user password and assign that to in whhile loop
             pw =strlen(password);
           printf("\nyour password length is : %d\n",pw);
             // password should consist of lower case
             while(i<pw){
               if(islower(password[i])){
                 x--;

                 break;
               }
               i++;
             }
             // password should consist of upper case
             i=0;
             while(i<pw){
               if(isupper(password[i])){
                 x--;

                 break;
               }
               i++;
             }
           // password should consist of number
           i=0;
           while(i<pw){
             if(isdigit(password[i])){
               x--;

               break;
             }
             i++;
           }
           //password should consist of symbol
           i=0;
           while(i<pw){
               if(isalpha(password[i])){} else if(isdigit(password[i])){  // if it is alpha dont print anything and if it is number dont print anything but if it is remaining print it is a symbol

               }else{

                 x--;
                 break;
               }
             i++;
           }

           //  printf("\nx value is %d\n", x);// after all satisfying x values if we print this statemnt we will know what is remains

           if(x==0){
           printf("\n your password is secured\n");
           }else{
           printf("\n your password is not secured! try again \n");
           a=0; // because in while loop next the condition will be 2 <2  so to give user another chnace when the password is not secured we are writing a=0 in else condition so that it asks user again
           }


             a++;
           }   */
        // saying user that u didnt entered something condition

        /*       char password[200];
               int a = 1;
               while(a<2){   // keeping everythng in while condition
                 int x=4;
                 int i=0;
                int lc=0;  // because to add to down conditions if down if condition is true than 0+1 will be done and it helps us to say that what we didnt entered in compilers
                int uc=0;
                int num=0;
                int sym=0;

                 int pw;
                 printf("\n enter your password : \n");
                 scanf("%s",password);
                   // we are taking this because to measure user password and assign that to in whhile loop
                 pw =strlen(password);
               printf("\nyour password length is : %d\n",pw);
                 // password should consist of lower case
                 while(i<pw){
                   if(islower(password[i])){
                     x--;
                     lc++;

                     break;
                   }
                   i++;
                 }
                 // password should consist of upper case
                 i=0;
                 while(i<pw){
                   if(isupper(password[i])){
                     x--;
                    uc++;
                     break;
                   }
                   i++;
                 }
               // password should consist of number
               i=0;
               while(i<pw){
                 if(isdigit(password[i])){
                   x--;
                  num++;
                   break;
                 }
                 i++;
               }
               //password should consist of symbol
              i=0;
               while(i<pw){
                   if(isalpha(password[i])){} else if(isdigit(password[i])){  // if it is alpha dont print anything and if it is number dont print anything but if it is remaining print it is a symbol
                 sym++;
                   }else{

                     x--;
                     break;
                   }
                 i++;
               }

           //  printf("\nx value is %d\n", x);// after all satisfying x values if we print this statemnt we will know what is remains

           if(x==0){
            printf("\n your password is secured\n");
           }else{
            printf("\n your password is not secured! try again \n");
            a=0; // because in while loop next the condition will be 2 <2  so to give user another chnace when the password is not secured we are writing a=0 in else condition so that it asks user again
           // so here it will be done where we didnt entered which condition  is not satisfied because that will be done only on else if everything is okay then it wont come here it prints upper if statement
           if(lc==0){
            printf("\n you didnt entered  lc\n");
           }if(uc==0){
            printf("\n you didnt entered  uc\n");
           }if(num==0){
            printf("\n you didnt entered  num\n");
           }if(sym==0){
            printf("\n you didnt entered  sym\n");
           }
           }


                 a++;
               } */

        //           new program changing the int assined values to uppercase or lowercase as per our wish by using toupper in printing
/*int x='a';
   int y='T';
   int s='9';

   printf("\n%c\n",toupper(x));   //toupper to convert small alphabet in given x variable to big uppercase
   printf("\n%c\n",tolower(y)); */

        //new program
/*  char grade;
   int x=1;
   while(x<2){
    printf("\nenter your grade among(A,B,C,D) :\n");
    scanf("%c",&grade);
    char newgrade=toupper(grade);// here if u see upline there we stored user value in grade then now we are taking chaar in this line and writing toupper(grade //in this grade the user value is there and based on switch case we can convert to upper and lower)
       switch(newgrade){  //testing newgrade because now user value converted and stored in newgrade
         case 'A' : printf("\nyou are excellent\n");
         break;
         case 'B' : printf("\nyou are good\n");
         break;
         case 'C' : printf("\nyou need to work hard\n");
         break;
         case 'D' : printf("\nyou are failed\n");
         break;
         default : printf("\n u are crazy\n");
         x--;
       }

    x++;
   }  */
        // to measure array string length in two cases one case we seen before in password program
        //if we enter anythng and measure it then below program
/*char variable[50]="shyampavanreddy"; //array string length
   int x;
   x=strlen(variable);
   printf("%d\n",x); */

        // if we give chnace to user and measure the length of array string we write in the below way
/*char variable[50];
   printf("\nenter your name :\n");
   scanf("%s",variable);
   int x;
   x=strlen(variable);
   printf("%d\n", x); */
        // so to add some thing to string array we use strcat() and we also know that to replace we use strcpy
/*  char variable[50]="shyam";
   printf("\nmy name is : %s \n", variable);

   // to add something to above stringarray
   strcat(variable," pavan ");
   printf("\nmy name is :  %s  \n", variable);

   // to replace iin string array we use strcpy
   strcpy(variable,"haswanth reddy");
   printf("\nmy name is :  %s  \n", variable); */
// to replace one element in array string
/*  char variable[50]="shyam";
   printf("\nmy name is : %s \n", variable);

   variable[1]='y';
   printf("\nmy name is : %s \n", variable); */
// to replace whole array string
/*char *variable[]={"shyam","pavan","reddy"};
   printf("\nmy name is : %s \n", variable[1]);

   variable[1]="reddy";
   printf("\nmy name is : %s \n", variable[1]); */
        // using puts and gets  in the place of printf and scanf
/*char name[50];
   char favfood[50];
   char sentence[100]="";
   // we use puts and gets mainly in char strig array because when u use scanf and print somethng it doesnt print complete string after space only prints first name ex: if u give shyam pavan when u use scanf it prints only shyam not after space pavan so here we r considering gets
   puts("enter your name :");   // puts we can write in string and we can print even
   gets(name); // instead of writing %s we can simply use gets in the place of scanf
   puts(""); // because in puts it automatically takes newline at end so here to get space between lines we use it again
   puts("enter your favfood :");
   gets(favfood);
   puts("");
   strcat(sentence,name);// sentence line lo aa name lo em store ayindho adi add avuthadi // we can add from one name varibale to senetnce so thats y we are not keeping name here in double quotes
   strcat(sentence," loves to eat ");
   strcat(sentence,favfood);

   puts(sentence);
 */
        // math functions // how to round up a number by using ceil and floor

        /*float variable=5.444444;
           float variable1=2.4444;

           printf("\nyour value is %.2f\n",variable);
           printf("\nyour value is %.2f\n",variable1);

           printf("\n");

           printf("\nyour value is %.2f\n",floor(variable)); // floor will decrease the value and round up
           printf("\nyour value is %.2f\n",floor(variable1));

           print("\n");
           printf("\nyour value is %.2f\n",floor(variable)); //ceil will upgrade the value and round up
           printf("\nyour value is %.2f\n",floor(variable1)); */


        // 2nd math function to put value in negative to positive by using absolute function
/*int year1;
   int year2;
   int age;

   printf("\nenter year1 :\n");
   scanf("%d" , &year1);
   printf("\nenter year2 :\n");
   scanf("%d" , &year2);

   age = year1-year2;
   age = abs(age);  // to convert neg to pos we are using abs // and again storing it in age and calling that down
   printf("your age is :%d", age); */

        // math function power to find out powers
/*  float var=5;  // here first 5 later next float is considered as first floats power
   float var1=5;

   printf("%.f",pow(var,var1));// to find power we use pow() */

        // math function to find out square root

/*  float x=16;
   printf(".3%f",sqrt(x)); */
        // when u give chnace to user
/*float  x;
   float y;
   printf("enter the value to do sqrt :");
   scanf("%f", &x);

   y = sqrt(x);
   printf("%.2f" , y); */

        // new program modulus symbol math function

/*int var=21;
   int var1=10;
   int var2= var%var1;    // when u use (%) modulus symbol it gives only remainder and when u use (/)division symbol it gives quotient as we know;
   printf("\n%d\n",var2); */

        // program based on random numbers diceroll
/*int var;
   int diceroll;
   for(var=1; var<20; var++){

   // printf("\n%d\n",rand());  // random numbers atleast 32000 atmost infifnity

   diceroll=(rand()%6)+1; //recorded audio clip in ur mobile// when we give other numbers we may not get zero in output but if we get we need to use paranthesses and +1 ;

   printf("\n%d\n",diceroll);
   } */
        // char array and string array

/*char var[50]="shyam pavan reddy";  // singledouble quotes number of elements iside

   printf("%c" , var[2]); */
        //in arrays concept we dont use & to %s
        // when to use puts and gets in char array and string array by userinput
/*char var[50];
   printf("\nenter your name :\n");
   scanf("%s" , var);
   printf("%s" ,var); */
        // above its not printing complete sentence so down we are using puts and gets
/*char var[50];
   puts("enter your name:");
   gets(var);
   puts(var); */

        // string array

/*char *var[50]={"shyam","pavan"}; // multiple elements with double quotes
   printf("%s", var[1]); */

        //number array

/*int var[10]={10,20,30,40,50,60};

   printf("%d" , var[5]); */


        // new program using int array and string array
/*char *students[3]={"shyam","shiva","uday"};

   int marks[3]={70,75,71};

   int bestmarks=0;

   char *beststudent[1];

   int i;
   for(i=0; i<3;i++){
   if(marks[i]>bestmarks){
    bestmarks=marks[i];    // bestmarks if greater then storing the marks and looping again untill it gets less value next;
    beststudent[1]=students[i]; // here [i] in the sense above marks[i] total i value considered here and stored in beststudent even and next loop again
   }

   }
   printf("\nthe best student is %s and his score is %d\n" , beststudent[1],bestmarks);

 */
        //sorting technique program  <!-- TODO:  -->
/*int marks[5]={70,75,72,60,65};

   int i;
   for(i=0; i<5; i++){
   printf("\n %d\n" ,marks[i]); // we are printing everything in above int array so we need to write marks[i]

   }

   printf("\n_______________________________\n");

   while(1){   // sorted=0 antey if elements in marksarray la em sort avakapothey 0 ayi break cheseyi while loop ni ani ardham

   int sorted=0;

               for(i=0; i<4; i++){          // 4 because we are comparing 1 element with another
               if(marks[i]>marks[i+1]){       // comaring first element in array with second element
                  int temp = marks[i];    // temperarory variable ni create chesi dantlo marks[i] ni store chesa
                  marks[i] = marks[i+1];    // so now above we stored large value in temp now that place is empty so we are storing marks[i+1 ]in that first place i.e marks[i]
                  marks[i+1]=temp;                //now second place is empty storing first number from temp to marks[i+1];
                  sorted=1;              // if ala pina una numbers place chnage ayithey sort ayinatu appudu mala looping to for atlast while condition will not break and for loop starts again

               }
               }

   if(sorted==0){
    break;
   }
   }
             // now see order
   for(i=0; i<5; i++){
   printf("\n %d\n" ,marks[i]); // we are printing everything in above int array so we need to write marks[i]
   }
 */
// pointers  simple and easy to understand  <!-- TODO:  -->
  /*      int apples=10;
        printf("\n%d\n",apples);

        int *papples=&apples; // to store memory address we use & before  // so here we are creating another variable calling *papples p is nothing but pointerapples and storing the above apples memory address in this pointer and calling it down
        printf("\n%p\n",papples); // to visulaize memory address when we are printing we use %p for pointer and calling that pointer
        // so above we created a pointer variable so that variable will be also having a memory adresss so to see that adress we know to visualiaze we put %p in printf and calling that related variable with &
        printf("\n%p\n",&papples);
        // so *papples will be having access to print memomry adress as well as there assigned variables value

        printf("\n*papples : %d\n", *papples); //*papples we are calling it prints the value wich is assigned as we disscussed before pointers will be having access to change the assigned variables value
        // if u check now by calling the original value
        printf("\napples :%d\n", apples); // same value if we call above using pointer also because it has acesss
        // u can cross check whether the *papples having access or not
        *papples=50;
        printf("\n*papples :%d\n",*papples ); // value changed
        // now print apples u get to know
        printf("\n apples :%d\n",apples); // got it same value
*/
        //  using int array and  pointers
  /*     int shyam[5]={10,20,30,40,50};
              printf("\n name \t  memory adress \t  value\n");
        int i;

        for(i=0; i<5; i++){
          printf("\nshyam[%d] \t %p \t %d \t \n" , i , &shyam[i] , shyam[i]);
}
     printf("\norange \t %p\n",shyam);  //so defaultly in int array the first element is assigning to be that variable and variable[shyam]; is calling as pointer;

     // so now we will check whether that is pointer to that first element 10 or not
     printf("\norange \t %p \t  %d \n", shyam,*shyam);  // so we are keeping *shyam to find whose value is stored in that pointer

    // so in array first element is going to be the pointer of that variable so to check other elements in that array we use
    printf("\n(orange+3) \t %p \t %d \n", (shyam+3), *(shyam+3));//+3 because to find out the address of third value in int array in that way we use to fing +4 +2 like that;

    shyam[0]=20; // just to confirm whether if we change value of that first element in array is it chnaging or not by using default pointer method nothing but first element becomes defaultly assigned to that variables pointer so here we neeed not to use * to check
    printf("\n%d\n",shyam[0]); */

           // new program // char array with pointers topic
           // we cant change strings with array var
 /*  char shyam[]="pavan";  // it is printing
    puts(shyam);

       // but we know in int array if we take that pointer variable and we can also change the elements in int array but here in char array the complete string is in one double quotes and if u change the element in string it doesnt changes because its completely in one double quotes and if u change the entire memory adress will be changed

   // but lets try once
/*   shyam[]="reddy";  // so error is coming when we are using that variable pointer and assigning new element to that we are getting error but when we called in above int array it got changed here it wont
    puts(shyam); */

    // so the above one doesnt have solution but we can try it in another way as we know special function strcpy to replace value when we tried by the pointer it doesnt worked

  /* strcpy(shyam,"reddy");  // here it succesfully chnaged
   puts(shyam);

   // above special function worked but we will try in first way which got error
   // through pointer variable we can change the strings

     char *pshyam="hello intelligent"; // here we are directly creating pointer and assigning some string to this and what we did before we created variable and assigned string so we know that variable will become a default pointer to first element but here in this program the string is in one double quotes so it is not working to change the element so alterantely we are directly creatig a pointer here and assigning string to it not for variable and so through this the string can be replaced next time and here the string is directly assigned to pointer by strings memeory adress bonded to pointer
     puts(pshyam);

   // now we will check whether its getting replaced or not
    pshyam="hello shyam";  // when we change the string it works because above in pointer memory adress the string is saved here we are replacing another string in that memory adress //so this is the reason we assigned directly string to pointer above to store adress and string next time it changes the string in that adress
    puts(pshyam);

    // summary we cant change string in arrays by that default pointer like int arrays so we have special function strcpy to change strings in array[] and *array{}  and we can change strings by creating pointer variable as we seen above last so thats it simple

    */

        // just to check by combining pointer variable and array
/*
char shyam[]="shyampavan";
char *pshyam=shyam;  // i created  pointer variable and assigned array string  we know in pointer var what ever string we writes we can change but in array we cant change because its constant as we learned in above program
puts(pshyam);

pshyam="pavanreddy";
puts(pshyam);      // string changed succesfully by combining both array and pointer variable
  */

// new program using fgets in same above program giving user chance


 // difference fgets cuts extra elements //scanf just prints till space // gets prints entire thing
/*
char shyam[10];

char *pshyam=shyam;  // i created  pointer variable and assigned array string  we know in pointer var what ever string we writes we can change but in array we cant change because its constant as we learned in above program

puts("enter your name :");


fgets(pshyam,10,stdin); // three aruguments 1st where to store,2nd how many elemenets , 3rd stdin means if overwritten more than 10 elemets or what ever you declared it will cut extra elemets

puts(pshyam);
*/


//   heap ni enduku use chestham antey user ki chance ichetapudu manaki thelvad eni bytes memory use cheyali array la so manam andukey heap use chestham memory ni thisukoni chala tharvatha free chestham
/*
// new program heap function <!-- TODO:  -->
int *apples; // int array user
// down size of int is always depend upon ur compiler based intezer size if ur compiler is 32 bit size of int will be 4bytes or if compiler is 64 bit then size of int will be 8bytes

// down 5 we are just assuming depends upon user u will understand this in next program

apples=(int*)malloc(5*sizeof(int)); //int because it is int type // int* is type casting and malloc is a function which borrrows memory from our computer and size of int is because its a int type and we assume there are 5 elemeents in array so 5*

free(apples);// after completeion of application we can free that borrowed memory
*/



//program using heap function finding the avg of daily income of a user

/*int i,howmanydays;
int  *income;     // we dont know how much memory user want so we are not keeping array
int total;
float avgincome;

 // we are asking user how many days amount do u want to avg
printf("\nhow many days do u want to enter :\n");
scanf("%d",&howmanydays);

income=(int *) malloc(5 * sizeof(int));// income=(int*)malloc(howmanydays*sizeof(int)); // so u can write in second way also or u can assume like in first way
// muvu enni days ichi dani howmanydays la store chesavo antha varaku ey less than down calculate avuthadi

for(i=0; i<howmanydays; i++){  // so above we multipled with 5 * so so much space will be created or else memory created but in this line we are taking i<howmanydays because user only want 7days to calculate so it will take till 7 only we stored this 7 in howmanydays so how much memory created in array it doesntmatter it takes only up to userwish
printf("\nenter amount of day %d\n",i+1); // so we are entering so here 0+1 we will start from 1 not from 0
scanf("%d",&income[i]); // u are entering amount in array so starts from 0 here in this line not income[1] here its income[0] in that place it is storing first days income
total+=income[i];
}

avgincome=(float)total/(float)howmanydays;//float because it is in int type we are changing them to float type as we learned before known as type converting


printf("\nyour avg income is: %.2f\n",avgincome); */

                //new program






























        return 0;
}
