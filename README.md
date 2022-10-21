# Sanitizers

Code sanitizers are systems compiled with the binary to detect illegal behaviour of processes at run-time, with low performance impact and high fidelity.
Although they serve a similar purpose to tools like `valgrind`, they differ in significant ways:
 1. Sanitizers are compiled with the code;
 1. Sanitizers have a much lower performance overhead (Google runs all C/C++ binaries with sanitizers turned on!);
 1. When a sanitizer is triggered, it issues a stack-trace (or error message) and kills the process. This avoids having long chains of errors in valgrind, some of which originate in the same code segment.
 1. You can't _forget_ to run the sanitizers, they are baked into the program.

There are 3 types of sanitizers:
 - Address sanitizer: checks for out-of-bounds accesses, use-after-free, double-free, invalid-frees, some memory leaks
 - Memory sanitizer: checks for use of uninitialized memory
 - UB sanitizer: a subset of C undefined behaviour

This repo has examples of usage of sanitizers.

## How to compile

To use sanitizers, compile your code with `-fsanitize={address,memory,undefined}` (only one sanitizer may run at a time). Adding the `-fno-omit-frame-pointer` option is also required (turns off a specific optimization which give up on important information).

## Warning

Although sanitizers catch bugs in a more reliable way and with more information, they do not catch everything.
Particularly, certain optimizations interfere with their reliability.

If you suspect that the sanitizers are not catching something, fall back on `valgrind`
Before turning in your project run your tests with `valgrind` as well.
