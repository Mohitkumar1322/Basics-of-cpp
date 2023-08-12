int x = 7;
int y = 5;
int a = ( x > y ) ? x : y; // here we are using conditional expression to evaluate
cout << a << endl;
// The above conditional expression is equivalent to
/*
if (x > y){      // here we are usig if-else which will gave same output
    a = x;
    cout << a << endl;
}
else {
    a = y;
    cout << a << endl;
}
*/
