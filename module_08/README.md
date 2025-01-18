# Exercise : 00 Easy find

- create a function easyfind that accept a type T,
    it takes the first one has type T and the second has integer
  - if the function find this a value return same value
  - if the funtion doesn't find anything should return "error value of your choice" or exception

# Exercise 01: Span

- create a Span class :
    - that can store a maximum of N integers.
    - N is an unsigned int
    - will be the only parameter passed to the constructor
    - create a function called addNumber() to add a single number
        - should order to fill it, Any attempt to add a new element if there
        - are already N elements stored should throw an exception-
    - create function shortestSpan()
        - return the shortest span
        - or throw an exception
    - create function longestSpan()
        - return the longest span
        - or throw an exception

### notice
- Test your Span at least with a minimum of 10 000 numbers
- it would be wonderful to fill your Span using a 'range of iterators'

# Exercise 02: Mutated abomination
- use std::stack containers
- Write a MutantStack class 
    - It will be 'implemented in terms of a std::stack'
    - I can use all iterators feature.


## Containers in C++ STL (Standard Template Library)

The Standard Template Library in C++, STL types plus explains

## Sequence containers

Sequence containers implement data structures that can be accessed sequentially.

Elements are stored in a specific order, like a line.


array Static contiguous array
vector Dynamic contiguous array
deque Double-ended queue
forward_list Singly-linked list
list Doubly-linked list

## Associative containers

Associative containers implement sorted data structures that can be quickly searched (O(log n) complexity).

Elements are stored in a sorted order based on a key.

Keys must be unique (no duplicates).

You can efficiently search for elements using their key.

- Set Collection of unique keys, sorted by keys
- Map Collection of key-value pairs, sorted by keys, keys are unique.
- multiset Collection of keys, sorted by keys
- multimap Collection of key-value pairs, sorted by keys

## Unordered associative containers

Unordered associative containers implement unsorted (hashed) data structures that can be 
quickly searched (O(1) amortized, O(n) worst-case complexity).

Elements are stored in a hash table for faster average lookups (like a phone book index).

Keys can be duplicate, but element order isn't guaranteed.

- unordered_set Collection of unique keys, hashed by keys.
- unordered_map Collection of key-value pairs, hashed by keys, keys are unique.
- unordered_multiset Collection of keys, hashed by keys
- unordered_multimap Collection of key-value pairs, hashed by keys

## Container adapters

Container adapters provide a different interface for sequential containers.

These don't store data themselves, but provide a specific interface on top of existing containers.

Useful when you need specific data structures like stacks or queues without managing the underlying container.

- stack Adapts a container to provide stack (LIFO data structure).
- queue Adapts a container to provide queue (FIFO data structure).
- priority_queue Adapts a container to provide priority queue.


### NOTICE

- Sequence containers: When order matters and you need random access.
- Associative containers: For fast lookups by unique keys.
- Unordered associative containers: When order doesn't matter and you need very fast average lookups.
- Container adapters: To implement specific data structures like stacks or queues


    /* vector container
    futeares:
    -- Dynamic size
    -- contiguous memory locations
    -- allow insertions or deletions at any position
    -- support iterators
    -- support reverse iterators
    -- support random access iterators

    member function:
    push_back(): Adds an element to the end of the vector.
    pop_back(): Removes the last element from the vector.
    insert(): Inserts elements at a specified position.
    erase(): Removes elements from a specified range.   
    size(): Returns the number of elements in the vector.
    empty(): Checks if the vector is empty.
    clear(): Removes all elements from the vector.  
    resize(): Changes the size of the vector.
    */

    /* list container
    features:
    -- Doubly linked list
    -- Dynamic size
    -- Non-contiguous memory locations
    -- allow insertions or deletions at any position
    -- support iterators
    -- support reverse iterators
    -- support bidirectional iterators

    member function:
    push_back(): Adds an element to the end of the list.
    pop_back(): Removes the last element from the list.
    push_front(): Adds an element to the beginning of the list.
    pop_front(): Removes the first element from the list.
    insert(): Inserts elements at a specified position.
    erase(): Removes elements from a specified range.
    size(): Returns the number of elements in the list.
    empty(): Checks if the list is empty.
    clear(): Removes all elements from the list.
    */

    /* stack container
    features:
    -- LIFO (Last In First Out)
    -- Dynamic size
    -- Non-contiguous memory locations
    -- allow insertions or deletions at the top
    -- do not support iterators

    member function:
    push(): Adds an element to the top of the stack.
    pop(): Removes the top element from the stack.
    top(): Returns the top element of the stack.
    size(): Returns the number of elements in the stack.
    empty(): Checks if the stack is empty.
    */

    /* Deque container
    features:
    -- Double-ended queue
    -- Dynamic size
    -- contiguous memory locations
    -- allow insertions or deletions at the beginning or end
    -- support iterators

    member function:
    push_back(): Adds an element to the end of the deque.
    pop_back(): Removes the last element from the deque.
    push_front(): Adds an element to the beginning of the deque.
    pop_front(): Removes the first element from the deque.
    insert(): Inserts elements at a specified position.
    erase(): Removes elements from a specified range.
    size(): Returns the number of elements in the deque.
    empty(): Checks if the deque is empty.
    clear(): Removes all elements from the deque.
    resize(): Changes the size of the deque.
    */

    /* Queue container
    features:
    -- FIFO (First In First Out)
    -- Dynamic size
    -- Non-contiguous memory locations
    -- allow insertions at the end and deletions at the beginning
    -- do not support iterators
    -- do not support random access

    member function:
    push(): Adds an element to the end of the queue.
    pop(): Removes the first element from the queue.
    front(): Returns the first element of the queue.
    back(): Returns the last element of the queue.
    size(): Returns the number of elements in the queue.
    empty(): Checks if the queue is empty.
    */

    /*## Type of Containers in C++
    1. Sequence Containers
        - vector
        - list
        - deque
        - array
        - forward_list
    2. Associative Containers
        - set
        - multiset
        - map
        - multimap
    3. Unordered Associative Containers
        - unordered_set
        - unordered_multiset
        - unordered_map
        - unordered_multimap
    4. Container Adapters
        - stack
        - queue
        - priority_queue
    */

    /* Features:
    1. Sequence Containers
        - Dynamic size
        - Contiguous memory locations
        - Allow insertions or deletions at any position
        - Elements are stored in a specific order, like a line
        - Support iterators
        - allow random access (direct access to any element by its index)
    2. Associative Containers
        - Dynamic size
        - Non-contiguous memory locations
        - Elements are stored in a sorted order based on a key
        - Keys must be unique (no duplicates)
        - Allow insertions or deletions at any position
        - Support iterators
        - Support random access iterators
    3. Unordered Associative Containers
        - Dynamic size
        - Non-contiguous memory locations
        - Allow insertions or deletions at any position
        - Support iterators
        - Support random access iterators
    4. Container Adapters
        - Dynamic size
        - Non-contiguous memory locations
        - Allow insertions or deletions at any position
        - Do not support iterators
        - Do not support random access iterators
    */