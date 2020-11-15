#include "rbdl_model/BodyParam.h"

BodyParam::BodyParam(YAML::Node bodyNode)
{
    // Declare all the yaml parameters that we want to look for
    Utilities utilities;

    YAML::Node name = bodyNode["name"];
    if(!name.IsDefined()) throwExceptionMessage("name in Body Params");
    name_ = utilities.trimTrailingSpaces(name);

    YAML::Node mass = bodyNode["mass"];
    if(!mass.IsDefined())  throwExceptionMessage("mass in Body Params");
    mass_ = mass.as<double>();
    if(mass_ == 0.0) mass_ = 0.0000001;

    YAML::Node inertia = bodyNode["body_inertia"];
    if(!inertia.IsDefined()) throwExceptionMessage("inertia in Body Params");
//    inertia_ = utilities.toXYZInertia(&inertia);
    inertia_ = utilities.vectorToMatrix3d(&inertia);

//    YAML::Node collision_margin = bodyNode["collision margin"];
//    if(collision_margin.IsDefined()) collision_margin_ = collision_margin.as<double>();

//    YAML::Node scale = bodyNode["scale"];
//    if(scale.IsDefined()) scale_ = scale.as<double>();

//    YAML::Node location = bodyNode["location"];
//    if(location.IsDefined()) {
//        YAML::Node location_position = location["position"];
//        if(location_position.IsDefined()) location_position_ = utilities.toXYZ(&location_position);

//        YAML::Node location_orientation = location["orientation"];
//        if(location_orientation.IsDefined()) location_orientation_ = utilities.toRPY(&location_orientation);
//    }


    YAML::Node inertial_offset = bodyNode["inertial offset"];
    if(!inertial_offset.IsDefined()) throwExceptionMessage("inertia offset in Body Params");

    YAML::Node inertial_offset_position = inertial_offset["position"];
    if(!inertial_offset_position.IsDefined()) throwExceptionMessage("inertia offset position in Body Params");
    inertial_offset_position_ = utilities.toXYZ(&inertial_offset_position);

    YAML::Node inertial_offset_orientation = inertial_offset["orientation"];
    if(!inertial_offset_orientation.IsDefined()) throwExceptionMessage("inertia offset orientation in Body Params");
    inertial_offset_orientation_ = utilities.toRPY(&inertial_offset_orientation);



//    YAML::Node passive = bodyNode["passive"];
//    if(passive.IsDefined()) passive_ = bodyNode["passive"].as<bool>();

//    YAML::Node friction = bodyNode["friction"];
//    if(friction.IsDefined()) {
//        YAML::Node friction_rolling = friction["rolling"];
//        if(friction_rolling.IsDefined()) friction_rolling_ = friction_rolling.as<double>();

//        YAML::Node friction_static = friction["static"];
//        if(friction_static.IsDefined()) friction_static_ = friction_static.as<double>();
//    }

//    YAML::Node damping = bodyNode["damping"];
//    if(damping.IsDefined()) {
//        YAML::Node damping_angular = damping["angular"];
//        if(damping_angular.IsDefined()) friction_rolling_ = damping_angular.as<double>();

//        YAML::Node friction_static = damping["linear"];
//        if(friction_static.IsDefined()) friction_static_ = friction_static.as<double>();
//    }

    utilities.~Utilities();
}

void BodyParam::throwExceptionMessage(const std::string message) {
    throw RBDLModel::ModelErrors::RBDLModelMissingParameterError("Error: Missing " + message + " which is mandate field to build RBDL Model. Terminating model creation!\n");
}

BodyParam::~BodyParam() {

}
