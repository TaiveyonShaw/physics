// engine.h
#ifndef PHYSICS_ENGINE_H
#define PHYSICS_ENGINE_H

typedef struct
{
    float x, y, z;
} Vector3;

typedef struct
{
    float mass;
    Vector3 position;
    Vector3 velocity;
    Vector3 force;
    // Add rotation properties later
} RigidBody;

// Vector operations
Vector3 vector_add(Vector3 a, Vector3 b);
Vector3 vector_subtract(Vector3 a, Vector3 b);
float vector_dot(Vector3 a, Vector3 b);
Vector3 vector_cross(Vector3 a, Vector3 b);

// Physics engine core
void engine_init();
void engine_add_body(RigidBody *body);
void engine_update(float dt);
void engine_cleanup();

#endif // PHYSICS_ENGINE_H