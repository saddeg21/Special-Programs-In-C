# POWER OF INTEGER
If you want to take power-exponent of a number, then you should follow these rules:
-If the exponent is negative, then divide 1 to exponent times of base
-If the exponent is positive, then multiply 1 to exponent times of base

For the negative values, we need to use __DOUBLE__ datatype at C. Because with that datatype you can work on fractional numbers and thats what we need.
First things first:
- Create two variables as __int power=1__ and __double powernegative = 1.0__
- If the exponent is bigger than 0
   -- power=power*base and exponent-- until exponent=0;
- If the exponent is less than 0
   -- powernegative=powernegative*(1.0/base) and exponent++ until exponent = 0;
- If the exponent is equal to 0
   -- The result is always 1

## DIAGRAM

![fibonacci-values (1)](https://user-images.githubusercontent.com/89015461/183956931-882354c2-aabc-49a7-9b43-1064c20a49fa.jpg)

## ILLUSTRATION

![power of an integer](https://user-images.githubusercontent.com/89015461/183956816-74cfc9c8-4b6b-4a0d-9900-0bb66fe39f39.png)
