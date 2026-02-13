// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"hello";
//     return 0;
// } 


// introduction to variables
// #include<iostream>

// int main(){

//     //integer (whole number)
//     int age = 21;
//     int year = 2023;
//     int days = 7;

//     //double (number including decimal)
//     double price =10.99;
//     double gpa=2.5;
//     double temperature = 25.1;

//     //single character
//     char grade = 'A';
//     char initial ='c';
//     char dollarsign ='$';

//     //boolean (true or false)
//     bool student = false;
//     bool power = true;
//     bool forsale = true;

//     //string(objects that represents a sequence of text)
//     std::string name ="bro";
//     std::string day ="friday";
//     std::string food ="pizza";
//     std::string address ="123 fake st.";

//     std::cout <<"hello"<<name<<std::endl;
//     std::cout<<"you are"<<age<<"years old"<<'\n';

//      return 0;
// }




// #include<iostream>

// int main(){
//     //the const keyword specifies that a variable's value is constant
//     // tells the compiler to prevent anything from modifying it 
//     //(read-only)

//     //like anyone can change any value like pi such that you won"t know but t keep an value fixed you use constant 

//     const double PI =3.14159;
//     //if someone really does change the value of your PI now the program will show error
//     const int LIGHT-SPEED = 299792458;
//     const int HEIGHT =172394;
//     double radius = 10;
//     double circumference = 2* pi*radius;

//     std::cout<<circumference<<"cm";


//     return 0;
// }





// #include<iostream>
// //these are two different namespace

// namespace first{
//     int x = 1;
// }
// namespace second{
//     int x = 2;
// }


// int main(){

//     /* Namespace =   provides a solution for preventing name conflicts 
//                      in large projects . Each entity needs a unique name.
//                      A namespace allows for identically named entities 
//                      as long as the namespace are different.*/
//         int x=0;
        
//         std::cout<< x; //in here x would be zero
//         std::cout<< first::x;//in here it would the value of x in namespace first
//         std::cout<< second::x;//in here it would the value of x in namespace second

//                      return 0;
// }


// /*just to let you know you can not use two int main() function
// within a single c++ program regardless of whether you include 
// <iostream> or any other header*/


// // int main (){
// //     using namespace first;
// //     std::cout<< x;//this will choose value given to namespace first
// //     std::cout<< second::x;//this will chose namesspace froms second
// // }

// int main(){

//     /*we do this to not repiditly use std over and over again */
//     using namespace std;
//     using std::cout; //with this you can just write cout
//     using std::string;  //with this you can just write string
// }





// #include<iostream>
// #include<vector>
//                   /*by including<vector>,you gain access to the std::vector class, which is a dynamic array container. 
//                   This allows you to declare and use std::vector objects in your program to store collections of elements
//                   of the same data type*/

// // typedef std::vector<std::pair<std::string,int>> pairlist_t;  //an alias
// // typedef std::string text_t;
// // typedef int number_t;
// using text_t =std::string;  //as observed just an another way rather than typedef
// using number_t=int;

// int main(){
//     // typedef = reserved keyword used to create an additional name (alias) for another data type.
//     //           New identifier for an existing type
//     //           Helps with readability and reduces types
//     text_t firstname ="bro";
//     number_t age =21;
//     std::cout <<firstname<<"\n";
//     std::cout <<age<<"\n";
//     return 0;
// }





// #include<iostream>

// int main(){
//     //arthimetic operators = return the result of aspecific arthimetic operation(+ - * /)
//     int students =27;        //double students =28;  //we use this to retain that decimal portion
//     //students+=1;   
//     //students =students+1;
//     //students++;

//     // students =students-1;
//     // students-=2; 

//     // students=students*2;
//     // students*=2;

//     // students =students/3;   //any decimal portion is lost , it is truncated 
//     // students/=3;

//     int remainder =students % 2; // %=remainder

//     std::cout<<remainder;
//     return 0;
// }



// #include<iostream>
// int main(){
//     //parenthesis                    //these arthimetic operators have soem order of presidence
//     //multiplication &division
//     //addition&subtraction
//     int students = 6-(5+4)*3/2;
//     std::cout<<students;
//     return 0;
// }




// #include<iostream>
// int main(){

//     // type conversion =conversion a value of one data type to another 
//     //                 implicit = automatic
//     //                 explicit = precede value with new data type (int)

//     // int x=3.14;  // you will only get 3 in output //implicit
//     // double x=3.14; // we will retain that decimal portion
//     // double x= (int) 3.14; //explicit // () these are called an set of parathesis and the we eneter the data type in them , we just turn 3.14 into int first and then double
//     // char x=100; // the equivilant of char 100 is character 'd' using the ASCii table //implicit

//     //std::cout<<(char)100;// the number 100 is explicitly cast to an character (ASCII value of 100 is 'd')

//     int correct =8;
//     int questions = 10;
//     //double score =correct/questions*100; //we wiil have 0% beacuse question is of the int datatype
//     double score =correct/(double)questions*100;

//     std::cout<< score<< "%";

//     return 0;
// } 




// #include<iostream> /* in here we run the code in terminal to write , sice we can not in out put , mind the few steps , there is a box on upper rigth corner that you would have to look out for*/
// //cout<<(insertion operator)
// //cin>>(extraction operator)

// int main(){
//     std::string name;
//     int age;

//     std::cout<<"what is your age?";
//     std:: cin>> age;

//     std::cout <<"what is your full name?"; // it does not real string with spaces, when we apply this std::cin>> function stop seems to be working at all 
//     std::getline(std::cin>>std::ws,name); // this helps us to wrte our whole full name in the answer and actually get it in the result 
//                                           // the function std.ws will eliminate any newline character or any white spaces
//                                           //we use std::ws beacuse when we accept a user value in cin , and when we get to getline function it accepts the new line character that still in the the buffer og the previous cin code

//      //std::cout<<"what is your age?"<<"\n"; // this line made me reply in the another line
   

//     std::cout<<"hello"<<name<<"\n";
//     std::cout<<"you are"<<age<<"years old"<<"\n";
//     return 0;
// }


// #include<iostream>
// #include<cmath>

// int main(){
//     double x=3;
//     double y = 4;
//     double z;

//     //z=std::min(x,y); //  chooses the min number between x and y
//     //z=std::max(x,y); // chooses the max number between x and y
//     // z=pow(2,3);
//     // z=sqrt(9);
//     // z=abs(-3); // how fard away it is from zero ,(if you write a negative number in their , it will give the positive version(total opposite) of that number)
//     // z=round(x);
//     // z=ceil(x); // rounding up
//     // z=floor(x);//rounding down

//     std::cout<<z;
//     return 0;
// }



// #include<iostream>

// int main(){
//     //if staement = do somethig if a condition is true.
//                     //if not , then don't do it
//         int age;
//         std::cout<<"enter your age";
//         std::cin>>age;
//         if(age>=18){                           // if you want to compare equaks use ==, do not use = then you are assigning the value
//             std::cout<<"wlecome to the site";  //order of if and else if, does matter 
//         }
//         else if(age<0){
//             std::cout<<"you are not born yet!";
//         }
//         else if(age>=100){
//             std::cout<<"you are too old to enter this side";
//         }
//         else{
//             std::cout<<"you are not old enought to enter!";
//         }
//         return 0;
// } 




// #include<iostream>

// int main(){
//     //switch = alternative to using many "else if" statements
//     //         compare one value against matching cases

//     int month;
//     std::cout<<"enter the month (1-12);";
//     std::cin>>month;

//     switch(month){
//         case1:
//         std::cout<<"it is january";
//         break;
//         case2:
//         std::cout<<"it is feb";
//         break;

//         case3:
//         std::cout<<"it is march";
//         break;

//         case4:
//         std::cout<<"it is apr";
//         break;

//         case5:
//         std::cout<<"it is may";
//         break;

//         case6:
//         std::cout<<"it is june";
//         break;

//         case7:
//         std::cout<<"it is july";
//         break;

//         case8:
//         std::cout<<"it is august";
//         break;

//         case9:
//         std::cout<<"it is sept";
//         break;

//         case10:
//         std::cout<<"it is oct";
//         break;

//         case11:
//         std::cout<<"it is nov";
//         break;

//         case12:
//         std::cout<<"it is dec";
//         break;
//         default:
//         std::cout<<"please enetr only number 1-12";


//     }
//     return 0;
// }


// #include<iostream>

// int main(){
//     char grade;
//     std::cout<<"what letter grade?:";
//     std::cin>>grade;

//     switch(grade){
//         case'A':
//         std::cout<<"youd did great!";
//         break;

//         case'B':
//         std::cout<<"you did good";
//         break;

//         case'C':
//         std::cout<<"you did ok";
//         break;

//         case'D':
//         std::cout<<"you did not do good";

//         case'F':
//         std::cout<<"YOU FAILED";
//         break;
//         default :
//         std::cout<<"pls only enter an leter in letter grade (A -F)";
//     }
// }



// #include<iostream>

// int main(){

        // ternary operator ?:= replacement to an if/else statement
        // condition ?expression1: expression2;


        // int grade =75;

        // if(grade >= 60){
        //     std::cout<<"you pass";
        // }
        // else{
        //     std::cout<<"you failed";
        // }
        // return 0;

        // int grade = 75;
        // grade>=60?std::cout<<"you pass!" :std::cout<<"you fail";
        //return 0

        // int number = 9;
        // number%2==1?std::cout<<"ODD" : std::cout<<"even"; //you do not even need to write ==1, sice number 1 is mean True
        // return 0;

        // bool hungry = true;
        // hungry? std::cout<<"you are hungry":std::cout<<"you are full";
    //     std::cout<<hungry?"you are hungry":"you are full"; //you may use this line as well , it means the same as before
    //     return 0;
    // }



    // //logical operators
    // #include<iostream>

    // int main(){

    //         // && = check if two conditions are true
    //         // || = check if itlest one of the two conditiosn is true
    //         // ! = reverses the logical state of its operand

    //         int temp;
    //         bool sunny=true;

    //         std::cout<<"enter the temp:";
    //         std::cin>>temp;

    //         if(temp>0 && temp <30) {     //if(temp<=0|| temp>=30)
    //             std::cout<<"the temp is good";
    //         }
    //         else{
    //             std::cout<<"the temp is bad \n";
    //         }
    //         if(!sunny){           // (!sunny) mean sunny is false,(sunny)mean sunny=true, no need to add for boolean variable
    //             std::cout<<"this is really sunny";
    //         }
    //         else{
    //             std::cout<<"this is not sunny";
    //         }
    //         return 0;
    // }



    //useful string methods in c++ //if you want to know more than this head to string class on the c++.com
    // #include<iostream>

    // int main(){
    //     std::string name;

    //     std::cout<<"enetr your name";
    //     std::getline(std::cin,name);

        // if(name.length()>12){    //n C++, to determine the length of an object of type std::string, the length() function is used. This function is a member of the std::string class and returns the number of characters in the string. It is important to note that spaces within the string are also counted towards the total length.
        //                          //Alternatively, the size() function can be used interchangeably with length(), as size() is an alias for length() within the std::string class. Both functions provide the same functionality and return the same value.  
        //     std::cout<<"not valid";                                            
        // }
        // else{
        //     std::cout<<"welcome"<<name;
        // }
        // return 0;


        // if(name.empty()){  // 'empty' function is to check if an function is empty
        //     std::cout<<"you didn't enter your name";
        // }
        // else{
        //     std::cout<<"hello"<<name;
        // }
        // return 0;


        // name.clear(); // this function clears all the string that was put in 
        // std::cout<<"hello"<<name; 

        // return 0;


        // name.append("@gamil.com");
        // std::cout<<"your username is now"<<name;
        // return 0;


        // std::cout<<name.at(0);
        // return 0;


        // name.insert(0,"a");
        // std::cout<<name;
        // return 0;


        // name.erase(0,3); //erase from 0 to 3
        // std::cout<<name;
        // return 0;// std::cout<<name.find(' ');
    // }



    //while loops
    // #include<iostream>

    // int main(){
    //     std::string name;

    //     // while(name.empty()){
    //     //     std::cout<<"enetr your ";
    //     //     std::getline(std::cin,name);
    //     //     std::cout<<"hello "<<name;
    //     // }
    //     // return 0;

    //     // while(1==1){
    //     //     std::cout<<"help ia m stucl in infinte loop";
    //     // }
    //     // return 0;
    // }


// #include<iostream>

// int main(){

    //do-while loop = do some block of code first THEN repeat again if condition is true

    // int num;

    //     std::cout<<"enetr a positive number"; 
    //     std::cin>>num;

    // while(num<0){                             //since we declared an interger identifier bu have not declared an value 
    //                                           //it is just defaulting to zero and zer is not less than zero so we are just stoppin the loop with output zero
    //     std::cout<<"enetr a positive number"; 
    //     std::cin>>num;
    // }

//     int num;
//     do{
//          std::cout<<"enetr a positive number"; 
//          std::cin>>num;
//     }
//     while(num<0);

//     std::cout<<"this# is"<<num;

//     return 0;
// }



//for loop = the loop to exceute a block of cod ean specified amount of times
// #include<iostream>

// int main(){

//     for(int i=1;i<=10;i+=2 ){
//         std::cout<<i<<"\n";
//     }
//         std::cout<<"happy new year";
//     return 0;
// }



// #include<iostream>

// int main(){

//     //break = break out of loop
//     //coutinue = skip current iteration

//     for(int i=1;i<=20;i++){
//         if(i==13){
//             continue; // break;
//         }
//         std::cout<<i<<"\n";
//     }
//     return 0;
// }



// #include<iostream>
// //nested loops=loop inside a loop

// int main(){

//     int rows;
//     int columns;
//     int symbol;

//     std::cout<<"how many rows";
//     std::cin>>rows;

//     std::cout<<"how many columna";
//     std::cin>>columns;

//     std::cout<<"how many symbol :";
//     std::cin>>symbol;

//     for(int i=1;i<=rows;i++){
//         for(int j=1;j<=columns;j++){
//             std::cout<<symbol;
//         }
//         std::cout<<"\n" ; //as every tiem exists the next result will be in new line
//     }
//     return 0;
// }


// #include<iostream>
// #include<ctime> //since we need to be working with the time function

// int main(){

//        //pseudo-random = NOT truly random(but close)

//        srand(time(NULL)); //srand(time(NULL)) is used to initialize the pseudo-random number generator (PRNG) with a seed value that changes each time the program runs. This is crucial for obtaining a different sequence of "random" numbers every time the program is executed.

//        int num1 = (rand()%6)+1;  //three 6 sides dices
//        int num2 = (rand()%6)+1;
//        int num3 = (rand()%6)+1;

//        //int num = (rand()%20)+1;//D-20
//        //int num = (rand()%6)+1;//this code is for dice 1-6
//        //int num =rand(); //this will gibve an random number between 0 and 32767


//        std::cout<<num1<<"\n";
//        std::cout<<num2<<"\n";
//        std::cout<<num3<<"\n";

//     return 0;

// }

// #include<iostream>
// #include<ctime>

// int main(){

//     srand(time(0));//Both NULL and 0 are commonly used to represent a null pointer in C++
//     int randnum=(rand()%5+1);

//     switch(randnum){
        
//         case 1:std::cout<<"you win a bumper sticker\n";
//         break;
//         case 2:std::cout<<"you win a t-shirt \n";
//         break;
//         case 3:std::cout<<"you win a bum\n";
//          break;
//         case 4:std::cout<<"you win a bump\n";
//          break;
//         case 5:std::cout<<"you win a trump\n";
//          break;
//     }

//     return 0;
// }



// #include<iostream>

// void happybirthday(std::string name,int age); //without this the function below the main code would not be decalred

// int main(){

//     //function = a block of reuseable code

//     std::string name = "bro";
//     int age = 21;

//     happybirthday(name,age); //passing the variables
//     return 0;

// }

// void happybirthday(std::string name,int age){  //but we need an parametrs like this to pass the variables and you can even add other things except name
//     std::cout<<"happy birthday to you"<< name<<"\n";
//        std::cout<<"happy birthday to you\n";
//           std::cout<<"happy birthday dear you\n";
//              std::cout<<"happy birthday to you"<<age<<"\n";
// }



// #include<iostream>

// double square(double length);
// double volume(double length);

// int main(){
//     //return = return a value back to the spot where you called the encompassing function

//     double length = 5.0;
//     double area = square(length); //square function
//     double  vol = volume(length);

//     std::cout<<"area"<<area<<"cm\n";
//     std::cout<<"volume is "<<vol<<"\n";

//     return 0;
// }
// double square(double length){ // we changed it to double to match the datatype inside an variable
//     // double result = length *length;
//     return  length*length; //since we can use only one line code we do not need "return result"
// }
// double volume(double length){ // we changed it to double to match the datatype inside an variable
    
//     return  length*length*length;

// return 0;
// }



// #include<iostream>
// #include<string>

// std::string concatstrings(std::string string1,std::string string2); //concatenate process of combining two or more strings

// int main(){

//     std::string firstname = "tom";
//     std::string lastname = "code";
//     std::string fullname = concatstrings( firstname, lastname);

//     std::cout<<"hello "<< fullname;

//     return 0;
// }
// std::string concatstrings(std::string string1,std::string string2){
// return string1 +" "+string2;
// }




//overloaded functions
// #include<iostream>

// void bake();
// void bake(std::string topping1,std::string topping2); //it is valid to have function with same name but you need different set of parameters
//                                  //a function name+its parametrs is known as function signature

// int main(){

//     bake("peperoni","mushcrooms");

//     return 0;
// }

// void bake(){
//     std::cout<<"here is your pizza\n";
// }
// void bake(std::string topping1){
//     std::cout<<"here is your"<<topping1<<"pizza\n";
// }
// void bake(std::string topping1, std::string topping2){
//     std::cout<<"here is your"<<topping1<<"and"<< topping2 <<"pizza\n";
// }



// #include<iostream>

// int mynum=3;//the functions will use the local variable first before resorting to global variable
               //try the use the global variable as less as possible since it pollutes the golbal namespace and are less secure

// void printnum();

// int main(){

//     //local variables = declared inside a function or block{}
//     //Global variables = declared outside of all functions

//     int mynum = 1; //local variable to mian function
//     printnum();
//     std::cout<<::mynum;//global function will also be available in main function
//                        //::mynum helps to get the global function , it is called scope resolution operator
//     return 0;
// }
// void printnum(){
//     int mynum = 2;//we have two versions of same variable and it is fine since they are in different scopes,output will be 2 by the way
//     std::cout<<::mynum;
// }



// #include<iostream>

// int main(){

//     // array = a data structure that can hold multiple value
//     //         values are accessed by an idex number
//     //         "kind liek a variable that holds multiple values"

//      std::string car[3]; //={"corvet","mustang","camry"}; 
//                          //they can only contain the values of one datatype
//                          //if you want to assign values in an array later you need to set an array size

//     car[0]="lalaland";  //changing the values at a particular array index
//     car[1]="tommy";
//     car[2]="bobby";
                        
//     std::cout<<car[0]<<"\n";
//     std::cout<<car[1]<<"\n"; 
//     std::cout<<car[2]<<"\n";  //we need to add the idex number , becuse if we did not the output would be address number
//     return 0;
// }

// #include<iostream>
// int main(){

//     double prices[] ={5.00,7.50,9.99,15.00}; // you can do this or you can set a size and assign values later

//     std::cout<<prices[0]<<"\n";
//     std::cout<<prices[1]<<"\n";
//     std::cout<<prices[2]<<"\n";
//     std::cout<<prices[3]<<"\n";
//     return 0;
// }



// #include<iostream>

// int main(){
//     // sizeof() = determines the size in bytes of a
//     //            variables,data types,class,objects,etc.

//     std::string name ="bro"; //24because string is a reference datatype
//     double gpa =2.5;//8bytes
//     char grade ='r';//1bytes
//     bool student =true;//1bytes
//     char grades[]={'a','b','c','d','e'};//5bytes
//     std::string students[]={"a","b","c","d","e","f"};

//     std::cout<<sizeof(students)/sizeof(std::string)<<"elements\n";

//     // std::cout<<sizeof(grades)/sizeof(char)<<"elements\n";//to check the no of elements in array
//     //    // OR sizeof(double) //for string it just gives us the size of teh strin gwhich is for m is 24bytes it does not change even if we increase the text
//     return 0;
// }



//iterate over the elements of an array
// #include<iostream>
// int main(){

// //     std::string students[]={"sp","ps","tp"};

// //     // std::cout<<students[0]<<"\n";
// //     // std::cout<<students[1]<<"\n";
// //     // std::cout<<students[2]<<"\n";

// //     for(int i=0;i<sizeof(students)/sizeof(std::string);i++){  //so that we do not have to update the i, incase we change the no of elements in cpp
// //         std::cout<<students[i]<<"\n";
// //     }

// //     return 0;


//        char grade[] ={'a','b','c','f'};
//        for(int i=0;i<sizeof(grade)/sizeof(char);i++){
//         std::cout<<grade[i]<<"\n";
//  }
//  return 0;
// }



// #include<iostream>

// int main(){

//     // forreach loop =loop that eases the traversal over an
//     //                iterable data set

//     // std::string students[] ={"spong","patrick","bateman"};

//     // // for(int i=0;i<sizeof(students)/sizeof(std::string);i++){
//     // //     std::cout<<students[i]<<"\n";
//     // // }

   

//     // for(std::string student:students){  //forreach loop is less flexible than for_loop , as in for loop we can skip , go forward, backwards,etc. but in forreach loop we strt from the start and reach the end
//     //    std::cout<<student<<"\n";
//     // }
//     // return 0;

//       int grades[]={ 23,131,123,13,324,5435,765};
//       for(int grades:grades){  //forreach loop is less flexible than for_loop , as in for_loop we can skip , go forward, backwards,etc. but in forreach loop we strt from the start and reach the end
//         std::cout<<grades<<"\n";
// }
// return 0;
// }



//passing array to an function
// #include<iostream>

// double gettotal(double prices[],int size);

// int main(){

//     double price[]={49,34,34.99,65,87,45,67};
//     int size=sizeof(price)/sizeof(price[0]);
//     double total =gettotal(price,size); //you only need to pass the array name and don't need ana set of [] to do so

//     std::cout<<"$"<<total;
//     return 0;
// }
// double gettotal(double prices[],int size){ //when we pass an array to an function it decays as ann pointer
//     double total= 0;

//     for(int i=0;i<size;i++){
//         total+=prices[i];// total = total + prices[i];
//     }
//     return total ;
// }



//search an array for an element in int
// #include<iostream>

// int searcharray(int array[],int size,int element);

// int main(){

//     int numbers[]={34,234,324,24,35,74,};
//     int size=sizeof(numbers)/sizeof(numbers[0]);
//     int index;
//     int mynum;
//     std::cout<<"enetr element to search for"<<'\n';
//     std::cin>>mynum;

//     index =searcharray(numbers,size,mynum);

//     if(index !=-1){
//         std::cout<<mynum<<"is at index"<<index;
//     }else{
//         std::cout<<"element not present\n";
//     }
//     return 0;
// }
// int searcharray(int array[],int size,int element){

//     for(int i=0;i<size;i++){
//         if(array[i]==element){
//             return i;
//         }
//     }
//     return -1;//-1 serves as a sentinal value, means whatever you wanted to find wasn't found

// }

//sreaching for an element in string
// #include<iostream>
// #include<string>

// int searcharray(std::string array[],int size,std::string element);

// int main(){

//     std::string numbers[]={"wefsf","piyush","brocode"};
//     int size=sizeof(numbers)/sizeof(numbers[0]);
//     int index;
//     std::string mynum;
//     std::cout<<"enetr element to search for"<<'\n';
//     std::getline(std::cin,mynum);

//     index =searcharray(numbers,size,mynum);

//     if(index !=-1){
//         std::cout<<mynum<<"is at index"<<index;
//     }else{
//         std::cout<<"element not present\n";
//     }
//     return 0;
// }
// int searcharray(std::string array[],int size,std::string element){

//     for(int i=0;i<size;i++){
//         if(array[i]==element){
//             return i;
//         }
//     }
//     return -1;//-1 serves as a sentinal value, means whatever you wanted to find wasn't found

// }



//sort an array:-bubble sort
// #include<iostream>

// void sort(int array[],int size);

// int main(){

//     int array[]={10,1,9,5,6,8,7,4,3,2};
//     int size = sizeof(array)/sizeof(array[0]);

//     sort(array,size);

//     for(int element :array){
//         std::cout<<element<<" ";
//     }
//     return 0;
// }
// void sort(int array[],int size){
//     int temp;
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-i-1;j++){
//             if(array[j]>array[j+1]){ //ascending and descending order controlling line
//                 temp=array[j];
//                 array[j]=array[j+1];
//                 array[j+1]=temp;
//             }
//         }
//     }
// }



// #include<iostream>

// int main(){
//     // fill() = fills a range of elements with a specified value
//     //          fill(begin,end,value)

//     const int size =99;
//     std::string foods[size];//={"pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza","pizza",};

//     fill(foods,foods+(size/3),"pizza");
//     fill(foods+(size/3),foods+(size/3)*2,"apple");
//     fill(foods+(size/3)*2,foods+size,"guava");

//     for(std::string food:foods){
//         std::cout<<food<<'\n';
//     }
//     return 0;
// }



//fill an array using user input
// #include<iostream>

// int main(){

//     std::string foods[5];
//     int size = sizeof(foods)/sizeof(foods[0]);
//     std::string temp;

//     for(int i=0;i<size;i++){
//         std::cout<<"enetr a food you like q to quit"<<i<<":\n";
//         std::getline(std::cin,temp);
//         if(temp=="q"){
//             break;
//         }else{
//             foods[i]=temp;
            
//         }
//     }

//     std::cout<<"you like the following food \n";

//     for(int i=0;!foods[i].empty();i++){
//         std::cout<<foods[i]<<'\n';
//     }
//     return 0;
// }



//mulitidimentional arrays(2-Ds arrays)
// #include<iostream>

// int main(){

//     std::string cars[][3] = {{"sfsfs","dfsfs","fafd"},
//                               {"wfFW","SFSDFZ","gaegdf"},
//                              {"Wefafas","dsffs","sdfsf"}};
    
//     // std::cout<< cars[0][0]<<" ";
//     // std::cout<< cars[0][1]<<" ";   
    
//     int rows =sizeof(cars)/sizeof(cars[0]);
//     int column =sizeof(cars[0])/sizeof(cars[0][0]);

//     for(int i=0;i<rows;i++){
//         // std::cout<<cars[i]<<"\n"; //this will give the three addresses on each of the three array inside
//         for(int j=0;j<column;j++){
//             std::cout<<cars[i][j]<<" ";
//         }
//         std::cout<<'\n';
//     }
//     return 0;
// }



// #include<iostream>

// int main(){

//     //memory address = a location in memory where data is stored
//     //a memory address can accessed with &(address-of operator)

//     std::string name ="bro";
//     int age = 21;
//     bool student =true ;

//     std::cout<<&name<<"\n"; //everytime we run this programt hat series of number is likely to change
//     std::cout<<&age<<"\n"; //different datatype take more or less space than the other datatypes
//     std::cout<<&student<<"\n"; //you may also check by converting these haxdecimal to decimal
//     return 0;
// }



//pass by value and pass by reference
// #include<iostream>
// void swap(std::string &x,std::string &y);

// int main(){

//     std::string x ="kool-aid";
//     std::string y ="water";
//     std::string temp ;

//     // temp =x;
//     // x=y;
//     // y=temp;

//     swap(x,y);

//     std::cout<<"x"<<x<<"\n";
//     std::cout<<"y"<<y<<"\n";
//     return 0;
// }
// void swap(std::string &x,std::string &y){//passing by reference and creating change in the original variables
//     // void swap(std::string x,std::string y){ //passing by value//this does not work since we are coping the original values,and getting two copies of varibale x,y
//     std::string temp;
//     temp =x;
//     x=y;
//     y=temp;
// }



// #include<iostream>
// void printinfo(const std::string name,const int age);
// int main(){

//     // const parameter = paramater that is effectively read-only
//     //                   code is more secure & conveys intent for references and pointers

//     std::string name="bro";
//     int age = 21;

//     printinfo(name,age);

//     return 0;
// }
// void printinfo(const std::string name,const int age){ //to make these parameters read only we add 'const'
//     name=" "; //these are const parameters
//     age=0;  //these two won't work since we have put 'const' and convert them into read-only variable
//     std::cout<<name<<'\n';
//     std::cout<<age<<'\n';
// }



// #include<iostream>
// int main(){

//     // pointers = varibales that stores a memory address of another variable sometimes it's easier to work with an address
//     // & address-of operator
//     // * deference operator

//     std::string name = "Bro";
//     int age = 21;
//     std::string freepizza[5]= {"pizza1","pizza2","pizza3","pizza4","pizza5",};

//     std::string *pName = &name;
//     int *pAge = &age;
//     std::string *pfreepizza = freepizza;

//     std::cout<<pName<<"\n";//you will get the memory address from this 
//     std::cout<<*pName<<'\n';//this will get you the input of that variable
//     std::cout<<*pAge<<'\n';
//     std::cout<<*pfreepizza<<'\n';//this will give 1st value in an array
//     return 0;
// }

// //to get all of the values in array you need something like this 
// #include <iostream>
// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int size = 5;
//     int* ptr = arr; // ptr points to the first element of the array

//     for (int i = 0; i < size; ++i) {
//         std::cout << "Value at index " << i << ": " << *(ptr + i) << std::endl;
//     }

//     return 0;
// }



// #include<iostream>

// int main(){
//     // Null Value = a special value that means somehing has no value.
//     //              When a pointer is holding a null value that pointer at anything (null pointer)

//     // nullptr = keyword represents a null pointer literal

//     // nullptr are helpful when a determining if an address was successfully assigned to a pointer

//     // When using pointers, be careful that your code isn't dereferencing nullptr or pointing to free memory this will cause undefined behaviour

//     int *pointer = nullptr;
//     int x = 123;

//     pointer = &x;

//     if(pointer == nullptr){ //the address was assigned as seen above
//         std::cout<<"address was not assigned \n";
//     }
//     else{
//         std::cout <<"address was assigned \n";
//         std::cout<<*pointer;
//     }
//     return 0;
// }



// #include<iostream>

// int main(){
    // Dynamic Memory = Memory that is allocated after the program is already  compiled & running . Use the 'new' operator to allocate memory in the heap rather than the stack

    //useful when we don't know how much memory will need . Mkes our programs more flexible, especially when accepting user input.

    // int *pNum = NULL;
    // pNum = new int;//new operator
    // *pNum = 21;
    // std::cout<<"address:"<<pNum<<'\n';
    // std::cout<<"value:"<<*pNum<<'\n';

    // delete pNum;//use delete operator when you are using new operator , it is safe
    // return 0;


//     char *pGrades = NULL;
//     int size;

//     std::cout<<"how many grades to enter in?:";
//     std::cin>> size;

//     pGrades = new char[size];

//     for(int i = 0; i < size;i++){//we are entering the grades
//         std::cout <<"Enter grade #"<< i+1 <<":";
//         std::cin>>pGrades[i];
//     }
//     for(int i =0;i < size; i++){//we are displaying the grades
//         std::cout<< pGrades[i]<<" ";
//     }

//     delete[] pGrades;// we are doing this in order to prevent memory leak
//     return 0;
// }



// #include<iostream>
// void walk(int steps);
// int main(){

//     // recursion = a programming technique where a function invokes itself from within break a complex concept into a repeatable single step

//     //(iterative vs recursive)

//     //advantages = less code and is cleaner ,useful for sorting and searching algorithms

//     //disadvantages = uses more memory 
//     //                slower

//     walk(100);
     
//     return 0;
// }
// void walk(int steps){
//     // for(int i =0;i < steps; i++){//this is iterative approach
//     //     std::cout <<"you take a steps \n";
//     // }

//     // if(steps > 0){//recursive apporach
//     //  std::cout <<"you take a steps \n";
//     //  walk(steps - 1);
//     //  }

//     //recursive apporach
//      std::cout <<"you take a steps \n";
//      walk(steps);//stack overflow ,an infinity loop
     
// }


// #include<iostream>
// int factorial(int num);
// int main(){

//     std::cout << factorial(10);
//     return 0;
// }
// int factorial (int num){
//     // int result = 1;//iterative approach
//     // for(int i = 1; i<= num; i++){
//     //     result = result * i;
//     // }
//     // return result;

//     if(num > 1){
//         return num * factorial(num - 1);//when a function is invoking itself from within it is recursion
//     }
//     else{
//         return 1;
//     }
// }



// #include<iostream>

// // int max(int x,int y){
// //     return (x>y)?x:y;//ternary operator
// // }
// // double max(double x,double y){
// //     return (x>y)?x:y;
// // }
// // char max(char x,char y){
// //     return (x>y)?x:y;
// // }

// template <typename T,typename U>//declaraction of what T is

// auto max(T x,U y){//using auto the compile will deduce what the return type should be//this will accept any or many datatype
//      return (x>y)?x:y;//but the argument should be of same datatype in this if you are not using two templates
// }
// int main(){

//     // function template = describe what a function looks like .
//     //                     Can be used to generate as many overloaded functions as needed , each using different data types
//     //                     Ex. "it's like a cookie-cutter..."
//     //                     "cookies are the same shape,but the dough used can be different"
//     // std::cout<<max(1,2)<<'\n';
//     // std::cout<<max(1.1,2.1)<<'\n';
//     // std::cout<<max('1','2')<<'\n';

//     std::cout<<max(1,2.1)<<'\n';//but the data will trucated if we return to T
//                                 //we can try the U above
//     return 0;
// }



// #include<iostream>
// struct student{
//     std::string name;
//     double gpa;
//     bool enrolled = true;
// };//make sure to do this semi-colon
// int main(){
//     //struct = A structure that group related variables under one name
//     //         structs can contain many different data types(string,integer,float,character,boolean,etc)
//     //         variables in a struct are known as "members"
//     //         members can be access with . "Class Member Access Operator"

//     student student1;
//     student1.name ="spongbob";
//     student1.gpa=3.2;
//     student1.enrolled=true;

//     student student2;
//     student2.name ="bob";
//     student2.gpa=2.2;
//     student2.enrolled=true;

//     student student3;
//     student3.name ="bobby";
//     student3.gpa=4.2;
//     student3.enrolled=false;

//     std::cout<<student1.name<<"\n";
//     std::cout<<student1.gpa<<"\n";
//     std::cout<<student1.enrolled<<"\n";

//     std::cout<<student2.name<<"\n";
//     std::cout<<student2.gpa<<"\n";
//     std::cout<<student2.enrolled<<"\n";

//     std::cout<<student3.name<<"\n";
//     std::cout<<student3.gpa<<"\n";
//     std::cout<<student3.enrolled<<"\n";
//     return 0;
// }


//pass structs as arguments
// #include <iostream>
// #include<string>

// struct car{
// std::string model;
// int year;
// std::string color;
// };
// void printcar( const car& car);
// void paintcar(car &car,std::string color);
// int main(){

//     car car1;
//     car car2;
//     car car3;

//     car1.model = "mustang";
//     car1.year = 2023;
//     car1.color = "red";

//     car2.model = "BMW";
//     car2.year = 2012;
//     car2.color = "blue";

//     car3.model = "mustang";
//     car3.year = 1999;
//     car3.color = "black";

//     paintcar(car1,"silver");//these will change the colour
//     paintcar(car2,"gold");
//     paintcar(car3,"navy");

//     printcar(car1);
//     printcar(car2);
//     printcar(car3);
//     return 0;
// }
// void printcar(const car& car){ //point outs the strcu and then the name
//     std::cout<<car.model<<'\n';
//     std::cout<<car.year<<'\n';
//     std::cout<<car.color<<'\n';
// }
// void paintcar(car &car,std::string color){
//     car.color = color;
// }



// #include<iostream>

// enum day {sunday=0,monday=1,tuesday=2,wednesday=3,thursday=4,friday=5,saturday=6};

// int main (){
//     // enums = a user-defined data type that consists of paired named-integer constants.
//     //         GREAT if you have a set of potential options

//     day today = sunday;

//     switch(today){
//         case sunday: std::cout<<"it is sunday\n";//we can even write cases in 0-9 as we have shown above
//         break;
//         case monday: std::cout<<"it is monday\n";
//         break;
//         case tuesday: std::cout<<"it is tuesday\n";
//         break;
//         case wednesday: std::cout<<"it is wednesday\n";
//         break;
//         case thursday: std::cout<<"it is thursday\n";
//         break;
//         case friday: std::cout<<"it is friday\n";
//         break;
//         case saturday: std::cout<<"it is saturday\n";
//         break;
//     }
// }



// #include<iostream>

// class Human{
//     public:
//         std::string name ="MORTY";//these are default but they were changed as we go further into the program
//         std::string occupation ="CRAZY";
//         int age =100;

//         void eat(){
//             std::cout<<"this person is eating\n";
//         }
//         void drink(){
//             std::cout<<"this person is drinking\n";
//         }
//         void sleep(){
//             std::cout<<"this person is sleaping\n";
//         }
// };
// class car{
//     public:
//     std::string make;
//     std::string model;
//     int year;
//     std::string color;

//     void accelerate(){
//         std::cout<<"you stepped on the gas\n";
//     }
//     void brake(){
//         std::cout<<"you have stepped on the break\n";
//     }
// };
// int main(){

//     // object = A collection of attributes and methods 
//     //          They can have characteristics and could perform actions
//     //          Can be used to mimic real world items (ex.Phone,Book,Dog)
//     //          Created from a class which acts as a "blue-print"

//     Human human1;
//     Human human2;
    

//     human1.name ="morty";
//     human1.occupation ="sidekick";
//     human1.age =16;

//     human2.name ="rick";
//     human2.occupation ="crazy-head";
//     human2.age =100;

//     std::cout<<human1.name<<'\n';
//     std::cout<<human1.occupation<<'\n';
//     std::cout<<human1.age<<'\n';

//     std::cout<<human2.name<<'\n';
//     std::cout<<human2.occupation<<'\n';
//     std::cout<<human2.age<<'\n';

//     human1.eat();
//     human1.drink();
//     human1.sleep();

//     human2.eat();
//     human2.drink();
//     human2.sleep();


//     car car1;

//     car1.make="ford";
//     car1.model="mustang";
//     car1.year = 2023;
//     car1.color ="silver";

//     std::cout<<car1.make<<'\n';
//     std::cout<<car1.model<<'\n';
//     std::cout<<car1.year<<'\n';
//     std::cout<<car1.color<<'\n';

//     car1.accelerate();
//     car1.brake();

//     return 0;
// }



// #include<iostream>

// class student{
//     public:
//         std::string name;
//         int age;
//         double gpa;
//     student(std::string name,int age,double gpa){//an constructor will have sam ename as the class
//         this->name=name;
//         this->age=age;
//         this->gpa=gpa;
//     } 
    
//         // student(std::string x,int y,double z){//an constructor will have sam ename as the class
//         // name=x;
//         // age=y;
//         // gpa=z;
//     // } 
    
// };

// class car{
//     public:
//     std::string make;
//     std::string model;
//     int year;
//     std::string color;

//     car(std::string make,std::string model,int year, std::string color){
//         this->make=make;
//         this->model=model;
//         this->year=year;
//         this->color=color;
//     }
// };
// int main(){

//     // constructor = special method that is automatically called when an object is instantiated useful for assigning values to attributed as arguments

//     student student1("Spongebob",25,3.5);
//     student student2("bob",29,4.5);
//     student student3("Sponge",26,3.7);
    
//     std::cout<<student1.name<<'\n';
//     std::cout<<student1.age<<'\n';
//     std::cout<<student1.gpa<<'\n';

//     std::cout<<student2.name<<'\n';
//     std::cout<<student2.age<<'\n';
//     std::cout<<student2.gpa<<'\n';

//     std::cout<<student3.name<<'\n';
//     std::cout<<student3.age<<'\n';
//     std::cout<<student3.gpa<<'\n';

//     car car1("chevy","corvette",2022,"blue");
//     car car2("ford","mustang",2012,"black");

//     std::cout<<car1.make<<'\n';
//     std::cout<<car1.model<<'\n';
//     std::cout<<car1.year<<'\n';
//     std::cout<<car1.color<<'\n';

//     std::cout<<car2.make<<'\n';
//     std::cout<<car2.model<<'\n';
//     std::cout<<car2.year<<'\n';
//     std::cout<<car2.color<<'\n';

//     return 0;
// }


//constructor overload allows objects with varing number of attributes
// #include<iostream>

// class pizza{
//     public:
//         std::string topping1;
//         std::string topping2;

//     pizza(){
//         //this is to creata pizza iwth no toppings
//     }    
//     pizza(std::string topping1){
//         this->topping1=topping1;
//     }   
    
//     pizza(std::string topping1,std::string topping2){
//     this->topping1=topping1;
//     this->topping2=topping2;
//     }

// };
// int main(){

//     pizza pizza1("pepperoni");
//     pizza pizza2("cheese","mushrooms");
//     pizza pizza3();

//     std::cout<<pizza1.topping1<<'\n';
//     std::cout<<pizza2.topping1<<'\n';
//     std::cout<<pizza2.topping2<<'\n';
//     return 0;
// }



// #include<iostream>

// class stove{
//     private:
//        int temp = 0;
//     public:
//     //    int gettemp(){//readable
//     //     return temp;
//     //    }

//     stove(int temp){
//         settemp(temp);
//     }
//     int gettemp(){//getter- readable
//         return temp;
//     }

//     void settemp(int temp){//setter-writeable
//         if(temp<0){
//             this->temp=0;
//         }
//         else if(temp>=10){
//             this-> temp=10;
//         }else{
//         this->temp=temp;
//         }
//     }   
// };

// int main(){
//     //Abstraction = hiding unncessary data from outside a class
//     //getter = function that makes a private attribute READEABLE
//     //setter = function that makes a private attribute WRITEABLE

//     stove stove(0);

//     // stove.temp = 1000;
//     stove.settemp(0);
//     std::cout<<"the temp is"<<stove.gettemp();

//     return 0;
// }



// #include<iostream>

// class animal{
//     public:
//        bool alive = true;
//     void eat(){
//         std::cout<<"this animal is eating\n";
//     }
// };
// class dog : public animal{//dog will inherent from the animal class
//     public:
//     void bark(){
//         std::cout<<"the dog goes woof\n";
//     }
// };
// class cat : public animal{//cat will inherent from the animal class
//     public:
//     void meow(){
//         std::cout<<"the cat goes meow\n";
//     }
// };
// class shape{
//     public:
//     double area;
//     double volume;
// };
// class cube:public shape{
//     public:
//     double side;
//     cube(double side){
//         this->side=side;
//         this->area=side*side*6;
//         this->volume=side*side*side;
//     }
// };
// class sphere:public shape{
//     public:
//     double radius;
//     sphere(double radius){
//         this->radius=radius;
//         this->area=4*3.1459*(radius*radius);
//         this->volume=(4/3.0)*3.14159*(radius*radius*radius);
//     }
// };

// int main(){
//     // inheritance = A class can receive attributes and mehods from another class
//     //               Children classes inherit from a Parent class
//     //               Helps to reuse similar code found within multiple classes

//     dog dog;
//     cat cat;

//     std::cout<<dog.alive<<'\n';
//     dog.eat();
//     dog.bark();

//     std::cout<<cat.alive<<'\n';
//     cat.eat();
//     cat.meow();

//     cube cube(90);
//     sphere sphere(23);

//     std::cout<<"cube:area"<<cube.area<<'\n';
//     std::cout<<"cube:area"<<cube.volume<<'\n';
//     std::cout<<"sphere:area"<<sphere.area<<'\n';
//     std::cout<<"sphere:area"<<sphere.volume<<'\n';

//     return 0;
// }