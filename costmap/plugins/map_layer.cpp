//
// Created by shivesh on 7/1/18.
//

#include "costmap/map_layer.h"

#include <pluginlib/class_list_macros.hpp>

namespace costmap
{
  MapLayer::MapLayer() : Node("map_layer")
  {
    RCLCPP_INFO(this->get_logger(),"FINALLY");
  }

  MapLayer::~MapLayer(){

  }
}

PLUGINLIB_EXPORT_CLASS(costmap::MapLayer, costmap::Layer)
