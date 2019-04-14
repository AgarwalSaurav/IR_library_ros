#include <Jacobian.hpp>

namespace IRlibrary {
/** Computes the body Jacobian Jb (θ) \in R 6×n given a list of joint screws B_i 
 * expressed in the body frame and a list of joint angles.
 */
	JacobianMat JacobianBody (std::vector <ScrewAxis> Blist, std::vector <double> thetaList) {
		size_t n = Blist.size();
		JacobianMat Jb(6, n);

		return Jb;
	}

/** Computes the space Jacobian Js (θ) \in R 6×n given a list of joint screws S_i 
 * expressed in the space frame and a list of joint angles.
 */
	JacobianMat JacobianSpace(std::vector <ScrewAxis> Slist, std::vector <double> thetaList) {
		size_t n = Slist.size();
		JacobianMat Js(6, n);

		return Js;

	}
} /* IRlibrary */
