/*
 * set_string - function that sets the value of a pointer to a char.
 * @s:  pointer to the adderss of strings.
 * @to: string to set value to.
 * Return: nothing.
*/

void set_string(char **s, char *to)
{
	*s = to;
}
