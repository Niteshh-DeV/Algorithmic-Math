# Algorithmic-Math

A concise collection of numerical algorithms implemented in C, focused on root-finding and related methods (for example Newton–Raphson and Secant) with simple command-line examples.

Features
- Implementations of root-finding methods (Newton–Raphson, Secant, Bisection, etc.).
- Small, readable C programs intended for learning and experimentation.
- Simple I/O and command-line usage for interactive testing.

Building
- Requirements: GCC (or compatible C compiler) and math library.
- Compile a single program:
    gcc -std=c11 -O2 -Wall src/<algorithm>.c -o bin/<algorithm> -lm
- If a Makefile is provided, build all with:
    make

Usage
- Run a compiled program and follow on-screen prompts or pass arguments.
- Each program typically asks for an initial guess or interval, tolerance, and maximum iterations.

Contributing
- Open issues or submit pull requests with clear descriptions and simple tests.
- Keep implementations small and documented; prefer clarity over clever optimizations.

Notes
- This repo is intended for educational use and experimentation with numerical methods.