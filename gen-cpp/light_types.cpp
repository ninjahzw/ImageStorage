/**
 * Autogenerated by Thrift Compiler (1.0.0-dev)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "light_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>




AddArgs::~AddArgs() throw() {
}


void AddArgs::__set_key(const std::string& val) {
  this->key = val;
}

void AddArgs::__set_value(const std::string& val) {
  this->value = val;
}

void AddArgs::__set_ttl(const int64_t val) {
  this->ttl = val;
__isset.ttl = true;
}

uint32_t AddArgs::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_key = false;
  bool isset_value = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->key);
          isset_key = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->value);
          isset_value = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->ttl);
          this->__isset.ttl = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_key)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_value)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t AddArgs::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("AddArgs");

  xfer += oprot->writeFieldBegin("key", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->key);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("value", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->value);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.ttl) {
    xfer += oprot->writeFieldBegin("ttl", ::apache::thrift::protocol::T_I64, 3);
    xfer += oprot->writeI64(this->ttl);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(AddArgs &a, AddArgs &b) {
  using ::std::swap;
  swap(a.key, b.key);
  swap(a.value, b.value);
  swap(a.ttl, b.ttl);
  swap(a.__isset, b.__isset);
}

AddArgs::AddArgs(const AddArgs& other0) {
  key = other0.key;
  value = other0.value;
  ttl = other0.ttl;
  __isset = other0.__isset;
}
AddArgs& AddArgs::operator=(const AddArgs& other1) {
  key = other1.key;
  value = other1.value;
  ttl = other1.ttl;
  __isset = other1.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const AddArgs& obj) {
  using apache::thrift::to_string;
  out << "AddArgs(";
  out << "key=" << to_string(obj.key);
  out << ", " << "value=" << to_string(obj.value);
  out << ", " << "ttl="; (obj.__isset.ttl ? (out << to_string(obj.ttl)) : (out << "<null>"));
  out << ")";
  return out;
}


InvalidArgsException::~InvalidArgsException() throw() {
}


void InvalidArgsException::__set_errorCode(const int64_t val) {
  this->errorCode = val;
}

void InvalidArgsException::__set_message(const std::string& val) {
  this->message = val;
}

uint32_t InvalidArgsException::read(::apache::thrift::protocol::TProtocol* iprot) {

  apache::thrift::protocol::TInputRecursionTracker tracker(*iprot);
  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;


  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_I64) {
          xfer += iprot->readI64(this->errorCode);
          this->__isset.errorCode = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->message);
          this->__isset.message = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  return xfer;
}

uint32_t InvalidArgsException::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  apache::thrift::protocol::TOutputRecursionTracker tracker(*oprot);
  xfer += oprot->writeStructBegin("InvalidArgsException");

  xfer += oprot->writeFieldBegin("errorCode", ::apache::thrift::protocol::T_I64, 1);
  xfer += oprot->writeI64(this->errorCode);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("message", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->message);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  return xfer;
}

void swap(InvalidArgsException &a, InvalidArgsException &b) {
  using ::std::swap;
  swap(a.errorCode, b.errorCode);
  swap(a.message, b.message);
  swap(a.__isset, b.__isset);
}

InvalidArgsException::InvalidArgsException(const InvalidArgsException& other2) : TException() {
  errorCode = other2.errorCode;
  message = other2.message;
  __isset = other2.__isset;
}
InvalidArgsException& InvalidArgsException::operator=(const InvalidArgsException& other3) {
  errorCode = other3.errorCode;
  message = other3.message;
  __isset = other3.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const InvalidArgsException& obj) {
  using apache::thrift::to_string;
  out << "InvalidArgsException(";
  out << "errorCode=" << to_string(obj.errorCode);
  out << ", " << "message=" << to_string(obj.message);
  out << ")";
  return out;
}

const char* InvalidArgsException::what() const throw() {
  try {
    std::stringstream ss;
    ss << "TException - service has thrown: " << *this;
    this->thriftTExceptionMessageHolder_ = ss.str();
    return this->thriftTExceptionMessageHolder_.c_str();
  } catch (const std::exception&) {
    return "TException - service has thrown: InvalidArgsException";
  }
}


