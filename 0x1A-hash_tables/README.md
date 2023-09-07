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

3. <details><summary> Write a function that adds an element to the hash table.</summary>
	<ul>
	<li>Prototype: <code>int hash_table_set(hash_table_t *ht, const char *key, const char *value);</code>

	<ul>
	<li>Where <code>ht</code> is the hash table you want to add or update the key/value to</li>
	<li><code>key</code> is the key. <code>key</code> can not be an empty string</li>
	<li>and <code>value</code> is the value associated with the key. <code>value</code> must be duplicated. <code>value</code> can be an empty string</li>
	</ul></li>
	<li>Returns: <code>1</code> if it succeeded, <code>0</code> otherwise</li>
	<li>In case of collision, add the new node at the beginning of the list</li>
	</ul>
	</details>

4. <details><summary>Write a function that retrieves a value associated with a key</summary>
	<ul>
	<li>Prototype: <code>char *hash_table_get(const hash_table_t *ht, const char *key);</code>

	<ul>
	<li>where <code>ht</code> is the hash table you want to look into</li>
	<li>and <code>key</code> is the key you are looking for</li>
	</ul></li>
	<li>Returns the value associated with the element, or <code>NULL</code> if <code>key</code> couldn’t be found</li>
	</ul>
	</details>

5. <details><summary> Write a function that prints a hash table</summary>

	<ul>
	<li>Prototype: <code>void hash_table_print(const hash_table_t *ht);</code>

	<ul>
	<li>where <code>ht</code> is the hash table</li>
	</ul></li>
	<li>You should print the key/value in the order that they appear in the array of hash table
	<ul>
	<li>Order: array, list</li>
	</ul></li>
	<li>Format: <code>{'Name' : 'Obimba', 'Age' : 53}</code></li>
	<li>If <code>ht</code> is NULL, don’t print anything</li>
	</ul>
	</details>

6. <details><summary>Write a function that deletes a hash table.</summary>

	<ul>
	<li>Prototype: <code>void hash_table_delete(hash_table_t *ht);</code>

	<ul>
	<li>where <code>ht</code> is the hash table</code></li>
	</ul></li>
	</ul>
	</details>
