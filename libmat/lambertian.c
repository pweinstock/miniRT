#include "mat.h"
#include <stdio.h>

bool scatter_lambertian(t_ray in, struct s_hit_record rec, t_vec3 *attenuation, t_ray *scattered)
{
	t_vec3 scatter_direction;

	t_vec3 inv_strahl = unit_vector(invert(in.dir));//invert(in.dir); //R
	t_vec3 fl_ri = rec.normal;			//N
	scatter_direction = minus_vec_vec(multiply_vec_doub(multiply_vec_doub(fl_ri, 2), dot(fl_ri, inv_strahl)), inv_strahl);

	// scatter_direction = plus_vec_vec(rec.normal, random_unit_vector());
	// dprintf(2, "normal    %f %f %f \n ",rec.normal.v[0],rec.normal.v[1],rec.normal.v[2]);
	// dprintf(2, "direction %f %f %f \n ",scatter_direction.v[0],scatter_direction.v[1],scatter_direction.v[2]);
	// t_vec3 scatter_direction = rec.normal;


	if(near_zero(scatter_direction))
	{
		scatter_direction = rec.normal;
	}
	transmitted(&scattered->origin, &rec.p);
	transmitted(&scattered->dir, &scatter_direction);
	transmitted(attenuation, &rec.material->albedo);
	(void)in;
	return TRUE;
}

// t_vec   ReflectRay(t_vec R, t_vec N) // N=normierte von center vum schnitt punkt R invertierte strhlen richtung ramera
// {
//     return (vec_sub(vec_mult(vec_mult(N, 2), dot(N, R)), R));
// }
