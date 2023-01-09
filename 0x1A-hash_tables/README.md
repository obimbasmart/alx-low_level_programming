# C - Hash tables

## Learnings:
- A hash table is simply an array of Linked list
- Hash tables usually have a hash function: this function maps keys to index
- Index specifies the position of an element in the array
- It is possible for a hash function to map same index for two different keys (this is called collision)
- In the case of collision, a method called `chaining` is used to link items with same index using a LInkedList data structure

## Mandatory

0. <details><summary>Write a function that creates a hash table</summary>
	<ul>
		<li>Prototype: hash_table_t <code>*hash_table_create(unsigned long int size);</code></li>
		<li>where size is the size of the array</li>
		<li>Returns a pointer to the newly created hash table</li>
		<li>If something went wrong, your function should return NULL</li>
	</ul>
</details>

1. <details><summary>Write a hash function implementing the djb2 algorithm</summary>
	<ul>
		<li>Prototype: <code>unsigned long int hash_djb2(const unsigned char *str);</code></li>
		<li>You are allowed to copy and paste the function from this page</li>
	</ul>
</details>

2. <details><summary>Write a function that gives you the index of a key.</summary>
	<ul>
		<li>Prototype: <code>unsigned long int key_index(const unsigned char *key, unsigned long int size);</code>
		<li>where <code>key</code> is the key</li>
		<li>and size is the size of the array of the hash table</li>
		<li>This function should use the hash_djb2 function that you wrote earlier</li>
		<li>Returns the index at which the key/value pair should be stored in the array of the hash table</li>
		<li>You will have to use this hash function for all the next tasks</li>
	</ul>
