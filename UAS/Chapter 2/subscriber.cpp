#include <ros/ros.h>
#include <std_msgs/Float64.h>

void myCallback(const std_msgs::Float64& message_holder) {

	ROS_INFO("receive value is: %f", message_holder.data);
}

int main(int argc, char **argv){
	ros::init(argc, argv, "min_subscriber");
	ros::NodeHandle n;
	ros::Subscriber my_subscriber_obj = n.subscribe("topic1", 1, myCallback);
	ros::spin();
	
	return 0;
}
