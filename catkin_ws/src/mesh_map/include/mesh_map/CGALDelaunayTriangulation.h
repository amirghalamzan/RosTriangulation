/*created by
*Giuseppe Loianno and Sadat Shaik*/

#ifndef __Tutorials__CGALDelaunayTriangulation__
#define __Tutorials__CGALDelaunayTriangulation__
#include <stdio.h>
#include <CGAL/Exact_predicates_inexact_constructions_kernel.h>
#include <CGAL/Triangulation_3.h>
#include <CGAL/Delaunay_triangulation_3.h>
#include <CGAL/Polyhedron_3.h>
#include <CGAL/convex_hull_3_to_polyhedron_3.h>
#include <iostream>
#include <fstream>
#include <cassert>
#include <list>
#include <vector>
#include "BufferActions.h"
#include <ros/console.h>
#include "ros/ros.h"


typedef CGAL::Exact_predicates_inexact_constructions_kernel K;
typedef CGAL::Delaunay_triangulation_3<K>      Triangulation;
typedef Triangulation::Cell_handle    Cell_handle;
typedef Triangulation::Vertex_handle  Vertex_handle;
typedef Triangulation::Locate_type    Locate_type;
typedef Triangulation::Point          Point;
typedef CGAL::Polyhedron_3<K>	      Polyhedron_3;
typedef Polyhedron_3::Vertex_iterator Vertex_iterator;
typedef Polyhedron_3::Halfedge_around_facet_circulator HF_circulator;

typedef CGAL::Triangulation_3<CGAL::Epick, CGAL::Default> Triangulation_3;

using namespace std;

class CGALDelaunay
{
    public:
        static void TriangulateUsingCGAL(vector<vector<float> > * PointsToBeInserted, Triangulation * T, vector<float> *bufferPointer, int*totalVertices);
};

#endif