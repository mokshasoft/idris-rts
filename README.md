# libsel4-idris-rts - RTS Library for Building Idris apps on seL4
The Idris RTS ported to the seL4 microkernel

# How to use this library?
There are at least two projects using this library:
- [Bare-metal apps in Idris](https://github.com/mokshasoft/idris-bare-metal-manifest.git).
- [Idris apps on seL4](https://github.com/mokshasoft/sel4-idris-manifest).

# Contribution
Contributions are very welcome! Patches in this repository should probably also be upstreamed to the [Idris repository](https://github.com/idris-lang/Idris-dev), to the rts folder. Before creating a pull request, please make sure that at least the following works without errors:

- git diff --check
- Make sure that the example apps compile and run in the sel4-idris-manifest project.

# Developed by [mokshasoft.com](http://www.mokshasoft.com/)
