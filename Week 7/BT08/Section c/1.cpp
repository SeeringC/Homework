#include <iostream>
// a.
void reverse(char a[])
{
   int length = 0;
   while (a[length] != '\0')
   {
      length++;
   }

   int start = 0;
   int end = length - 1;

   while (start < end)
   {
      char temp = a[start];
      a[start] = a[end];
      a[end] = temp;

      start++;
      end--;
   }
}

//b.
void delete_char(char a[], char c)
{
   int i = 0;
   int j = 0;

   while (a[i] != '\0')
   {
      if (a[i] != c)
      {
         a[j] = a[i];
         j++;
      }

      i++;
   }

   a[j] = '\0';
}
//c.
void pad_right(char a[], int n)
{
   int length = 0;
   while (a[length] != '\0')
   {
      length++;
   }

   if (length >= n)
   {
      return;
   }

   while (length < n)
   {
      a[length] = ' ';
      length++;
   }

   a[length] = '\0';
}

//d.
void pad_left(char a[], int n)
{
   int length = 0;
   while (a[length] != '\0')
   {
      length++;
   }

   if (length >= n)
   {
      return;
   }

   int shift = n - length;
   int i = length;

   while (i >= 0)
   {
      a[i + shift] = a[i];
      i--;
   }

   i = 0;
   while (i < shift)
   {
      a[i] = ' ';
      i++;
   }
}

//e.
void truncate(char a[], int n)
{
   int length = 0;
   while (a[length] != '\0')
   {
      length++;
   }

   if (length <= n)
   {
      return;
   }

   a[n] = '\0';
}

//f.
bool is_palindrome(char a[])
{
   int length = 0;
   while (a[length] != '\0')
   {
      length++;
   }

   int start = 0;
   int end = length - 1;

   while (start < end)
   {
      if (a[start] != a[end])
      {
         return false;
      }

      start++;
      end--;
   }

   return true;
}

//g.
void trim_left(char a[])
{
   int i = 0;
   int j = 0;

   while (a[i] == ' ')
   {
      i++;
   }

   while (a[i] != '\0')
   {
      a[j] = a[i];
      i++;
      j++;
   }

   a[j] = '\0';
}

//h.
void trim_right(char a[])
{
   int length = 0;
   while (a[length] != '\0')
   {
      length++;
   }

   int i = length - 1;
   while (i >= 0 && a[i] == ' ')
   {
      a[i] = '\0';
      i--;
   }
}




