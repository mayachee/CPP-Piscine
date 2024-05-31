# Exercise 00: Start with a few functions

### Implement the following function templates:

-> swap: Swaps the values of two given arguments. Does not return anything.

-> min: Compares the two values passed in its arguments and returns the smallest
    one. If the two of them are equal, then it returns the second one.

-> max: Compares the two values passed in its arguments and returns the greatest one.
    If the two of them are equal, then it returns the second one.


---->> NOYICE <<-----

- These functions can be called with any type of argument.
- Templates must be defined in the header files.

Running the following code:
```
    int main( void ) {
        int a = 2;
        int b = 3;
        ::swap( a, b );
        std::cout << "a = " << a << ", b = " << b << std::endl;
        std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
        std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
        std::string c = "chaine1";
        std::string d = "chaine2";
        ::swap(c, d);
        std::cout << "c = " << c << ", d = " << d << std::endl;
        std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
        std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
        return 0;
    }
```

Should output:

```
    a = 3, b = 2
    min(a, b) = 2
    max(a, b) = 3
    c = chaine2, d = chaine1
    min(c, d) = chaine1
    max(c, d) = chaine2
```

# Exercise : 01 Iter

Implement a function template iter that takes 3 parameters and returns nothing.

-> The first parameter is the address of an array.

-> The second one is the length of the array.

-> The third one is a function that will be called on every element of the array.

### ----> NOTICE <-----

--> Your iter function template must work with any type of array.

# Exercise : 02 Array

class template Array:

-> Construction with no parameter ✅
-> Construction with an unsigned int n as a parameter
    Tip: Try to compile int * a = new int(); then display *a
-> Construction by copy and assignment operator. ✅
-> You MUST use the operator new[] to allocate memory. ✅
-> Elements can be accessed through the subscript operator: [ ].
    should use std::exception is thrown ✅
-> function size() that returns the number of elements in the array ✅
    . the function takes no parameter ✅
    . musn’t modify ✅
