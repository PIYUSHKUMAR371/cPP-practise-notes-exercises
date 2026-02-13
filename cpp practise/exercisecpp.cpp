

//exercise1 calculator in cpp

// #include<iostream>

// int main(){

//     char op;
//     double num1;
//     double num2;
//     double result;

//     std::cout<<"CALCULATOR";

//     std::cout<<"eneter either(+ % / -)";
//     std::cin>>op;

//     std::cout<<"enter #1";
//     std::cin>>num1;

//     std::cout<<"enter #2";
//     std::cin>>num2;

//     switch(op){
//         case'+':
//         result = num1 + num2;
//         std::cout<<result;

//         case'-':
//         result= num1 -num2;
//         std::cout<<"result"<<result<<"\n";

//         case'*':
//         result = num1*num2;
//         std::cout<<result;

//         case'/':
//         result=num1/num2;
//         std::cout<<result;

//         default:
//         std::cout<<"that was not the valid response\n";


//     }

//     return 0;
// }



//exercise2 In this program we are going to calculate the hypotenuse of a right triangle


// #include<iostream>
// #include<cmath>


// int main(){
//     double a;
//     double b;
//     double c;

//     std::cout<<"enter side A:";
//     std::cin>>a;

//     std::cout<<"enter side b:";
//     std::cin>>b;

//     // a = pow(a,2);
//     // b = pow(b,2);
//     // c = sqrt(a+b);

//     c = sqrt(pow(a,2)+pow(b,2));

//     std::cout<<"sideC:"<<c;

//     return 0;
// }



// //exercide3 temperature conversiob program
// #include<iostream>

// int main(){
//     double temp;
//     char unit;

//     std::cout<<"F=farenheit\n";
//     std::cout<<"c is celsius\n";
//     std::cout<<"choose";
//     std::cin>>unit;

//     if(unit =='F'|| unit =='f'){  // make sure to use ('') since it is giving error to use(" ")
//         std::cout<<"enter the temp ";
//         std::cin>>temp;

//         temp=(1.8*temp)+32.0;
//         std::cout<<"temp is"<<temp<<"F\n";
//     }
//     else if(unit == 'c' || unit == 'C'){
//         std::cout<<"enetr the temp in fahrenheit";
//         std::cin>>temp;

//         temp =(temp -32)/1.8;
//         std::cout <<"temp is "<<temp<<"c\n";
//     }
//     else{
//         std::cout<<"not valid";
//     }
//     return 0;
// }



//exercise4 number guessing game
// #include<iostream>
// #include<ctime>
// int main(){

//     int num;
//     int guess;
//     int tries = 0; // make sure to put it to zero since our computer will give it some random numbers

//     srand(time(NULL));
//     num = (rand()%100+1);

//     std::cout<<"number guessing game";

//     do{
//         std::cout<<"enetr the guess beytween 1-100";
//         std::cin>>guess;
//         tries++;
//         if(guess>num){
//              std::cout<<"too high";
//         }

//         else if(guess <num){
//             std::cout<<"too low";
//         }
//         else{
//             std::cout<<"correct "<<tries<<num;
//         }

//     }while(guess !=num);

//     return 0;
// }



//exercise5 banking program
// #include<iostream>
// #include<iomanip>//there is some function in here to put some precision in floating point numbers

// void showbalance(double balance);
// double deposit();
// double withdraw(double balance);

// int main(){

//     double balance = 0;
//     int choice = 0;

//     do{
//     std::cout <<"***************\n";
//     std::cout <<"enter your choice:\n";    
//     std::cout <<"1: show balance\n";
//     std::cout <<"2: deposite money\n";
//     std::cout <<"3:withdraw money\n";
//     std::cout <<"4:exit\n";
//     std::cin>> choice;

//     std::cin.clear();//this function will rest any air-flaskes, basically it will clear the input buffer

//     switch(choice){
//         case 1: showbalance(balance);
//         break;
//         case 2:balance +=deposit();
//         showbalance(balance);
//         break;
//         case 3:balance -= withdraw(balance);
//         showbalance(balance);
//         break;
//         case 4:std::cout<<"thanks for visiting \n";
//         break;
//         default:std::cout<<"invalid choice\n";
//     }
// }
//     while(choice !=4);

//     return 0;
// }
// void showbalance(double balance){
//     std::cout<<"your balance is $"<<std::setprecision(2)<<std::fixed<<balance<<"\n"; // this will precise out float to upto 2 decimal places
// }
// double deposit(){

//     double amount = 0;
//     std::cout<<"enetr the amount you want to be deppsoited \n";
//     std::cin>>amount;

//     if(amount>0){
//     return amount;
//     }
//     else{
//         std::cout<<"that;s is not a valid input";
//     }
// }
// double withdraw(double balance){

//     double amount =0;
//     std::cout<<"enter the amount to be withdrawn";
//     std::cin>>amount;

//     if(amount>0){
//         std::cout<<"insufficient fund";
//         return 0;
//     }
//     return amount;
// }



//exercise6 rock_paper_scissor game
// #include<iostream>
// #include<ctime>

// char getuserchoice();
// char getcomputerchoice();
// void showchoice(char choice);
// void choosewinner(char player, char computer);

// int main(){

//     char player;
//     char computer;

//     player =getuserchoice();
//     std::cout<<"your choice";
//     showchoice(player);

//     computer = getcomputerchoice();
//     std::cout<<"computer;choice";
//     showchoice(computer);

//     choosewinner(player,computer);
    
//     return 0;
// }
// char getuserchoice(){
//     char player;
//     std::cout<<"rock_paper_scissor_game\n";
//     std::cout<<"#########################\n";
//     do{
//     std::cout<<"choose one of the following\n";
//     std::cout<<"r, for rock\n";
//     std::cout<<"p, for paper\n";
//     std::cout<<"s, for scissor\n";
//     std::cin>>player;
//     }
//     while(player !='r'&&player!='p'&&player!='s');
//     return player;   //make sure to return player
// }
// char getcomputerchoice(){
//     srand(time(0)); //seed the random number generator only once

//     int rand_num =rand()%3;

//     switch(rand_num){
//         case 0:return'r';
//         case 1:return'p';
//         case 2:return's';
//     }
// }
// void showchoice(char choice){

//     switch(choice){
//     case 'r': std::cout<<"rock\n";
//     break;
//     case 'p':std::cout<<"paper\n";
//     break;
//     case 's':std::cout<<"scissor\n";
//     break;
// }
    
// }
// void choosewinner(char player, char computer){
//     std::cout<<"the winner is";
//     if(player ==computer){
//         std::cout<<"it is a tie\n";
//     }else if(
//         (player =='r'&&computer =='s')||
//         (player =='p'&&computer =='r')||
//         (player =='s'&&computer =='p')
//     ){
//         std::cout<<'you win\n';
//     }else{
//         std::cout<<'you lose';
//     }
// }//the computer choice will be chosen randomly



//quiz game
// #include<iostream>

// int main(){

//     std::string questions[]={"1. what year was c++ created?;",
//                              "2. who invented c++?",
//                              "3. what is the predecessor of c++?",
//                              "4. is the earth flat"};

//     std::string options[][4]={{"A. 1969","B. 1975","C. 1985","D. 1989"},
//                              {"A. Guido van Rossum","B. Bjarne Stroustrup","C. John Carmack","D. mark zucker"},
//                              {"A. C","B. C+","C. C--","D. B++"},
//                              {"A. yes","B. no","C. Sometimes","D. what is earth"}} ; 
                             
//     char answerkey[]={'C','B','A','B'};
    
//     int size = sizeof(questions)/sizeof(questions[0]);
//     char guess;
//     int score=0;

//     for(int i=0;i<size;i++){
//         std::cout<<"***********************************"<<'\n';
//         std::cout<<questions[i]<<'\n';
//         std::cout<<"***********************************"<<'\n';

//         for(int j=0;j<sizeof(options[i])/sizeof(options[i][0]);j++){
//             std::cout<<options[i][j]<<'\n';
//         }
//         std::cin>>guess;
//         guess = toupper(guess);

//         if(guess == answerkey[i]){
//             std::cout<<"correct\n";
//             score++;
//         }else{
//             std::cout<<"wrong\n";
//             std::cout<<"answer"<<answerkey[i]<<"\n";
//         }
//     }
//     std::cout<<"correct quesses"<<score<<"\n";
//     std::cout<<"no of questions"<<size<<"\n";
//     std::cout<<"score"<<(score/(double)size)*100<<"\n";

//     return 0;
// }



//credit card validator program
// #include<iostream>

// int getdigits(const int number);
// int sumOddDigits( const std::string cardnumber);
// int sumEvenDigits( const std::string cardnumber);

// int main(){
//     std::string cardnumber;
//     int result = 0;

//     std::cout<<"enter the card number";
//     std::cin>>cardnumber;

//     result= sumEvenDigits( cardnumber)+sumOddDigits(cardnumber);

//     if(result % 10 == 0){
//         std::cout<<cardnumber<<"is valid";
//     }else{
//         std::cout<<"the card number is not valid";
//     }

//     return 0;
// }
// int getdigits(const int number){
//     return number % 10 +(number / 10%10 );//this will split the two numbers
// }
// int sumOddDigits( const std::string cardnumber){
//         int sum = 0;//we can treat string as an array of characters
    
//     for(int i = cardnumber.size()-1;i>=0;i-=2){ //this is what acually allows us to choose the number at odd places from left to right
//         sum +=cardnumber[i] -'0'; //we subtracted with '0'OR'48 beacuse we are currently working with a string of characters,means we are dealing with the ASCII table and we need to subtract with '0' to get numbers from 0 to 9
//     }
//     return sum;
// }
// int sumEvenDigits( const std::string cardnumber){

//     int sum = 0;//we can treat string as an array of characters

//     for(int i = cardnumber.size()-2;i>=0;i-=2){ //this is what acually allows us to choose the number at even places from left to right
//         int doubledDigit =(cardnumber[i] -'0')*2;//we will fisrt double the number and in the next line separate them both
//         sum += getdigits(doubledDigit); //we subtracted with '0'OR'48 beacuse we are currently working with a string of characters,means we are dealing with the ASCII table and we need to subtract with '0' to get numbers from 0 to 9
//     }
//     return sum;
// }



//TICK-TAK-TOE GAME
#include<iostream>
#include<ctime>

void drawboard(char *spaces);
void playermove(char *spaces,char player);
void computermove(char *spaces,char computer);
void checkwinner(char *spaces,char player,char computer);
void checktie(char *spaces);

int main(){

    char spaces[9]={' ',' ',' ',' ',' ',' ',' ',' ',' ',};
    char player ='X';
    char computer = 'O';
    bool running = true;

    drawboard(spaces);

    return 0;
}

void drawboard(char *spaces){
    std::cout<<"     |     |     |"<<"\n";
    std::cout<<"     |     |     |"<<"\n";
}
void playermove(char *spaces,char player);
void computermove(char *spaces,char computer);
void checkwinner(char *spaces,char player,char computer);
void checktie(char *spaces);
