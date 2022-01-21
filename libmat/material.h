#ifndef	 MATERIAL_H
# define	MATERIAL_H

#include "../libray/ray.h"
#include "../shapes/shapes.h"

typedef struct s_material
{
	t_vec3 albedo;
	double fuzz;
	double ir;
	bool (*scatter)(t_ray in, struct s_hit_record rec, t_vec3 *attenuation, t_ray *scattered);
}				t_material;

bool scatter_dielectric(t_ray in, struct s_hit_record rec, t_vec3 *attenuation, t_ray *scattered);
bool scatter_lambertian(t_ray in, struct s_hit_record rec, t_vec3 *attenuation, t_ray *scattered);
bool scatter_metal(t_ray in, struct s_hit_record rec, t_vec3 *attenuation, t_ray *scattered);

#endif