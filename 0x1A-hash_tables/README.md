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
