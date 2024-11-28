// Ford-Johnson Algorithm Explanation:

// 1. Divide the list of (n) elements into pairs, resulting in (n/2) pairs of size 2.
// 2. imagine each pair in the following format (a, b)
// 3. Sort each pair so that the larger element is at 'b' location.
// 4. Create a list 'Main chain' containing a(0) plus all the larger element (b) from each pair.
// 5. Create a list 'Pending' containing all a(n) elements from each pair starting with a(1).
// (the key is to imagive this structure without implementing it to preserve memory)

// 6. Recursively sort 'Main chain' following steps 1 to 5 until 'Main chain' size is less than 3.
// 7. insert 'Pending' list into 'Main chain' using binary insertion.
// 8. The 'Main chain' now contains the fully sorted list of elements.

// Example:
// ###ITERATION NUM 1###
// - Numbers to sort: (5, 2, 1, 9, 3, 7, 0)
// - Pending = ()    Main-chain: ()
// - Original pairs: (5, 2), (1, 9), (3, 7) (0, NULL) // since one pair is incomplete lets put it in Pending.
// - Pending = (0)    Main-chain: ()
// - Original pairs: (5, 2), (1, 9), (3, 7) //let sort the numbers inside each pair
// - Sorted pairs: (2, 5), (1, 9), (3, 7)
// 				(a0,b0) (a1,b1) (a2,b2)
// 				//move a(0), b(0), b(1), b(2) ... b(n) to main-chain
// 				//move a(1), a(2), a(3), ... a(n) to pending
// - Pending = (0, 1, 3)    Main-chain: (2, 5, 9, 7)
// 		###ITERATION NUM 2###
// 		- Numbers to sort: (2, 5, 9, 7)
// 		- Pending = ()    Main-chain: ()
// 		- Original pairs: (2, 5), (9, 7)
// 		- Sorted pairs: (2, 5), (7, 9)
// 		- Pending = (7)    Main-chain: (2, 5, 9)
// 				###ITERATION NUM 3###
// 				- Numbers to sort: (2, 5, 9)
// 				- Pending = ()    Main-chain: ()
// 				- Original pairs: (2, 5), (9, NULL) //since one pair is incomplete lets put it in Pending.
// 				- Pending = (9)    Main-chain: ()
// 				- Sorted pairs: (2, 5)
// 				- Pending = (9)    Main-chain: (2, 5) 
// 				- NO need to call another iteration since Main-chain has less than 3 numbers
// 				- Insert Pending into Main-chain using binary insertion
// 				- Pending = ()    Main-chain: (2, 5, 9)
// 				###ITERATION NUM 3 RETURNS (2, 5, 9)
// 		- set Main-Chain to equal the return of the ITERATION 3
// 		- Pending = (7)    Main-chain: (2, 5, 9)
// 		- Insert Pending into Main-chain using binary insertion
// 		- Pending = ()    Main-chain: (2, 5, 7, 9)
// 		###ITERATION NUM 2 RETURNS (2, 5, 7, 9)
// - set Main-Chain to equal the return of the ITERATION 2
// - Pending = (0, 1, 3)    Main-chain: (2, 5, 7, 9)
// - Insert Pending into Main-chain using binary insertion
// - Pending = ()    Main-chain: (0, 1, 2, 3, 5, 7, 9)
// ###ITERATION NUM 1 RETURNS (0, 1, 2, 3, 5, 7, 9)

// Note: Binary insertion reduces insertion steps from O(N) to a maximum of O(log N) by combining insertion sort and binary search.

// Resource: https://arxiv.org/pdf/1905.09656

// PS: In my implementation, I utilized binary insertion for inserting elements into the main chain, as specified by the paper.
// The debate between using Jacobsthal and binary insertion, as discussed on Stack Overflow, can be summarized as follows:

// 	Jacobsthal:		theoretically is slightly faster due to its more complex implementation
// 					which prioritizes efficiency over computational simplicity
// 					this theoretical advantage often does not hold in the real-world
// 					hence why most papers tend to avoid it.
	
// 	Binary Insertion:	offers a balanced approach by minimizing the number of steps
// 						without compromising computational efficiency, making it the preferred choice
// 						for most real-world applications.

// Ultimately, the choice between Jacobsthal and binary insertion depends on your personal preference.

