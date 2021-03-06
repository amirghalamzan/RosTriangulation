/*created by
*Giuseppe Loianno and Sadat Shaik*/

#ifndef __Tutorials__BufferActions__
#define __Tutorials__BufferActions__


// Include standard headers
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#include <iostream>

#include <vector>


class BufferActions
{
    public:
        static void addObjectToBuffer(float * bufferToAdd, float *colorsToAdd, int numberOfVertices, vector<float> *vertex_buffer_pointer, vector<float> *color_buffer_pointer);
        static void addVec3ToBuffer(int * arrayOfVec3,vector<float> *buffer_pointer, vector<vector<float> > * allVec3s, int numberOfVectorsToAdd);
};

#endif /* defined(__Tutorials__BufferActions__) */