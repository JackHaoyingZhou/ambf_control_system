// Generated by gencpp from file rbdl_server/RBDLInverseKinimaticsRequest.msg
// DO NOT EDIT!


#ifndef RBDL_SERVER_MESSAGE_RBDLINVERSEKINIMATICSREQUEST_H
#define RBDL_SERVER_MESSAGE_RBDLINVERSEKINIMATICSREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Point.h>

namespace rbdl_server
{
template <class ContainerAllocator>
struct RBDLInverseKinimaticsRequest_
{
  typedef RBDLInverseKinimaticsRequest_<ContainerAllocator> Type;

  RBDLInverseKinimaticsRequest_()
    : model_name()
    , body_name()
    , target()  {
    }
  RBDLInverseKinimaticsRequest_(const ContainerAllocator& _alloc)
    : model_name(_alloc)
    , body_name(_alloc)
    , target(_alloc)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _model_name_type;
  _model_name_type model_name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _body_name_type;
  _body_name_type body_name;

   typedef  ::geometry_msgs::Point_<ContainerAllocator>  _target_type;
  _target_type target;





  typedef boost::shared_ptr< ::rbdl_server::RBDLInverseKinimaticsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rbdl_server::RBDLInverseKinimaticsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RBDLInverseKinimaticsRequest_

typedef ::rbdl_server::RBDLInverseKinimaticsRequest_<std::allocator<void> > RBDLInverseKinimaticsRequest;

typedef boost::shared_ptr< ::rbdl_server::RBDLInverseKinimaticsRequest > RBDLInverseKinimaticsRequestPtr;
typedef boost::shared_ptr< ::rbdl_server::RBDLInverseKinimaticsRequest const> RBDLInverseKinimaticsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rbdl_server::RBDLInverseKinimaticsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rbdl_server::RBDLInverseKinimaticsRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rbdl_server

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'geometry_msgs': ['/usr/local/MATLAB/R2021a/sys/ros1/glnxa64/ros1/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/usr/local/MATLAB/R2021a/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg', '/usr/local/MATLAB/R2021a/sys/ros1/glnxa64/ros1/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rbdl_server::RBDLInverseKinimaticsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rbdl_server::RBDLInverseKinimaticsRequest_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rbdl_server::RBDLInverseKinimaticsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rbdl_server::RBDLInverseKinimaticsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rbdl_server::RBDLInverseKinimaticsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rbdl_server::RBDLInverseKinimaticsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rbdl_server::RBDLInverseKinimaticsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "63ad227e0cf02f41a2dc7cb1e1426068";
  }

  static const char* value(const ::rbdl_server::RBDLInverseKinimaticsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x63ad227e0cf02f41ULL;
  static const uint64_t static_value2 = 0xa2dc7cb1e1426068ULL;
};

template<class ContainerAllocator>
struct DataType< ::rbdl_server::RBDLInverseKinimaticsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rbdl_server/RBDLInverseKinimaticsRequest";
  }

  static const char* value(const ::rbdl_server::RBDLInverseKinimaticsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rbdl_server::RBDLInverseKinimaticsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "string model_name\n"
"string body_name\n"
"geometry_msgs/Point target\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::rbdl_server::RBDLInverseKinimaticsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rbdl_server::RBDLInverseKinimaticsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.model_name);
      stream.next(m.body_name);
      stream.next(m.target);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RBDLInverseKinimaticsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rbdl_server::RBDLInverseKinimaticsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rbdl_server::RBDLInverseKinimaticsRequest_<ContainerAllocator>& v)
  {
    s << indent << "model_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.model_name);
    s << indent << "body_name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.body_name);
    s << indent << "target: ";
    s << std::endl;
    Printer< ::geometry_msgs::Point_<ContainerAllocator> >::stream(s, indent + "  ", v.target);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RBDL_SERVER_MESSAGE_RBDLINVERSEKINIMATICSREQUEST_H