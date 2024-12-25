# helloauto
Simple "Hello World" style program in C packaged using Autotools and friends.
For demonstration of tools, language, systems, etc.

## The following is demonstrated
- Simple C program
- Checking for error conditions
- Creating Makefile using Autotools
- Generating "config.h" using ./configure

## Autotools
Most software developed with Autotools are distributed with a `configure` 
script which generates a `Makefile`. This project is an example Autotools
project so it not distributed with those files. Those files must be built
with Autotools.
For example:
``aclocal``
``autoconf``
``automake --add-missing``
or
``autoreconf --install``

## Building
``$ ./configure``
``$ make``
To create a distribution package:
``$ make distcheck``

## Installing
``$ sudo make install``

## Links
https://blog.sunfishcode.online/bugs-in-hello-world/
https://thoughtbot.com/blog/the-magic-behind-configure-make-make-install
https://medium.com/@evilsapphire_s/how-is-a-hello-world-compiled-in-mingw-gcc-part-1-preprocessing-3e3898e3c11d
https://c-for-dummies.com/blog/?p=3675
https://www.gnu.org/software/automake/manual/html_node/Hello-World.html
https://github.com/github/gitignore/blob/main/Autotools.gitignore
https://stackoverflow.com/questions/12803239/autoreconf-cleanup
https://dansanderson.com/lab-notes/autotools-in-2022/
