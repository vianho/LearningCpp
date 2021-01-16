# Primitive Data Types

Source: http://www.cplusplus.com/doc/tutorial/variables/


## Data Types

tree format: <br>
|- group name <br>
&emsp;|- type name 1 (size/precision) <br>
&emsp;|- type name 2 (size/precision) 
 
<br>

- Character types
  - `char` (exactly 1 byte, >= 8 bits)
  - `char16_t` (not smaller than `char`, >= 16 bits)
  - `char32_t` (not smaller than `char16_t`, >= 32 bits)
  - `wchar_t` (can represent the largest supported character set)
- Integer types (signed)
  - `signed char` (same size as `char`, >= 8 bits)
  - `signed short int` (not smaller than `char`, >= 16 bits)
  - `signed int` (not smaller than `short`, >= 16 bits)
  - `signed long int` (not smaller than `int`, >= 32 bits)
  - `signed long long int` (not smaller than `long`, >= 64 bits)
- Integer types (unsigned) [size same as signed int]
  - `unsigned char`
  - `unsigned short int`
  - `unsigned int`
  - `unsigned long int`
  - `unsigned long long int`
- Floating-point types
  - `float`
  - `double` (precision not less than float)
  - `long double` (precision not less than double)
- Boolean types
  - `bool`
- Void types
  - `void` (no storage)
- Null pointer
  - `decltype(nullptr)`

<br>

---

Type sizes above are expressed in bits; the more bits a type has, the more distinct values it can represent, but at the same time, also consumes more space in memory:

| Size | Unique representable values | Notes |
|------|-----------------------------|-------|
|8-bit |                        256  |2^8    |
|16-bit|                     65,536  |2^16   |
|32-bit|              4,294,967,296  |2^32   |
|64-bit| 18,446,744,073,709,551,616  |2^64   |

<br>

---
## Operators

- Assignment operator
- Arithmetic operators
  - Addition (+)
  - Subtraction (-)
  - Multiplication (*)
  - Division (/)
  - Modulo (%)
- Compount assignment (`+=`, `-=`, `*=`, `/=`, `%=`, `>>`=, `<<`=, `&=`, `^=`, `|=`)
- Increment and Decrement (`++`, `--`)
- Relational and comparison operators
  - equal to
  - not equal to
  - less than
  - less than or equal to
  - greater than
  - greater than or equal to
- Logical operators
  - not (!)
  - and (&&)
  - or (||)
- Conditional ternary operator (`?`)
  - `condition ? result1 : result2`
- Comma operator<br>
  The comma operator (,) is used to separate two or more expressions that are included where only one expression is expected. When the set of expressions has to be evaluated for a value, only the right-most expression is considered.
  
  For example, the following code:
  `a = (b=3, b+2);`
  would first assign the value 3 to b, and then assign b+2 to variable a. So, at the end, variable a would contain the value 5 while variable b would contain value 3.
- Bitwise operators
  | operator | asm equivalent | description                      |
  |----------|----------------|----------------------------------|
  | &        | AND            | Bitwise AND                      |
  | \|       | OR             | Bitwise inclusive OR             |
  | ^        | XOR            | Bitwise exclusive OR             |
  | ~        | NOT            | Unary complement (bit inversion) |
  | <<       | SHL            | Shifts bits left                 |
  | >>       | SHR            | Shifts bits right                | 
- Explicit type casting operator<br>
  Type casting operators allow to convert a value of a given type to another type.
  ```cpp
  int i;
  float f = 3.14;
  // type casting method 1
  i = (int) f;
  // type casting method 2
  i = int (f);
  ```
- sizeof<br>
  This operator accepts one parameter, which can be either a type or a variable, and returns the size in bytes of that type or object
  ```cpp
  x = sizeof(char);
  ```

<br>

Precedence of operators<br>
When an expression has two operators with the same precedence level, grouping determines which one is evaluated first: either left-to-right or right-to-left.<br>
Enclosing all sub-statements in parentheses (even those unnecessary because of their precedence) improves code readability.

| Level | Precedence group     | Operator   | Description                 | Grouping      |
|-------|----------------------|------------|-----------------------------|---------------|
|1      | Scope                | ::         | scope qualifier             | Left-to-right |
|2      | Postfix (unary)      | ++ --      | postfix increment/decrement | Left-to-right |
||                             | ()         | functional forms ||
||                             | []         | subscript ||
||                             | . ->       | member access ||
|3      | Prefix (unary)       | ++ --      | prefix increment/decrement   | Right-to-left |
||                             | ~ !        | bitwise NOT / logical NOT ||
||                             | + -        | unary prefix ||
||                             | & *        | reference / dereference ||
||                             | new delete | allocation / deallocation ||
||                             | sizeof     | parameter pack ||
||                             | (type)     | C-style type-casting ||
|4      | Pointer-to-member    | .* ->*     | access pointer               | Left-to-right |
|5      | Arithmetic: scaling  | * / %      | multiply, divide, modulo     | Left-to-right |
|6      | Arithmetic: addition | + -        | addition, subtraction        | Left-to-right |
|7      | Bitwise shift        | << >>      | shift left, shift right      | Left-to-right |
|8      | Relational           | < > <= >=  | comparison operators         | Left-to-right |
|9      | Equality             | == !=      | equality/inequality          | Left-to-right |
|10     | And                  | &          | bitwise AND                  | Left-to-right |
|11     | Exclusive or         | ^          | bitwise XOR                  | Left-to-right |
|12     | Inclusive or         | \|         |  bitwise OR                  | Left-to-right |
|13     | Conjunction          | &&         | logical AND                  | Left-to-right |
|14     | Disjunction          | \|\|       | logical OR                   | Left-to-right |
|15     | Assignment-level expressions | = *= /= %= += -= >>= <<= &= ^= \|=  | assignment/compound assignment | Right-to-left |
||                             | ?:         | conditional operator ||
|16     | Sequencing           | ,          | comma separator              | Left-to-right |


---