# CPP-Module-01

## About this Module

The Scope of this Module was to get to know C++ further and come in contact with:
- Allocation (ex00 + ex01)
- Pointer/Reference (ex03)
- getter and setter functions (ex04)
- different constructors (ex04)
- function pointers (ex05)
- switch cases with defined fallthrough (ex06)


All of those exercises are compilable with the `-std=c++98-flag`, since this was a requirement for this project.
All exercises where compiled and tested on `macOS Catalina 10.15.7` and `Ubuntu 20.04.4 LTS`.
Ex04 and ex06 need small changes to compile and run on Linux:
## ex03 (Pointer vs Reference C++)

  Whether to use a pointer to `Weapon` or a reference to `Weapon` in C++ depends on the specific needs of your program and how you want to manage memory and ownership. Both pointers and references have their own use cases, and the choice between them is influenced by several factors:

1. Ownership and Lifetime:
   - Use a pointer when you want to express ownership or responsibility for managing the object's lifetime. Pointers can be assigned to `nullptr`, deleted, or reassigned to another object. If you need to handle dynamic memory allocation, use pointers.
   - Use a reference when you want to refer to an existing object without taking ownership or responsibility for its lifetime. References are usually constant and cannot be reassigned to another object.

2. Nullability:
   - Use a pointer when the object might not exist (nullable). You can check for a `nullptr` value to determine if the object is valid or not.
   - Use a reference when you can guarantee that the object will always exist. References cannot be null, so they imply that the object is valid.

3. Syntax and Semantics:
   - Pointers are dereferenced using `->` or `*` operators, making it clear that you are working with a different entity (the pointed object).
   - References are used with the same syntax as the actual object, providing a seamless way to work with the object.

4. Function Parameters:
   - Use pointers for function parameters when the object may be modified or when you want to accept a `nullptr` to indicate an optional argument.
   - Use references for function parameters when you want to work with an existing object and do not intend to modify it. Using a reference also avoids the need to check for nullness.

In the context of a `Weapon` class, you might use a pointer to `Weapon` if you need to represent the case where a character has no weapon, and you want to allow for dynamic allocation and deallocation of weapons. For example:

```cpp
Weapon* characterWeapon = new Weapon("Sword");
characterWeapon = nullptr; // Weapon is no longer owned

// Later in the code...
if (characterWeapon != nullptr) {
    characterWeapon->attack();
}
```

You might use a reference to `Weapon` when you are sure that a character always has a weapon, and you want to simplify the syntax and avoid dealing with nullability:

```cpp
Weapon& characterWeapon = character.getWeapon();
characterWeapon.attack(); // No need to check for null or ownership
```

In conclusion, the choice between a pointer and a reference to `Weapon` should be based on the specific requirements and design of your program, considering factors like ownership, nullability, and the intended use of the object.
## ex04
  - Line 54 in /src/main.cpp, follow the comment
## ex06
  - un-comment lines 62, 65 and 68

All exercises can be compiled from the root of the exercise with `make`, `make all` or `make re`.
After that, run the created executable like `./executable_to_run` (ie. ex00 `./Zombie`).

