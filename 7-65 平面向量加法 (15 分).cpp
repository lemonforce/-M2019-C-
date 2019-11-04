#include <stdio.h>

struct Point {
	double x;
	double y;
}v1,v2,v3;

int main() {
	scanf("%lf %lf", &v1.x, &v1.y);
	scanf("%lf %lf", &v2.x, &v2.y);
	v3.x = v1.x + v2.x;
	v3.y = v1.y + v2.y;
	if (v3.x < 0.0 && v3.x > -0.05) {
		v3.x = 0.0;
	}
	if (v3.y < 0.0 && v3.y > -0.05) {
		v3.y = 0.0;
	}
	printf("(%.1lf, %.1lf)", v3.x, v3.y);
	return 0;

}