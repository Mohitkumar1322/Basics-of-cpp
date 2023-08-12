for(int i = 1; i <= 5; i++){
   cout<<i<<" ";
}
// Prints 1 2 3 4 5 
While loop
The syntax of while loop is:

while (condition) {
    statememt(s);
}

///continue jump statement 
int a = 0;  
while(a < 10)  
{  
    a++;  
    if(a == 5)  
        continue;  

    cout << a << " ";  
}  
// prints 1 2 3 4 6 7 8 9 10 


// go - to jump statement 
num = 10      
if (num % 2 == 0)   
    // jump to even   
    goto even;    
else  
    // jump to odd   
    goto odd;    

even:   
    cout << num << " is even";   
    // return if even   
    return;    
odd:   
    cout << num << " is odd"; 
