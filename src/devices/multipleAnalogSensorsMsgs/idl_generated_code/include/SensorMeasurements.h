/*
 * Copyright (C) 2006-2019 Istituto Italiano di Tecnologia (IIT)
 * All rights reserved.
 *
 * This software may be modified and distributed under the terms of the
 * BSD-3-Clause license. See the accompanying LICENSE file for details.
 */

// Autogenerated by Thrift Compiler (0.12.0-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_STRUCT_SENSORMEASUREMENTS_H
#define YARP_THRIFT_GENERATOR_STRUCT_SENSORMEASUREMENTS_H

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>
#include <SensorMeasurement.h>

class SensorMeasurements :
        public yarp::os::idl::WirePortable
{
public:
    // Fields
    std::vector<SensorMeasurement> measurements;

    // Default constructor
    SensorMeasurements();

    // Constructor with field values
    SensorMeasurements(const std::vector<SensorMeasurement>& measurements);

    // Read structure on a Wire
    bool read(yarp::os::idl::WireReader& reader) override;

    // Read structure on a Connection
    bool read(yarp::os::ConnectionReader& connection) override;

    // Write structure on a Wire
    bool write(const yarp::os::idl::WireWriter& writer) const override;

    // Write structure on a Connection
    bool write(yarp::os::ConnectionWriter& connection) const override;

    // Convert to a printable string
    std::string toString() const;

    // If you want to serialize this class without nesting, use this helper
    typedef yarp::os::idl::Unwrapped<SensorMeasurements> unwrapped;

    class Editor :
            public yarp::os::Wire,
            public yarp::os::PortWriter
    {
    public:
        // Editor: default constructor
        Editor();

        // Editor: constructor with base class
        Editor(SensorMeasurements& obj);

        // Editor: destructor
        ~Editor() override;

        // Editor: Deleted constructors and operator=
        Editor(const Editor& rhs) = delete;
        Editor(Editor&& rhs) = delete;
        Editor& operator=(const Editor& rhs) = delete;
        Editor& operator=(Editor&& rhs) = delete;

        // Editor: edit
        bool edit(SensorMeasurements& obj, bool dirty = true);

        // Editor: validity check
        bool isValid() const;

        // Editor: state
        SensorMeasurements& state();

        // Editor: start editing
        void start_editing();

#ifndef YARP_NO_DEPRECATED // Since YARP 3.2
        YARP_DEPRECATED_MSG("Use start_editing() instead")
        void begin()
        {
            start_editing();
        }
#endif // YARP_NO_DEPRECATED

        // Editor: stop editing
        void stop_editing();

#ifndef YARP_NO_DEPRECATED // Since YARP 3.2
        YARP_DEPRECATED_MSG("Use stop_editing() instead")
        void end()
        {
            stop_editing();
        }
#endif // YARP_NO_DEPRECATED

        // Editor: measurements field
        void set_measurements(const std::vector<SensorMeasurement>& measurements);
        void set_measurements(size_t index, const SensorMeasurement& elem);
        const std::vector<SensorMeasurement>& get_measurements() const;
        virtual bool will_set_measurements();
        virtual bool did_set_measurements();

        // Editor: clean
        void clean();

        // Editor: read
        bool read(yarp::os::ConnectionReader& connection) override;

        // Editor: write
        bool write(yarp::os::ConnectionWriter& connection) const override;

    private:
        // Editor: state
        SensorMeasurements* obj;
        bool obj_owned;
        int group;

        // Editor: dirty variables
        bool is_dirty;
        bool is_dirty_measurements;
        int dirty_count;

        // Editor: send if possible
        void communicate();

        // Editor: mark dirty overall
        void mark_dirty();

        // Editor: mark dirty single fields
        void mark_dirty_measurements();

        // Editor: dirty_flags
        void dirty_flags(bool flag);
    };

private:
    // read/write measurements field
    bool read_measurements(yarp::os::idl::WireReader& reader);
    bool write_measurements(const yarp::os::idl::WireWriter& writer) const;
    bool nested_read_measurements(yarp::os::idl::WireReader& reader);
    bool nested_write_measurements(const yarp::os::idl::WireWriter& writer) const;
};

#endif // YARP_THRIFT_GENERATOR_STRUCT_SENSORMEASUREMENTS_H
