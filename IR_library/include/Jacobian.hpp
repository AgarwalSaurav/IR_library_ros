#ifndef JACOBIAN_HPP
#define JACOBIAN_HPP

#include <vector>
#include <TypeDefs.hpp>
#include <RigidBodyMotion.hpp>

namespace IRlibrary {
	JacobianMat JacobianBody (std::vector <ScrewAxis>, std::vector <double>);
	JacobianMat JacobianSpace (std::vector <ScrewAxis>, std::vector <double>);

} /* IRlibrary */

#endif /* ifndef JACOBIAN_HPP */
