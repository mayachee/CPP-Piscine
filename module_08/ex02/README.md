# STL-cpp

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

Set Collection of unique keys, sorted by keys
Map Collection of key-value pairs, sorted by keys, keys are unique.
multiset Collection of keys, sorted by keys
multimap Collection of key-value pairs, sorted by keys

## Unordered associative containers

Unordered associative containers implement unsorted (hashed) data structures that can be 
quickly searched (O(1) amortized, O(n) worst-case complexity).

Elements are stored in a hash table for faster average lookups (like a phone book index).

Keys can be duplicate, but element order isn't guaranteed.

unordered_set Collection of unique keys, hashed by keys.
unordered_map Collection of key-value pairs, hashed by keys, keys are unique.
unordered_multiset Collection of keys, hashed by keys
unordered_multimap Collection of key-value pairs, hashed by keys

## Container adapters

Container adapters provide a different interface for sequential containers.

These don't store data themselves, but provide a specific interface on top of existing containers.

Useful when you need specific data structures like stacks or queues without managing the underlying container.

stack Adapts a container to provide stack (LIFO data structure).
queue Adapts a container to provide queue (FIFO data structure).
priority_queue Adapts a container to provide priority queue. 


### NOTICE

- Sequence containers: When order matters and you need random access.
- Associative containers: For fast lookups by unique keys.
- Unordered associative containers: When order doesn't matter and you need very fast average lookups.
- Container adapters: To implement specific data structures like stacks or queues