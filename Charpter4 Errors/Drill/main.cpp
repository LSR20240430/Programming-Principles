/*
Drill
Below are 25 code fragments. Each is meant to be inserted into this ¡°scaffolding¡±:
Click here to view code image
#include "PPP.h"int main()try{<<your code here>>return 0;}catch (exception& e){cerr << "error: " << e.what() << '\n';return 1;}catch (...) {cerr << "Oops: unknown exception!\n";return 2;}
Each has zero or more errors. Your task is to find and remove all errors in each program. 
When you have removed those bugs, the resulting program will compile, run, and write ¡°Success!¡± 
Even if you think you have spotted an error, you still need to enter the (original, unimproved) program 
fragment and test it; you may have guessed wrong about what the error is, or there may be more errors in a 
fragment than you spotted. Also, one purpose of this drill is to give you a feel for how your compiler reacts 
to different kinds of errors. Do not enter the scaffolding 25 times ¨C that¡¯s a job for cut and paste or some 
similar ¡°mechanical¡± technique. Do not fix problems by simply deleting a statement; repair them by changing, 
adding, or deleting a few characters.

*/



#include "PPP.h"

int main()

    try {
        // Please insert 25 code fragments in a row

   
    cout << "Success!\n";
        
    
    return 0;


    }
    catch (exception& e) 
    {
        cerr << "error: " << e.what() << '\n';
        return 1;
    }
    catch (...) 
    {
        cerr << "Oops: unknown exception!\n";
        return 2;
    }

    

