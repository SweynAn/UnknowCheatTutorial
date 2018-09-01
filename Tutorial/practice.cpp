
/*
Reference https://stackoverflow.com/questions/10602260/
how-to-get-current-process-id-and-machine-name-in-c

https://docs.microsoft.com/zh-cn/windows/desktop/api/
processthreadsapi/nf-processthreadsapi-getcurrentprocessid

First created 2018/8/31

*/
 #include <windows.h>
 #include <string>
 #include <iostream>

 using namespace std;

 int main(int argc, char const *argv[])
 {
     int varInt = 123456 ;
     string varString = "DefaultString" ;
     char arrChar[128] = "Long char array right there ->";

     int* ptr2int = &varInt ;
     int** ptr2ptr = &ptr2int ;
     int*** ptr2ptr2 = &ptr2ptr ;

     do{
         std::cout << "Process ID:" << GetCurrentProcessId << "\n";
         std::cout << "varInt \t" << "(" << &varInt << ")\t" 
         << "=\t" << varInt << "\n" ;
         std::cout << "varString \t" << "(" << &varString << ")\t" 
         << "=\t" << varString << "\n" ;
         std::cout << "arrChar[128] \t" << "(" << &arrChar << ")\t" 
         << "=\t" << arrChar << "\n" ;

         std::cout << "ptr2int \t" << "(" << &ptr2int << ")\t" 
         << "=\t" << ptr2int << "\n" ;
         std::cout << "ptr2ptr \t" << "(" << &ptr2ptr << ")\t" 
         << "=\t" << ptr2ptr << "\n" ;
         std::cout << "ptr2ptr2 \t" << "(" << &ptr2ptr2 << ")\t" 
         << "=\t" << ptr2ptr2 << "\n" ;
         
         // this is the part I didn't get 
         cout<< "Press Enter to print again." << endl ;
         getchar();
         cout<< endl << "-------------------------------------"<< endl <<endl;

     }while(true);

     return 0;
 }
 