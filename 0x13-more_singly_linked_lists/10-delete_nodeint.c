
/**
 * delete_nodeint_at_index - delete a node in a LL
 * @index: position of node
 * @head: pointer to first element of LL
 *
 * Return: int : 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	listint_t  *next_node;
	unsigned int node_len;

	node_len = listint_len(*head);
	/* check whether position is valid */
	if (index >= node_len)
	{
		return (-1);
	}
	else
	{
		index++;
		/* loop until index is 0 */
		while (index--)
		{
			if (index == 0)
			{
				/* get the next_node */
				next_node = (*head)->next;
				/* free the current node */
				free(*head);
				/* update current pointer to next_node */
				*head = next_node;
			}
			else
			{
				/* assign current pointer to next_pointer */
				head = &(*head)->next;
			}
		}
	}
	return (1);
}

