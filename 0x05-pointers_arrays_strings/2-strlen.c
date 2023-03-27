int _strlen(char *s)
{
  unsigned int count = 0;
  while (*s != '\0')
  {
      count++;
      s++;
  }
  return  count;
}
