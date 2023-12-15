# C - Search Algorithms


## Mandatory tasks

<details>
<summary><code>0-linear.c</code>
Write a function that searches for a value in an array of integers using the Linear search algorithm</summary>

- Prototype : i`nt linear_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in array
- And `value` is the value to search for
- Your function must return the first index where value is located
- If `value` is not present in array or if array is `NULL`, your function must -` return -1`
- Every time you compare a value in the array to the value you are - searching, you have to print this value (see example below)
</details>

<details><summary><code>1-binary.c</code>Write a function that searches for a value in a sorted array of integers using the Binary search algorithm </summary>

- Prototype : `int binary_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in array
- And valu`e is the value to search for
- Your function must return the `index` where value is located
- You can assume that array will be sorted in ascending order
- You can assume that value won’t appear more than once in array
- If value is not present in array or if array is `NULL`, your function must - `return -1`
- You must print the array being searched every time it changes. (e.g. at - the beginning and when you search a subarray) (See example)
</details>

## Advanced
<details><summary><code>100-jump.c</code>Write a function that searches for a value in a sorted array of integers using the Jump search algorithm
</summary>

- Prototype : `int jump_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in array
- And `value` is the value to search for
- Your function must return the first index where value is located
- You can assume that array will be sorted in ascending order
- If `value` is not present in array or if array is `NULL`, your function must - return -1
- You have to use the square root of the size of the array as the jump - step.
- You can use the `sqrt()` function included in `<math.h>` (don’t forget to - compile with `-lm`)
- Every time you compare a value in the array to the value you are - searching for, you have to print this value (see example)
</details>


<details><summary><code>102-interpolation.c</code>
Write a function that searches for a value in a sorted array of integers using the Interpolation search algorithm</summary>

- Prototype : `int interpolation_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in array
- And `value` is the value to search for
- Your function must return the first index where value is located
- You can assume that array will be sorted in ascending order
- If value is not present in array or if array is `NULL`, your function must - `return -1`
- To determine the probe position, you can use : `size_t pos = low + - (((double)(high - low) / (array[high] - array[low])) * (value - array- [low]))`
- Every time you compare a value in the array to the value you are - searching, you have to print this value (see example below)
</details>


<details> <summary><code>103-exponential.c</code>
Write a function that searches for a value in a sorted array of integers using the Exponential search algorithm </summary>

- Prototype : `int exponential_search(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in array
- And value is the value to search for
- Your function must return the first index where value is located
- You can assume that array will be sorted in ascending order
- If value is not present in array or if array is `NULL`, your function must `return -1`
- You have to use powers of 2 as exponential ranges to search in your array
- Every time you compare a value in the array to the value you are searching for, you - have to print this value (See example)
- Once you’ve found the good range, you need to use a binary search:
- Every time you split the array, you have to print the new array (or subarray) - you’re searching in (See example) </details>


<br>

You may have noticed that the basic binary search does not necessarily return the index of the first value in the array (if this value appears more than once in the array). In this exercise, you’ll have to solve this problem.

<details><summary><code>104-advanced_binary.c</code>Write a function that searches for a value in a sorted array of integers.
</summary>

- Prototype : `int advanced_binary(int *array, size_t size, int value);`
- Where `array` is a pointer to the first element of the array to search in
- `size` is the number of elements in array
- And value is the value to search for
- Your function must return the index where value is located
- You can assume that array will be sorted in ascending order
- If value is not present in array or if array is `NULL`, your function must return -1
- Every time you split the array, you have to print the new array (or subarray) - you’re searching in (See example)
- You have to use recursion. You may only use one loop (while, for, do while, etc.) - in order to print the array
</details>

<details><summary><code>105-jump_list.c</code>
Write a function that searches for a value in a sorted list of integers using the Jump search algorithm.</summary>

- Prototype : `listint_t *jump_list(listint_t *list, size_t size, int value);`
- Where `list` is a pointer to the head of the list to search in
- size is the number of nodes in `list`
- And `value` is the value to search for
- Your function must return a pointer to the first node where value is located
- You can assume that list will be sorted in ascending order
- If value is not present in head or if head is NULL, your function must return `NULL`
- You have to use the square root of the size of the list as the jump step.
- You can use the sqrt() function included in `<math.h> `(don’t forget to compile with - `-lm`)
- Every time you compare a value in the list to the value you are searching, you have - to print this value (see example) 
</details>