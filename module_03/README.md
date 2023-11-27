# CPP-Module-03

## About this Module
The Scope of this Module was to get to know C++ further and come in contact with inheritance for classes:
- ex00: creation of the base class to inherit from
- ex01: inherits from base class and adds new values to the attributes as well as a new function
- ex02: inherits from base class and adds new values to the attributes as well as a new function
- ex03: the diaond problem: inherits some attributes from ex02 and some attributes from ex01 and adds an extra function to show its relation to ex00


# C++ Inheritance

Inheritance is a fundamental concept in object-oriented programming (OOP) that allows a class to inherit properties and behaviors from another class. This promotes code reusability and the creation of class hierarchies.

## Types of Inheritance

### 1. Single Inheritance

```cpp
  class Base {
      // Base class members
  };
  
  class Derived : public Base {
      // Derived class members
  };
```

### 2. Multiple Inheritance
```cpp
    class Base1 {
        // Base1 class members
    };
    
    class Base2 {
        // Base2 class members
    };
    
    class Derived : public Base1, public Base2 {
        // Derived class members
    };
```

### 3. Multilevel Inheritance
```cpp
  class Base {
      // Base class members
  };
  
  class Derived1 : public Base {
      // Derived1 class members
  };
  
  class Derived2 : public Derived1 {
      // Derived2 class members
  };
```
### 4. Hierarchical Inheritance
```cpp
  class Base {
      // Base class members
  };
  
  class Derived1 : public Base {
      // Derived1 class members
  };
  
  class Derived2 : public Base {
      // Derived2 class members
  };
```
### 5. Hybrid Inheritance
```cpp
  class Base {
      // Base class members
  };
  
  class Derived1 : public Base {
      // Derived1 class members
  };
  
  class Derived2 : public Base {
      // Derived2 class members
  };
  
  class MultiDerived : public Derived1, public Derived2 {
      // MultiDerived class members
  };
```
