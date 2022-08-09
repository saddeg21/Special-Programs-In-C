###Diagram

```flow
st=>start: Run the Program
e=>end: End
op1=>inputoutput: How many rows do you
want in your pyramid?(assign to
variable)
op2=>operation: Stuff|current
sub1=>subroutine: print("\n")|invalid
cond=>condition: Check If i<=rows
cond2=>condition: Check If j<=2*rows-1
cond3=>condition: If j>=rows-(i-1) && 
j<=rows+(i-1)
operation=>operation: Return 0
oop1=>operation: printf("*") and increment j
oop2=>operation: printf(" ") and increment j

st->op1(right)->cond
cond(no, right)->operation
cond(yes)->sub1
sub1(right)->cond2
cond2(no,bottom)->cond3
cond2(yes)->cond
cond3(yes)->oop1
cond3(no)->oop2
oop1->cond2
oop2->cond2
operation(right)->e
```
