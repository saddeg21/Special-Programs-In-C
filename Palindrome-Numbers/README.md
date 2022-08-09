# PALINDROME NUMBERS
Palindrome numbers mean that if the reverse of a number is exactly equivelant of the number.

We can do that by following these steps:
- Declare and define variables for "number","quotient","remainder","result"
- Initialize result variable to 0 / It will prevent bugs.
- Make user to provide an input for "number" variable and assign it.
- Create a copy of number by assigning its value to quotient
- Create a while loop that checks whether "quotient" variable is 0 or not.
- If not:
   - divide quotient to 10 and assign to remainder to "remainder" variable
   - assign result variable to result multiplied by then + remainder
   - assign quotient to quotient of quotient variable divided by 10
- After the checkings,
   - If result is equal to number variable,then print true
   - else print false

##Diagram

![Palindrome](https://user-images.githubusercontent.com/89015461/183647807-dc3d16ce-1e18-49f6-9874-beb0d2b02058.png)
