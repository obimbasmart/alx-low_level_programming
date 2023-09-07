# C - Hash tables
> Hash tables are cool, bro. They provide a smart way to organize and find data quickly. They combine the best of arrays and linked lists, making them both reliable and fast. Arrays are great, but they need resizing when they fill up, which can be slow and memory-intensive. Hash tables fix this by using a fixed-size array that doesn't crash when full.

> However, there's a catch in hash tables - sometimes two keys can end up in the same spot in the array (we call this a `collision`). But no worries, there's 
a technique for handling this. One way is `chaining`, where keys that collide are linked together using a linked list. This keeps things organized and efficient. There are other ways of handling collisions.
> 
> ## Key Learnings:
> - A hash table is simply an array of Linked lists (as implemented in this project).
> - Hash tables usually have a hash function: this function maps keys to the index
>	- Index specifies the position of an element in the array
> - It is possible for a hash function to map the same index for two different keys (this is called a collision)
	- In the case of collision, a method called `chaining` (there are other methods) is used to link items with the same index using a LinkedList data structure


## Mandatory

<details>
 <summary><code>0-hash_table_create.c</code> - Write a function that creates a hash table.</summary>
 <ul>
  <li>Prototype: <code>hash_table_t *hash_table_create(unsigned long int size);</code></li>
  <li>Where <code>size</code> is the size of the array</li>
  <li>Returns a pointer to the newly created hash table</li>
  <li>If something went wrong, your function should return <code>NULL</code></li>
 </ul>
</details>

<details>
 <summary><code>1-djb2.c</code> - Write a hash function implementing the djb2 algorithm.</summary>
 <ul>
  <li>Prototype: <code>unsigned long int hash_djb2(const unsigned char *str);</code></li>
  <li>You are allowed to copy and paste the function from this page</li>
 </ul>
</details>

<details>
 <summary><code>2-key_index.c</code> - Write a function that gives you the index of a key.</summary>
 <ul>
  <li>Prototype: <code>unsigned long int key_index(const unsigned char *key, unsigned long int size);</code></li>
  <li>Where <code>key</code> is the key</li>
  <li>And <code>size</code> is the size of the array of the hash table</li>
  <li>This function should use the hash_djb2 function that you wrote earlier</li>
  <li>Returns the index at which the key/value pair should be stored in the array of the hash table</li>
 </ul>
</details>


<details>
 <summary><code>3-hash_table_set.c</code> - Write a function that adds an element to the hash table.</summary>
 <ul>
  <li>Prototype: <code>int hash_table_set(hash_table_t *ht, const char *key, const char *value);</code></li>
  <li>Where <code>ht</code> is the hash table you want to add or update the key/value to</li>
  <li><code>key</code> is the key. key can not be an empty string</li>
  <li><code>value</code> is the value associated with the key. value must be duplicated. value can be an empty string</li>
  <li>Returns: <code>1</code> if it succeeded, <code>0</code> otherwise</li>
  <li>In case of collision, add the new node at the beginning of the list</li>
 </ul>
</details>

<details>
 <summary><code>4-hash_table_get.c</code> - Write a function that retrieves a value associated with a key.</summary>
 <ul>
  <li>Prototype: <code>char *hash_table_get(const hash_table_t *ht, const char *key);</code></li>
  <li>Where <code>ht</code> is the hash table you want to look into</li>
  <li>And <code>key</code> is the key you are looking for</li>
  <li>Returns the value associated with the element, or <code>NULL</code> if key couldn’t be found</li>
 </ul>
</details>

<details>
 <summary><code>5-hash_table_print.c</code> - Write a function that prints a hash table.</summary>
 <ul>
  <li>Prototype: <code>void hash_table_print(const hash_table_t *ht);</code></li>
  <li>Where <code>ht</code> is the hash table</li>
  <li>You should print the key/value in the order that they appear in the array of the hash table</li>
  <li>Order: array, list</li>
  <li>Format: see example</li>
  <li>If <code>ht</code> is NULL, don’t print anything</li>
 </ul>
</details>

<details>
 <summary><code>6-hash_table_delete.c</code> - Write a function that deletes a hash table.</summary>
 <ul>
  <li>Prototype: <code>void hash_table_delete(hash_table_t *ht);</code></li>
  <li>Where <code>ht</code> is the hash table</li>
 </ul>
</details>
