# Simple-Ray-Tracing-Renderer

## Directory (Probably should move most of this stuff to the wiki...)
- [Project Description/Outline](#project-description)
- [Extra TODOs](#extra-todos)
- [Journal](#project-journal)
- [Run Instructions](#run-instructions)

## Project Description
A simple ray tracing renderer, pretty basic but mostly just used as a learning tool for myself.

I will be following this [guide](https://raytracing.github.io/books/RayTracingInOneWeekend.html) to help me implement methods I have only read about till now.  This is my first go at making any kind of renderer from scratch.

Done completely on the CPU as implementation is my goal from top to bottom; not necessarily deal with drivers, GPU communication, optimize for efficiency etc (at least not yet).

I'll try to document a few thoughts as I progress below.

## Extra TODOs
- NOTE: I have no idea what I'm really stepping into with most of these but they are all being treated as extra challenges, I'll try to assign a difficulty rating to each one but, I have a feeling they will all change...
- Change Progress Indicator to Progress Bar [EASY]\
Description: No need for elaboration.\
Status: Almost done already.
- GPU Render [HARD]\
Description: Make the GPU (if available) run the computation.\
Status: Have not even looked into it.
- Importing fbx and obj files into scene [HARD]\
Description: Extract appropriate data from .obj and/or .fbx files to put objects in a scene.\
Status: Nope, will start after natural end of project
- Subsurface Scattering on certain materials/objects [HARD]\
Description: \
Status: Nope, will start after natural end of project

## Project Journal

### Day 01
Wanted to get started even though I didn't have much time today. At the very least, this should propel me into getting a more sizable amount done tomorrow!
Haven't written any C or C++ in a long time but thankfully it didn't take too long for me to get back into it. 
Just made an initial output image in the form of a ppm file (converted into png below) and a progress indicator which will be necessary later when the renders start to take a while.\
\
*Reminder to change the progress indicator to a Progress bar for fun? [STATUS: IN PROGRESS]*

![image](https://user-images.githubusercontent.com/56895013/135204030-c552c9b8-6c61-4be9-b0dd-851300b42a70.png)

### Day 02
Decided to focus on another project for today but didn't want to completely skip out on this for a whole day so I read up on some old notes/textbook sections pertaining to ray tracing such as newtons method for root finding and algorithms for the surface intersections of rays with primitives.\
Will definitely get a good few sections of actual implementation done tomorrow...hopefully...

### Day 03
Added in utility header files for things like storing color and geometric vectors.\
Started a progress bar to replace the progress indicator - kinda works but a little wonky, I'll continue working on it as the project goes along. \
Created a ray class that computes the "rays" and the color at various parts of each ray.  Oddly enough, I found implementation of this more simple than I anticipated, probably because I'm used to not having the time to study algorithms before I have to implement them in school projects so I usually dig into them as I write the code.\
I also realized that unless I feel comfortable going beyond my original scope, I will likely not have absorbed much. So, with that in mind, I will create a new section of this document to list features I will attempt to add either at some point within or at the end of the natural end of the project.  Hopefully these will push me towards a better learning experience and make this project a little more unique.

## Run Instructions
1) I'll add this eventually...
