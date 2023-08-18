# C - Doubly linked lists

> In this project, I dived deep into the art of inserting, deleting, and traversing nodes with finesse in a doubly linked list. It was fun

> Besides, after tackling on of the advanced task which required finding the largest palindrome of a multiplaction I realized that:::::::

> C's speed is truly incomparable to python.

> It's like having a race car in a world of bicycles. C effortlessly solved the challenge in mere seconds, leaving Python to catch up like a grandparent attempting to keep up with the latest dance moves. Even my dear old grandmother ran faster than my Python code!

> I still love python for it's simplicity and fun
## Mandatory

<details>
 <summary> <code>0-print_dlistint.c</code> - Write a function that prints all the elements of a <code>dlistint_t</code> list.</summary>
 <ul>
  <li>Prototype: <code>size_t print_dlistint(const dlistint_t *h);</code></li>
  <li>Return: the number of nodes</li>
  <li>Format: see example</li>
 </ul>
</details>

<details>
 <summary> <code>1-dlistint_len.c</code> - Write a function that returns the number of elements in a linked <code>dlistint_t</code> list.</summary>
 <ul>
  <li>Prototype: <code>size_t dlistint_len(const dlistint_t *h);</code></li>
 </ul>
</details>

<details>
 <summary> <code>2-add_dnodeint.c</code> - Write a function that adds a new node at the beginning of a <code>dlistint_t</code> list.</summary>
 <ul>
  <li>Prototype: <code>dlistint_t *add_dnodeint(dlistint_t **head, const int n);</code></li>
  <li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
 </ul>
</details>

<details>
 <summary> <code>3-add_dnodeint_end.c</code> - Write a function that adds a new node at the end of a <code>dlistint_t</code> list.</summary>
 <ul>
  <li>Prototype: <code>dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);</code></li>
  <li>Return: the address of the new element, or <code>NULL</code> if it failed</li>
 </ul>
</details>

<details>
 <summary> <code>4-free_dlistint.c</code> - Write a function that frees a <code>dlistint_t</code> list.</summary>
 <ul>
  <li>Prototype: <code>void free_dlistint(dlistint_t *head);</code></li>
 </ul>
</details>

<details>
 <summary> <code>5-get_dnodeint_at_index.c</code> - Write a function that returns the nth node of a <code>dlistint_t</code> linked list.</summary>
 <ul>
  <li>Prototype: <code>dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);</code></li>
  <li>where <code>index</code> is the index of the node, starting from 0</li>
  <li>if the node does not exist, return <code>NULL</code></li>
 </ul>
</details>

<details>
 <summary> <code>6-sum_dlistint.c</code> - Write a function that returns the sum of all the data (n) of a <code>dlistint_t</code> linked list.</summary>
 <ul>
  <li>Prototype: <code>int sum_dlistint(dlistint_t *head);</code></li>
  <li>if the list is empty, return 0</li>
 </ul>
</details>


<details>
 <summary> <code>7-insert_dnodeint.c</code> - Write a function that inserts a new node at a given position.</summary>
 <ul>
  <li>Prototype: <code>dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);</code></li>
  <li>where <code>idx</code> is the index of the list where the new node should be added. Index starts at 0</li>
  <li>Returns: the address of the new node, or <code>NULL</code> if it failed</li>
  <li>if it is not possible to add the new node at index <code>idx</code>, do not add the new node and return <code>NULL</code></li>
 </ul>
</details>

<details>
 <summary> <code>8-delete_dnodeint.c</code> - Write a function that deletes the node at index <code>index</code> of a <code>dlistint_t</code> linked list.</summary>
 <ul>
  <li>Prototype: <code>int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);</code></li>
  <li>where <code>index</code> is the index of the node that should be deleted. Index starts at 0</li>
  <li>Returns: 1 if it succeeded, -1 if it failed</li>
 </ul>
</details>


## Advanced tasks

<details>
 <summary> <code>102-result</code> - Find the largest palindrome made from the product of two 3-digit numbers.</summary>
 <ul>
  <li>The largest palindrome made from the product of two 2-digit numbers is <code>9009 = 91 × 99</code>.</li>
  <li>Find the largest palindrome made from the product of two 3-digit numbers.</li>
  <li>Save the result in the file <code>102-result</code></li>
  <li>Your file should contain the exact result, no new line, no extra space</li>
 </ul>
</details>




