// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sendData.proto

#ifndef PROTOBUF_INCLUDED_sendData_2eproto
#define PROTOBUF_INCLUDED_sendData_2eproto

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3006001
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3006001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#define PROTOBUF_INTERNAL_EXPORT_protobuf_sendData_2eproto 

namespace protobuf_sendData_2eproto {
// Internal implementation detail -- do not use these members.
struct TableStruct {
  static const ::google::protobuf::internal::ParseTableField entries[];
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[];
  static const ::google::protobuf::internal::ParseTable schema[2];
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors();
}  // namespace protobuf_sendData_2eproto
namespace sendData {
class data;
class dataDefaultTypeInternal;
extern dataDefaultTypeInternal _data_default_instance_;
class dataAck;
class dataAckDefaultTypeInternal;
extern dataAckDefaultTypeInternal _dataAck_default_instance_;
}  // namespace sendData
namespace google {
namespace protobuf {
template<> ::sendData::data* Arena::CreateMaybeMessage<::sendData::data>(Arena*);
template<> ::sendData::dataAck* Arena::CreateMaybeMessage<::sendData::dataAck>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace sendData {

// ===================================================================

class data : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sendData.data) */ {
 public:
  data();
  virtual ~data();

  data(const data& from);

  inline data& operator=(const data& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  data(data&& from) noexcept
    : data() {
    *this = ::std::move(from);
  }

  inline data& operator=(data&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const data& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const data* internal_default_instance() {
    return reinterpret_cast<const data*>(
               &_data_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(data* other);
  friend void swap(data& a, data& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline data* New() const final {
    return CreateMaybeMessage<data>(NULL);
  }

  data* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<data>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const data& from);
  void MergeFrom(const data& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(data* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // string dataString = 1;
  void clear_datastring();
  static const int kDataStringFieldNumber = 1;
  const ::std::string& datastring() const;
  void set_datastring(const ::std::string& value);
  #if LANG_CXX11
  void set_datastring(::std::string&& value);
  #endif
  void set_datastring(const char* value);
  void set_datastring(const char* value, size_t size);
  ::std::string* mutable_datastring();
  ::std::string* release_datastring();
  void set_allocated_datastring(::std::string* datastring);

  // @@protoc_insertion_point(class_scope:sendData.data)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::ArenaStringPtr datastring_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_sendData_2eproto::TableStruct;
};
// -------------------------------------------------------------------

class dataAck : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:sendData.dataAck) */ {
 public:
  dataAck();
  virtual ~dataAck();

  dataAck(const dataAck& from);

  inline dataAck& operator=(const dataAck& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  dataAck(dataAck&& from) noexcept
    : dataAck() {
    *this = ::std::move(from);
  }

  inline dataAck& operator=(dataAck&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  static const ::google::protobuf::Descriptor* descriptor();
  static const dataAck& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const dataAck* internal_default_instance() {
    return reinterpret_cast<const dataAck*>(
               &_dataAck_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(dataAck* other);
  friend void swap(dataAck& a, dataAck& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline dataAck* New() const final {
    return CreateMaybeMessage<dataAck>(NULL);
  }

  dataAck* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<dataAck>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const dataAck& from);
  void MergeFrom(const dataAck& from);
  void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(dataAck* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // int32 result = 1;
  void clear_result();
  static const int kResultFieldNumber = 1;
  ::google::protobuf::int32 result() const;
  void set_result(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:sendData.dataAck)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 result_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  friend struct ::protobuf_sendData_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// data

// string dataString = 1;
inline void data::clear_datastring() {
  datastring_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& data::datastring() const {
  // @@protoc_insertion_point(field_get:sendData.data.dataString)
  return datastring_.GetNoArena();
}
inline void data::set_datastring(const ::std::string& value) {
  
  datastring_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:sendData.data.dataString)
}
#if LANG_CXX11
inline void data::set_datastring(::std::string&& value) {
  
  datastring_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:sendData.data.dataString)
}
#endif
inline void data::set_datastring(const char* value) {
  GOOGLE_DCHECK(value != NULL);
  
  datastring_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:sendData.data.dataString)
}
inline void data::set_datastring(const char* value, size_t size) {
  
  datastring_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:sendData.data.dataString)
}
inline ::std::string* data::mutable_datastring() {
  
  // @@protoc_insertion_point(field_mutable:sendData.data.dataString)
  return datastring_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* data::release_datastring() {
  // @@protoc_insertion_point(field_release:sendData.data.dataString)
  
  return datastring_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void data::set_allocated_datastring(::std::string* datastring) {
  if (datastring != NULL) {
    
  } else {
    
  }
  datastring_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), datastring);
  // @@protoc_insertion_point(field_set_allocated:sendData.data.dataString)
}

// -------------------------------------------------------------------

// dataAck

// int32 result = 1;
inline void dataAck::clear_result() {
  result_ = 0;
}
inline ::google::protobuf::int32 dataAck::result() const {
  // @@protoc_insertion_point(field_get:sendData.dataAck.result)
  return result_;
}
inline void dataAck::set_result(::google::protobuf::int32 value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:sendData.dataAck.result)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sendData

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_INCLUDED_sendData_2eproto
