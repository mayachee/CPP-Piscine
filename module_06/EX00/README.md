Convert to: 

    • char
    • int
    • float
    • double

Example :
    Input : 42.0f

    Output :
    - char : '*'
    - int : 42
    - Float: 42.0f
    - Double: 42.0

Another case:
    Input : 0

    Output :
    - char : Non displayable
    - int : 0
    - Float: 0.0f
    - Double: 0.0

cases shoud handle : 

./convert 40.f
    Float: 40.f

./convert -40.f
    Integer: 40 ✅ -> -40
    Float: -40.f
    Double: 0.0


-------->> I should handle this case

➜  ex00 git:(main) ✗ make && ./convert 745665.f
make: Nothing to be done for `all'.
char: '�'
int: 745665
float: 745665.0f
double: 745665.0
