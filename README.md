# 📝 ft_printf

## Description

The printf function in C is used to print formatted output to the console or write it to a file. It has a format string that specifies how the output should be formatted, and it can include placeholders known as format specifiers.

| Flag   | Description														 			|
|-------|-----------------------------------------------------------------------------------|
| **%c** | Prints a single character.       													|
| **%s** | Prints a string (as defined by the common C convention).											|
| **%p** | The void * pointer argument has to be printed in hexadecimal format.								|
| **%d** | Prints a decimal (base 10) number.																	|
| **%i** | Prints an integer in base 10.               											|
| **%u** | Prints an unsigned decimal (base 10) number.               									|
| **%x** | Prints a number in hexadecimal (base 16) lowercase format.                				|
| **%X** | Prints a number in hexadecimal (base 16) uppercase format.                				|
| **%%** | Prints a percent sign.                 											|

### Return value
◦ Returns the number of printed characters.
◦ We don't implement the buffer management of the original printf().

### Function prototype

```C
int ft_printf(char const *s, ...);
```

## Allowed functions

| Function   | Description                                                                                                      |
|------------|------------------------------------------------------------------------------------------------------------------|
| `malloc`   | Allocates a block of memory of the specified size in bytes. Returns a pointer to the allocated memory or `NULL`. |
| `free`     | Deallocates the previously allocated memory block.                                                               |
| `write`    | Writes data to a file descriptor. Returns the number of bytes written or -1 on error.                           |
| `va_start` | Initializes the argument list for variadic functions.                                                            |
| `va_arg`   | Retrieves the next argument from the variable argument list.                                                     |
| `va_copy`  | Makes a copy of a `va_list` object.                                                                               |
| `va_end`   | Cleans up the `va_list` object after variable argument processing is complete.                                   |
| libft      | Functions from the libft project                                                                                 |

# Found any issue? Contact me! 📥

◦ Email: fduque-a@student.42porto.com

# Might interest you!

### - Check my 42 common-core progress ↙️

[HERE](https://github.com/fduquea/42cursus)

### - My 42 intra profile ↙️
[HERE](https://profile.intra.42.fr/users/fduque-a)
