rm *.o *.so *.lib test

gcc -fPIC -c add.c
gcc -shared -o libadd.so add.o
gcc -L$(pwd) -Wl,-rpath=$(pwd) -o test main.c -ladd -g

cp add.h ../thirdparty/linux/include/
cp libadd.so ../thirdparty/linux/lib/x64/
