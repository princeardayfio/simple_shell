# C - Simple Shell 

Simple UNIX command interpreter

## Compilation 

All shell scripts were compiled by 

```shell
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

## Testing 

Shell would work like this in an interactive mode 

```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```

And like this in non-interactive mode

```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

# Authors 

Ardayfio Prince Andrew

Lawrence Adams
