#ifndef MESH_H
#define MESH_H

#include "vector.h"
#include "triangle.h"
#include "upng.h"

////////////////////////////////////////////////////////////////////////////////
// Define a struct for dynamic size meshes, with array of vertices and faces
////////////////////////////////////////////////////////////////////////////////
typedef struct {
    vec3_t* vertices;   // dynamic array of vertices
    face_t* faces;      // dynamic array of faces
    upng_t *texture;
    vec3_t rotation;    // rotation with x, y, and z values
    vec3_t scale;       // scale with x, y, and z values
    vec3_t translation; // translation with x, y, and z values
} mesh_t;

void load_obj_file_data(mesh_t* mesh, char* filename);
void load_mesh_png_data(mesh_t *mesh, char *filename);
void load_mesh(char *obj_filename, char *png_filename, vec3_t scale, vec3_t translation, vec3_t rotation);

int get_num_meshes(void);

mesh_t* get_mesh(int mesh_index);
void free_meshes(void);

#endif
