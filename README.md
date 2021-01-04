# rg3d

Contains implementations, experimentations, and learnings from writing non accelerated, 3D graphics pipelines from scratch. 

**Intro**

GPU's these days are amazing - and I 
feel that to get the best out of them, and to truly understand (to the degree that the manufacturers want us to, mind) how they work, one should experience, and work with first hand, the abstractions, workflows, and functionality that the GPU replaces and/or accelerates. Hence the rg3d repo.   

I do sometimes wonder that the GPU is used a lot of the time, not because it is actually needed, but because it is there and "that is just how we do it now".
By taking a peek behind the curtain, I hope to develop a greater appreciation for the graphics hardware that we put into our computers, but also, conversely, gain some insight into where it can be put to some differing uses, or set it to task on operations that aren't so standard.

With Vulkan being the ermerging force that it is, I do feel these experimentations will put me on a better footing in being able to eek out the full potential 
of next gen-graphics. 

**Implementation(s)? Plural?**

Correct. This, for me, is mainly a (very) deep learning exercise. Knowledge is power, and I want to know as much as I possibly can about this 'problem' domain.

In brief, here are the areas I want to explore:

*I want to compare an OOP approach to a purely procedural approach. How different is it, implementing graphics pipelines in C, as opposed to C++? 

*I also want to write it in Common Lisp. There are many awe inspiring things about the language and I am keen to play about with it Common Lisp too. In all probability it will be slow, I have no idea yet, but it sure as hell will be fun. How could CLOS (Common Lisp Object System) be used? To what extent can we leveredge macro programming alla Let Over Lambda? 

*I want to write my own renderer, but also experiment with differing abstractions and design choices too. This is an engineering discipline after all, and engineering trade offs will have to be made. I just want to make them knowing why, and what the consequences are.


This is an itch that needs to be scratched, and I'm taking the biggest scratching stick I can get my hands on. 

 








