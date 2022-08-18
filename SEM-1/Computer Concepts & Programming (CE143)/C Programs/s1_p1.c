/*Write  a  C  program  that  will  output  this  passage  by  Michael  Singer.
 Make sure your output looks exactly as shown here.Use Required Escape Sequence and ASCII Value.
 There are three shapes in the output: Smiling Face, Diamond & Heart.
 The ASCII Value for Smiling face is 1.
 The ASCII Value for Diamond is 4.
 The ASCII Value for Heart is 3.*/

#include <stdio.h>

void main()
{
       char a = 1, b = 4, c = 3;

       printf("\n %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c",
              a, b, c, a, b, c, a, b, c, a, b, c, a, b, c, a, b, c, a, b, c, a, b, c, a, b, c, a, b, c, a, b, c, a, b, c, a);
       printf("\n %c \"If you are resisting something, you are feeding it.                  %c", b, b);
       printf("\n %c       Any energy you fight, you are feeding it.                       %c", c, c);
       printf("\n %c               If you are pushing something away,                      %c", a, a);
       printf("\n %c                       You are inviting it to stay.\" by Michael Singer.%c", b, b);
       printf("\n %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c %c",
              a, b, c, a, b, c, a, b, c, a, b, c, a, b, c, a, b, c, a, b, c, a, b, c, a, b, c, a, b, c, a, b, c, a, b, c, a, a, a);
}