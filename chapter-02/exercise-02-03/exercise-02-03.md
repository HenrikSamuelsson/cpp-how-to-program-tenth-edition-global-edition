# Solution Exercise 2.2

## a)

Declaration of four variables of type int, each initialized to 0:

```cpp
int c{0}, thisIsAVariable{0}, q76354{0}, number{0};
```

## b)

Statement that prompt the user to enter an integer:

```cpp
std::cout << "Enter an integer: ";
```

## c)

Code to get a value from the user, add 10 to it, and then print it:

```cpp
int a{0};
std::cin >> a;
a = a + 10;
std::cout << a;
```

## d)

Code that check if a variable is greater than 15, and if so subtract 5 from value, and finally print the value.

```cpp
if (a > 0) {
  a = a - 5;
}
std::cout << a;
```

## e)

Code that prints a message on one line:

```cpp
std::cout << "This is a C++ program" << "\n";
```

## f)

Code that prints a message on two lines:

```cpp
std::cout << "This is a C++" << "\n" << "program" << "\n";
```

## g)

Code that prints a message with each word on a separate line:

```cpp
std::cout << "This"    << "\n"
          << "is"      << "\n"
          << "a"       << "\n"
          << "C++"     << "\n"
          << "program" << "\n";
```

Or alternatively this more compact but less readable version:

```cpp
std::cout << "This\nis\na\nC++\nprogram\n";
```

## h)

Code that prints a message with each word separated by a tab:

```cpp
std::cout << "This"    << "\t"
          << "is"      << "\t"
          << "a"       << "\t"
          << "C++"     << "\t"
          << "program" << "\n";
```

Or alternatively this more compact but less readable version:

```cpp
std::cout << "This\tis\ta\tC++\tprogram\n";
```
