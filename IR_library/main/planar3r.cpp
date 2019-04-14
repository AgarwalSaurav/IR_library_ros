#include <Planar3R.hpp>
#include <iostream>
int main(int argc, char ** argv) {
	IRlibrary::Planar3R obj(2, 3, 4);
	IRlibrary::Vec3 q = {M_PI/3., M_PI/6., M_PI/4. };
	obj.setConfig(q);
	auto xy1 = obj.getX();
	IRlibrary::Vec3 initial_thetaList = q;
	initial_thetaList[0] -= M_PI/180.;
	initial_thetaList[1] -= M_PI/180.;
	initial_thetaList[2] -= M_PI/180.;
	obj.inverseKinematics_numerical(initial_thetaList, xy1);
	auto q1 = obj.getConfig();
	std::cout << q[0] << " " << q[1] << " " <<q[2] << std::endl;
	std::cout << q1[0] << " " << q1[1]  << " " <<q1[2]<< std::endl;
	return 0;
}

