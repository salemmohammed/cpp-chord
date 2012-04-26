/**
 * Autogenerated by Thrift Compiler (0.8.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef mp2_TYPES_H
#define mp2_TYPES_H

#include <Thrift.h>
#include <TApplicationException.h>
#include <protocol/TProtocol.h>
#include <transport/TTransport.h>



namespace mp2 {

typedef struct _node__isset {
  _node__isset() : m(false), id(false), port(false) {}
  bool m;
  bool id;
  bool port;
} _node__isset;

class node {
 public:

  static const char* ascii_fingerprint; // = "6435B39C87AB0E30F30BEDEFD7328C0D";
  static const uint8_t binary_fingerprint[16]; // = {0x64,0x35,0xB3,0x9C,0x87,0xAB,0x0E,0x30,0xF3,0x0B,0xED,0xEF,0xD7,0x32,0x8C,0x0D};

  node() : m(0), id(0), port(0) {
  }

  virtual ~node() throw() {}

  int32_t m;
  int32_t id;
  int32_t port;

  _node__isset __isset;

  void __set_m(const int32_t val) {
    m = val;
  }

  void __set_id(const int32_t val) {
    id = val;
  }

  void __set_port(const int32_t val) {
    port = val;
  }

  bool operator == (const node & rhs) const
  {
    if (!(m == rhs.m))
      return false;
    if (!(id == rhs.id))
      return false;
    if (!(port == rhs.port))
      return false;
    return true;
  }
  bool operator != (const node &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const node & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

} // namespace

#endif
