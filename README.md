# pushswap
Sorting integers project using radix method

## Description :
Push swap  is a project where you have 2 stacks. Stack #1 field with non-sorted integers. Stack #2 is empty. You need to sort stack #1 with lowest set of instructions. You can turn in up to 1000 integers
### Instructions :
  * sa (swap a): Swap the first 2 elements at the top of stack a.
  Do nothing if there is only one or no elements.
  * sb (swap b): Swap the first 2 elements at the top of stack b.
  Do nothing if there is only one or no elements.
  * ss : sa and sb at the same time.
  * pa (push a): Take the first element at the top of b and put it at the top of a.
  Do nothing if b is empty.
  * pb (push b): Take the first element at the top of a and put it at the top of b.
  Do nothing if a is empty.
  * ra (rotate a): Shift up all elements of stack a by 1.
  The first element becomes the last one.
  * rb (rotate b): Shift up all elements of stack b by 1.
  The first element becomes the last one.
  * rr : ra and rb at the same time.
  * rra (reverse rotate a): Shift down all elements of stack a by 1.
  The last element becomes the first one.
  * rrb (reverse rotate b): Shift down all elements of stack b by 1.
  The last element becomes the first one.
  * rrr : rra and rrb at the same time.
  
## How it works :
 ![push_swap](https://user-images.githubusercontent.com/91884862/177584674-879ead2c-bf88-4e7f-9ee1-eec9faffef52.gif)
## How to run:
```
https://github.com/nechel11/pushswap.git push_swap
cd push_swap
```
## How to use make:
```
make - ./pushwap file
make clean - to remove .o files
make fclean - to remove .o, .a and ./pushswap files
```
