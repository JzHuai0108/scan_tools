

#include "polar_scan_matcher/psm_node.h"

int main (int argc, char** argv)
{
  ros::init(argc, argv, "PolarScanMatching Node");
  PSMNode psmNode;
  ros::spin();
}
