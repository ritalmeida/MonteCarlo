//
// Created by Rita Vieira de Almeida on 22/04/2024.
//

#include <stdbool.h>
#ifndef MONTECARLO_MONTECARLO_H
#define MONTECARLO_MONTECARLO_H

typedef struct {
    double x;
    double y;
} Point;

int orientation(Point p, Point q, Point r);
bool onSegment(Point p, Point q, Point r);
bool doIntersect(Point p1, Point q1, Point p2, Point q2);
bool isInsidePolygon(Point polygon[], int n, Point p);

#endif //MONTECARLO_MONTECARLO_H
