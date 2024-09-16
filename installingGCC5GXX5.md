# Installing GCC 5 and G++ 5 via Anaconda on Ubuntu: A Comprehensive Guide

![GCC Logo](https://yourimagelink.com/gcc-logo.png)

**Table of Contents**

- [Introduction](#introduction)
- [Prerequisites](#prerequisites)
- [Step 1: Install Anaconda or Miniconda](#step-1-install-anaconda-or-miniconda)
- [Step 2: Create a New Conda Environment](#step-2-create-a-new-conda-environment)
- [Step 3: Install GCC 5 and G++ 5](#step-3-install-gcc-5-and-g-5)
- [Step 4: Set Up Environment Variables and Aliases](#step-4-set-up-environment-variables-and-aliases)
- [Step 5: Verify the Installation](#step-5-verify-the-installation)
- [Step 6: Adjust Build Tools (Optional)](#step-6-adjust-build-tools-optional)
- [Conclusion](#conclusion)
- [Additional Resources](#additional-resources)

## Introduction

When working with legacy code or specific software dependencies, you might need an older version of the GNU Compiler Collection (GCC), such as GCC 5. Installing older GCC versions on modern systems can be challenging due to compatibility issues and outdated repositories. This guide walks you through installing GCC 5 and G++ 5 using Anaconda on Ubuntu, ensuring you can compile and run your projects without hassle.

## Prerequisites

- **Ubuntu** operating system installed.
- **Anaconda** or **Miniconda** installed. If you haven't installed it yet, you can download it from the [official website](https://www.anaconda.com/products/distribution).

## Step 1: Install Anaconda or Miniconda

If you already have Anaconda or Miniconda installed, you can skip this step.

### Install Anaconda

Download the Anaconda installer for Linux from the [Anaconda Distribution](https://www.anaconda.com/products/distribution) page.

```bash
# Download the installer (replace the link with the latest version)
wget https://repo.anaconda.com/archive/Anaconda3-2023.07-Linux-x86_64.sh

# Run the installer
bash Anaconda3-2023.07-Linux-x86_64.sh
```

### Install Miniconda (Alternative)

If you prefer a minimal installation:

```bash
# Download the installer (replace the link with the latest version)
wget https://repo.anaconda.com/miniconda/Miniconda3-latest-Linux-x86_64.sh

# Run the installer
bash Miniconda3-latest-Linux-x86_64.sh
```

Follow the prompts during installation and restart your terminal or source your profile:

```bash
source ~/.bashrc
```

## Step 2: Create a New Conda Environment

Creating a separate environment ensures that package installations do not interfere with your base system or other projects.

```bash
# Create a new environment named gcc5_env
conda create -n gcc5_env
```

Activate the environment:

```bash
conda activate gcc5_env
```

## Step 3: Install GCC 5 and G++ 5

### Add the conda-forge Channel (Optional)

Adding `conda-forge` expands the available packages, though for this installation, the default channels suffice.

```bash
conda config --add channels conda-forge
```

### Install GCC 5

Install the GNU C Compiler (GCC):

```bash
conda install gcc_linux-64=5.*
```

### Install G++ 5

Install the GNU C++ Compiler (G++):

```bash
conda install gxx_linux-64=5.*
```

**Note:** The `gcc_linux-64` package provides the C compiler (`gcc`), while `gxx_linux-64` provides the C++ compiler (`g++`).

## Step 4: Set Up Environment Variables and Aliases

The compilers installed via Anaconda are prefixed to avoid conflicts with system compilers. We'll set environment variables and aliases for convenience.

### Set Environment Variables

```bash
export CC=$CONDA_PREFIX/bin/x86_64-conda_cos6-linux-gnu-gcc
export CXX=$CONDA_PREFIX/bin/x86_64-conda_cos6-linux-gnu-g++
```

### Create Aliases (Optional)

```bash
alias gcc="$CONDA_PREFIX/bin/x86_64-conda_cos6-linux-gnu-gcc"
alias g++="$CONDA_PREFIX/bin/x86_64-conda_cos6-linux-gnu-g++"
```

Add the above lines to your `~/.bashrc` or `~/.bash_profile` to make them permanent:

```bash
echo 'export CC=$CONDA_PREFIX/bin/x86_64-conda_cos6-linux-gnu-gcc' >> ~/.bashrc
echo 'export CXX=$CONDA_PREFIX/bin/x86_64-conda_cos6-linux-gnu-g++' >> ~/.bashrc
echo 'alias gcc="$CONDA_PREFIX/bin/x86_64-conda_cos6-linux-gnu-gcc"' >> ~/.bashrc
echo 'alias g++="$CONDA_PREFIX/bin/x86_64-conda_cos6-linux-gnu-g++"' >> ~/.bashrc
```

Reload your shell configuration:

```bash
source ~/.bashrc
```

## Step 5: Verify the Installation

### Check GCC Version

```bash
gcc --version
```

**Expected Output:**

```
gcc (GCC) 5.4.0
...
```

### Check G++ Version

```bash
g++ --version
```

**Expected Output:**

```
g++ (GCC) 5.4.0
...
```

### Compile and Run a Test C Program

Create a simple C program:

```c
// test.c
#include <stdio.h>

int main() {
    printf("GCC version: %s\n", __VERSION__);
    return 0;
}
```

Compile and run:

```bash
gcc test.c -o test_c
./test_c
```

**Expected Output:**

```
GCC version: 5.4.0
```

### Compile and Run a Test C++ Program

Create a simple C++ program:

```cpp
// test.cpp
#include <iostream>

int main() {
    std::cout << "G++ version: " << __VERSION__ << std::endl;
    return 0;
}
```

Compile and run:

```bash
g++ test.cpp -o test_cpp
./test_cpp
```

**Expected Output:**

```
G++ version: 5.4.0
```

## Step 6: Adjust Build Tools (Optional)

If you're using build systems like **Make** or **CMake**, ensure they use the correct compilers.

### Using Make

In your `Makefile`, specify the compilers:

```makefile
CC = $(CONDA_PREFIX)/bin/x86_64-conda_cos6-linux-gnu-gcc
CXX = $(CONDA_PREFIX)/bin/x86_64-conda_cos6-linux-gnu-g++
```

Alternatively, pass the variables when invoking `make`:

```bash
make CC=$CC CXX=$CXX
```

### Using CMake

Configure your project to use the specified compilers:

```bash
cmake -DCMAKE_C_COMPILER=$CC -DCMAKE_CXX_COMPILER=$CXX /path/to/your/project
```

## Conclusion

By following these steps, you've successfully installed GCC 5 and G++ 5 using Anaconda on Ubuntu. This setup allows you to compile legacy code that requires older compiler versions without affecting your system's default compilers. The use of a conda environment ensures isolation and easy management of dependencies.

## Additional Resources

- [Anaconda Documentation](https://docs.anaconda.com/)
- [Conda Environment Management](https://docs.conda.io/projects/conda/en/latest/user-guide/tasks/manage-environments.html)
- [GNU Compiler Collection (GCC) Official Website](https://gcc.gnu.org/)
- [CMake Documentation](https://cmake.org/documentation/)
- [Make Documentation](https://www.gnu.org/software/make/manual/make.html)

---

**Disclaimer:** This guide assumes a basic understanding of the Linux command line and familiarity with compiling programs. Always ensure that installing older software versions does not introduce security risks to your system.
