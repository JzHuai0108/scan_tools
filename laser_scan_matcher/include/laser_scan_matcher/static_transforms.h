#ifndef LASER_SCAN_MATCHER_STATIC_TRANSFORMS_H
#define LASER_SCAN_MATCHER_STATIC_TRANSFORMS_H

#include <tf/transform_datatypes.h>

namespace scan_tools {

tf::Transform get_base_footprint_T_base_scan(std::string model);

tf::Transform get_base_link_T_base_scan(std::string model);

tf::Transform get_base_link_T_laser(std::string model);

tf::Transform get_base_scan_T_laser(std::string model);

tf::Transform get_base_link_T_base_footprint(std::string model);

}  // namespace scan_tools

#endif