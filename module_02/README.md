# CPP-Module-02

## About this Module

### The Scope of this Module was to get to know C++ further and come in contact with classes in orthodox canonical form:

#### ex00: class that can store a fixed point variable && classes in orthodox canonical form

  fixed point variable :
  
  <img src="https://media.geeksforgeeks.org/wp-content/uploads/20220527101351/OperatorsinCPP.png" />
  
  The Orthodox Canonical Class Form:

  A default constructor: used internally to initialize objects and data members when no other value is available.
  
  A copy constructor: used in the implementation of call-by-value parameters.
  
  An assignment operator: used to assign one value to another.
  
  A destructor: Invoked when an object is deleted.

  A standard class should look like the following code:
  
      class A final
    {
       public:
          A ();
          A (const A &a);
          ~A ();
          A & operator = (const A &a);
    };
  
- ex01: add constructors and functions to that class from ex00 to make it usable
- ex02: add all kinds of operator overloads to expand the usability of ex01 even more



All exercises can be compiled from the root of the exercise with `make`, `make all` or `make re`.<br>
All exercises have a main function to demonstrate all the abilities of the subject.<br>
After that, run the created executable like `./executable_to_run` (ie. ex00 `./fixed`).<br>


finished ✅👾