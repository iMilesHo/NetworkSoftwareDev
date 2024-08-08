In this video, we'll take a high level look at how all this works.

If you're completely new to programming, then many of these terms will probably be new to you.

The most important thing to remember is that the computer isn't smart at all.

It simply does exactly what it's told to do by the programmer,

and the programmer in this case is you.

A computer program is like a recipe.

If you want to bake a cake, there are a series of tasks that you must execute in a specific order,

otherwise the final product won't be a cake.

Suppose that one of the tasks is to put four eggs in a bowl and mix.

A human might assume that the number of eggs need to be cracked

and only the egg whites should be used.

But that's not necessarily true. They might assume something else. See that's the problem.

A computer would probably put the eggs, shells and all into a bowl and mix them.

So when we write programs, we need to be very, very explicit about

what we want the computer to do.

Otherwise, our result will probably be incorrect.

In order to write programs, we use programming languages.

There are many, many programming languages out there.

In this class, we'll be using C++.

The code we write is called source code.

Source code is generally higher level than computer code

since it needs to be understandable by humans,

and humans aren't very good at reading long streams of zeros and ones.

We write our programs using programming editors.

These editors are like word processors, specifically designed to write

these recipes in a specific programming language.

C++ programs have an extension like .cpp .h .cc

hpp and there are several others.

In this course, we will use .cpp

and .h as the extensions for the code we write.

Just as humans aren't very good at reading computer code,

computers aren't very good at reading source code.

We need to translate the source code to a form that's understandable by the computer.

This form is called object code, and the compiler is the translator.

The c++ compiler is a program that takes as input

C++ source code and produces object code as output.

If the source code has errors, then no object code is produced.

Since our code might depend on code that other programmers wrote,

this is actually a very likely scenario because we want to reuse as much existing code

that's out there as possible.

This makes it easier for us to solve our problems.

So a program called the linker takes our object code

and the object code that exists out there in the form of libraries

and links it all together to form an executable program.

That is a program that we can now run that follows the recipe we told the computer

to do using C++.

Now that our program is complete, we test it to find as many errors as possible,

and we debug it to eliminate those errors.

As you can see, there's a lot going on and understanding

what's going on at this high level is important.

The integrated development environments are programs

that allow you to do everything I just mentioned from a common interface.

Sometimes they make the process seem like magic since all you need to do is click a button

and the entire build process happens.

Let's go over this build process one more time in a visual manner.

First, we use an editor to enter our C++ code or to edit

existing C++ code.

Note that we can have many C++ source files.

In this course, we'll be using a single main.cpp file

until our programs get larger.

Then we'll need several C++ source files to better organize our program.

Production C++ programs can have hundreds and even thousands of source files

and millions of lines of code.

Then we need to compile the C++ code using a C++ compiler.

If the code contains no syntax errors,

then the compiler will generate an object code file

for each C++ source file.

On windows, the object files have .obj extensions,

and on UNIX and mac they will have .o extensions.

Finally, the object files and any libraries that our program

requires must be linked together.

This final step creates an executable file that can run.

On windows, the file extension will be .exe.

And on UNIX and mac, they typically don't have any extensions.

But remember, we're not done yet.

You must test your program to find any logic errors

and debug it to eliminate those errors.

Let's wrap up this video by looking at some of the available IDEs that can help us

with this process.

As mentioned previously,

IDEs are programs that provide an editor a way to compile,

link and execute your source code.

They also often have debuggers that can help you understand your code and fix errors.

Most beginning C++ courses don't cover integrated debuggers at all.

I think this is a mistake and I plan to cover the debugger

once we have the basics of C++ behind us.

IDEs also help us keep our files in sync

and provide hooks to version control systems such as git and subversion.

There are many IDEs available. I've used all the ones listed here and others.

The selection of an IDE for this course was not an easy one.

I wanted an IDE that was free,

cross-platform and had a relatively small hardware requirement to run.

In this course, we'll use CodeLight as the IDE since it meets all of these criteria.

However, there is no perfect IDE.

As a professional developer many times you use

whatever ide is used by the team you're working with,

as a consultant you should learn as many IDEs as you can and always have an editor

command line preference available as well.

As you gain experience in C++, I encourage you to experiment with the various

IDEs and find one that works for you.

Let me talk briefly about the ones that are listed here.

CodeLight, as I mentioned, is the IDE that we're going to use in this course.

It's free. It's cross-platform. It's fast and the memory requirements are minimal.

Code Blocks is also a nice cross-platform IDE.

However, the mac version is pretty buggy and it kept crashing on me all the time.

NetBeans is the oracle IDE.

It's used mainly to develop java code,

but they've got a plug-in for C++. It's actually very good.

It's a great cross-platform IDE.

The problem is that it requires Java jre install and the memory requirements

can be pretty significant.

Same thing with Eclipse it supports many different languages.

It's cross-platform but it's got pretty good memory requirements.

CLion is an IDE by JetBrains.

This is the company that's created Kotlin, intellij, android studio.

This is an awesome IDE. This is my ide of choice,

but it's not free, it's actually quite expensive.

But there's a download available that gives you a 30-day trial. You can try it out and see if you like it.

Dev-C++ is a CC++ windows only environment.

It's small. It's fast and it's a nice IDE but again it's windows only.

KDevelop is a cross-platform, multiple-language IDE.

However, there is no mac binary available.

If you want to use it on mac, you have to build it from the source.

Finally, visual studio and XCode are Microsoft

and apple's development environments respectively.

Visual studio is a great development environment.

It runs on windows only in the C++ version.

They have a mac version of visual studio now but it doesn't support C++.

And XCode is mac only.

Again it's a great development environment. If you're a mac developer,

you're probably already using it for iOS development, mac OS 10 development,

swift development and so forth.

But as I mentioned, it's mac only but it's a great development environment.

There are many more IDEs available.

If you find one you like and you think others in the course should know about it,

please post that information about the IDE in the course forum.

Well, that wraps up this video. I hope you now have a

better understanding of the build process in C++

and how IDEs can help make programmers more productive.
