rm *.o *.so *.lib test

gcc -fPIC -c mul.c
gcc -shared -o libadd.so mul.o
gcc -L$(pwd) -Wl,-rpath=$(pwd) -o test main.c -ladd -g

cp mul.h ../thirdparty/linux/include/
cp libmul.so ../thirdparty/linux/lib/x64/
