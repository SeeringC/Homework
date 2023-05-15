#include <iostream>
#include <cstring>

char* concat(const char* str1, const char* str2)
{

   int length1 = strlen(str1);
   int length2 = strlen(str2);

   char* result = new char[length1 + length2 + 1];

   for (int i = 0; i < length1; i++)
   {
      result[i] = str1[i];
   }

   for (int i = 0; i < length2; i++)
   {
      result[length1 + i] = str2[i];
   }

   result[length1 + length2] = '\0';

   return result;
}

int main()
{
   const char* str1 = "Hello";
   const char* str2 = "World";

   char* result = concat(str1, str2);
   std::cout << "Concatenated string: " << result << std::endl;

   delete[] result; 

   return 0;
}
