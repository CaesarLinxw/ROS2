// Copyright 2019 Open Source Robotics Foundation, Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <memory>
#include <string>

#include <rclcpp/rclcpp.hpp>

#include <fastcdr/Cdr.h>
#include <fastcdr/FastCdr.h>

#include <sensor_msgs/msg/illuminance.hpp>
#include <sensor_msgs/msg/illuminance__rosidl_typesupport_fastrtps_cpp.hpp>

#include "sensor_msgs_illuminance_pub_sub_type.hpp"

#include "ros2_serial_example/publisher.hpp"
#include "ros2_serial_example/publisher_impl.hpp"
#include "ros2_serial_example/subscription.hpp"
#include "ros2_serial_example/subscription_impl.hpp"

namespace ros2_to_serial_bridge
{

namespace pubsub
{

std::unique_ptr<Publisher> sensor_msgs_illuminance_pub_factory(rclcpp::Node * node, const std::string & topic)
{
    typedef bool (*des_t)(eprosima::fastcdr::Cdr &, sensor_msgs::msg::Illuminance &);
    des_t des = sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize;
    return std::make_unique<PublisherImpl<sensor_msgs::msg::Illuminance>>(node, topic, des);
}

std::unique_ptr<Subscription> sensor_msgs_illuminance_sub_factory(rclcpp::Node * node, topic_id_size_t serial_mapping, const std::string & topic, ros2_to_serial_bridge::transport::Transporter * transporter)
{
    typedef size_t (*getsize_t)(const sensor_msgs::msg::Illuminance &, size_t);
    getsize_t getsize = sensor_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size;
    typedef bool (*ser_t)(const sensor_msgs::msg::Illuminance &, eprosima::fastcdr::Cdr &);
    ser_t ser = sensor_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize;

    return std::make_unique<SubscriptionImpl<sensor_msgs::msg::Illuminance>>(node, serial_mapping, topic, transporter, getsize, ser);
}

}  // namespace pubsub
}  // namespace ros2_to_serial_bridge
