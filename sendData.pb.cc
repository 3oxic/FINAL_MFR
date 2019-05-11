// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: sendData.proto

#include "sendData.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// This is a temporary google only hack
#ifdef GOOGLE_PROTOBUF_ENFORCE_UNIQUENESS
#include "third_party/protobuf/version.h"
#endif
// @@protoc_insertion_point(includes)

namespace sendData {
class clientPacketDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<clientPacket>
      _instance;
} _clientPacket_default_instance_;
class serverPacketDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<serverPacket>
      _instance;
} _serverPacket_default_instance_;
}  // namespace sendData
namespace protobuf_sendData_2eproto {
static void InitDefaultsclientPacket() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::sendData::_clientPacket_default_instance_;
    new (ptr) ::sendData::clientPacket();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::sendData::clientPacket::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_clientPacket =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsclientPacket}, {}};

static void InitDefaultsserverPacket() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::sendData::_serverPacket_default_instance_;
    new (ptr) ::sendData::serverPacket();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::sendData::serverPacket::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_serverPacket =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsserverPacket}, {}};

void InitDefaults() {
  ::google::protobuf::internal::InitSCC(&scc_info_clientPacket.base);
  ::google::protobuf::internal::InitSCC(&scc_info_serverPacket.base);
}

::google::protobuf::Metadata file_level_metadata[2];

const ::google::protobuf::uint32 TableStruct::offsets[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sendData::clientPacket, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sendData::clientPacket, packettype_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sendData::clientPacket, bytestring_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sendData::clientPacket, sizeof__),
  ~0u,  // no _has_bits_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sendData::serverPacket, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sendData::serverPacket, packettype_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sendData::serverPacket, bytestring_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sendData::serverPacket, singleelementsize_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(::sendData::serverPacket, totalsize_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::sendData::clientPacket)},
  { 8, -1, sizeof(::sendData::serverPacket)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::sendData::_clientPacket_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::sendData::_serverPacket_default_instance_),
};

void protobuf_AssignDescriptors() {
  AddDescriptors();
  AssignDescriptors(
      "sendData.proto", schemas, file_default_instances, TableStruct::offsets,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_PROTOBUF_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 2);
}

void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] GOOGLE_PROTOBUF_ATTRIBUTE_SECTION_VARIABLE(protodesc_cold) = {
      "\n\016sendData.proto\022\010sendData\"F\n\014clientPack"
      "et\022\022\n\npacketType\030\001 \001(\t\022\022\n\nbyteString\030\002 \001"
      "(\014\022\016\n\006sizeOf\030\003 \001(\005\"d\n\014serverPacket\022\022\n\npa"
      "cketType\030\001 \001(\t\022\022\n\nbyteString\030\002 \001(\014\022\031\n\021si"
      "ngleElementSize\030\003 \001(\005\022\021\n\ttotalSize\030\004 \001(\005"
      "2K\n\010SendData\022\?\n\013sendRequest\022\026.sendData.c"
      "lientPacket\032\026.sendData.serverPacket\"\000b\006p"
      "roto3"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 285);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "sendData.proto", &protobuf_RegisterTypes);
}

void AddDescriptors() {
  static ::google::protobuf::internal::once_flag once;
  ::google::protobuf::internal::call_once(once, AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at dynamic initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;
}  // namespace protobuf_sendData_2eproto
namespace sendData {

// ===================================================================

void clientPacket::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int clientPacket::kPacketTypeFieldNumber;
const int clientPacket::kByteStringFieldNumber;
const int clientPacket::kSizeOfFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

clientPacket::clientPacket()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_sendData_2eproto::scc_info_clientPacket.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:sendData.clientPacket)
}
clientPacket::clientPacket(const clientPacket& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  packettype_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.packettype().size() > 0) {
    packettype_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.packettype_);
  }
  bytestring_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.bytestring().size() > 0) {
    bytestring_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.bytestring_);
  }
  sizeof__ = from.sizeof__;
  // @@protoc_insertion_point(copy_constructor:sendData.clientPacket)
}

void clientPacket::SharedCtor() {
  packettype_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  bytestring_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sizeof__ = 0;
}

clientPacket::~clientPacket() {
  // @@protoc_insertion_point(destructor:sendData.clientPacket)
  SharedDtor();
}

void clientPacket::SharedDtor() {
  packettype_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  bytestring_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void clientPacket::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* clientPacket::descriptor() {
  ::protobuf_sendData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_sendData_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const clientPacket& clientPacket::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_sendData_2eproto::scc_info_clientPacket.base);
  return *internal_default_instance();
}


void clientPacket::Clear() {
// @@protoc_insertion_point(message_clear_start:sendData.clientPacket)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  packettype_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  bytestring_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sizeof__ = 0;
  _internal_metadata_.Clear();
}

bool clientPacket::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:sendData.clientPacket)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string packetType = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_packettype()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->packettype().data(), static_cast<int>(this->packettype().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "sendData.clientPacket.packetType"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes byteString = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_bytestring()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 sizeOf = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sizeof__)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sendData.clientPacket)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sendData.clientPacket)
  return false;
#undef DO_
}

void clientPacket::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sendData.clientPacket)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string packetType = 1;
  if (this->packettype().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->packettype().data(), static_cast<int>(this->packettype().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "sendData.clientPacket.packetType");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->packettype(), output);
  }

  // bytes byteString = 2;
  if (this->bytestring().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->bytestring(), output);
  }

  // int32 sizeOf = 3;
  if (this->sizeof_() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->sizeof_(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:sendData.clientPacket)
}

::google::protobuf::uint8* clientPacket::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:sendData.clientPacket)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string packetType = 1;
  if (this->packettype().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->packettype().data(), static_cast<int>(this->packettype().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "sendData.clientPacket.packetType");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->packettype(), target);
  }

  // bytes byteString = 2;
  if (this->bytestring().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->bytestring(), target);
  }

  // int32 sizeOf = 3;
  if (this->sizeof_() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->sizeof_(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sendData.clientPacket)
  return target;
}

size_t clientPacket::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sendData.clientPacket)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string packetType = 1;
  if (this->packettype().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->packettype());
  }

  // bytes byteString = 2;
  if (this->bytestring().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->bytestring());
  }

  // int32 sizeOf = 3;
  if (this->sizeof_() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->sizeof_());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void clientPacket::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sendData.clientPacket)
  GOOGLE_DCHECK_NE(&from, this);
  const clientPacket* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const clientPacket>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sendData.clientPacket)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sendData.clientPacket)
    MergeFrom(*source);
  }
}

void clientPacket::MergeFrom(const clientPacket& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sendData.clientPacket)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.packettype().size() > 0) {

    packettype_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.packettype_);
  }
  if (from.bytestring().size() > 0) {

    bytestring_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.bytestring_);
  }
  if (from.sizeof_() != 0) {
    set_sizeof_(from.sizeof_());
  }
}

void clientPacket::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sendData.clientPacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void clientPacket::CopyFrom(const clientPacket& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sendData.clientPacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool clientPacket::IsInitialized() const {
  return true;
}

void clientPacket::Swap(clientPacket* other) {
  if (other == this) return;
  InternalSwap(other);
}
void clientPacket::InternalSwap(clientPacket* other) {
  using std::swap;
  packettype_.Swap(&other->packettype_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  bytestring_.Swap(&other->bytestring_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(sizeof__, other->sizeof__);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata clientPacket::GetMetadata() const {
  protobuf_sendData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_sendData_2eproto::file_level_metadata[kIndexInFileMessages];
}


// ===================================================================

void serverPacket::InitAsDefaultInstance() {
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int serverPacket::kPacketTypeFieldNumber;
const int serverPacket::kByteStringFieldNumber;
const int serverPacket::kSingleElementSizeFieldNumber;
const int serverPacket::kTotalSizeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

serverPacket::serverPacket()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  ::google::protobuf::internal::InitSCC(
      &protobuf_sendData_2eproto::scc_info_serverPacket.base);
  SharedCtor();
  // @@protoc_insertion_point(constructor:sendData.serverPacket)
}
serverPacket::serverPacket(const serverPacket& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  packettype_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.packettype().size() > 0) {
    packettype_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.packettype_);
  }
  bytestring_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.bytestring().size() > 0) {
    bytestring_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.bytestring_);
  }
  ::memcpy(&singleelementsize_, &from.singleelementsize_,
    static_cast<size_t>(reinterpret_cast<char*>(&totalsize_) -
    reinterpret_cast<char*>(&singleelementsize_)) + sizeof(totalsize_));
  // @@protoc_insertion_point(copy_constructor:sendData.serverPacket)
}

void serverPacket::SharedCtor() {
  packettype_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  bytestring_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&singleelementsize_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&totalsize_) -
      reinterpret_cast<char*>(&singleelementsize_)) + sizeof(totalsize_));
}

serverPacket::~serverPacket() {
  // @@protoc_insertion_point(destructor:sendData.serverPacket)
  SharedDtor();
}

void serverPacket::SharedDtor() {
  packettype_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  bytestring_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void serverPacket::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ::google::protobuf::Descriptor* serverPacket::descriptor() {
  ::protobuf_sendData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_sendData_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const serverPacket& serverPacket::default_instance() {
  ::google::protobuf::internal::InitSCC(&protobuf_sendData_2eproto::scc_info_serverPacket.base);
  return *internal_default_instance();
}


void serverPacket::Clear() {
// @@protoc_insertion_point(message_clear_start:sendData.serverPacket)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  packettype_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  bytestring_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&singleelementsize_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&totalsize_) -
      reinterpret_cast<char*>(&singleelementsize_)) + sizeof(totalsize_));
  _internal_metadata_.Clear();
}

bool serverPacket::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:sendData.serverPacket)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string packetType = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(10u /* 10 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_packettype()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->packettype().data(), static_cast<int>(this->packettype().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "sendData.serverPacket.packetType"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bytes byteString = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(18u /* 18 & 0xFF */)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_bytestring()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 singleElementSize = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(24u /* 24 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &singleelementsize_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 totalSize = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(32u /* 32 & 0xFF */)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &totalsize_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:sendData.serverPacket)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:sendData.serverPacket)
  return false;
#undef DO_
}

void serverPacket::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:sendData.serverPacket)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string packetType = 1;
  if (this->packettype().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->packettype().data(), static_cast<int>(this->packettype().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "sendData.serverPacket.packetType");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->packettype(), output);
  }

  // bytes byteString = 2;
  if (this->bytestring().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      2, this->bytestring(), output);
  }

  // int32 singleElementSize = 3;
  if (this->singleelementsize() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->singleelementsize(), output);
  }

  // int32 totalSize = 4;
  if (this->totalsize() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->totalsize(), output);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), output);
  }
  // @@protoc_insertion_point(serialize_end:sendData.serverPacket)
}

::google::protobuf::uint8* serverPacket::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:sendData.serverPacket)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string packetType = 1;
  if (this->packettype().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->packettype().data(), static_cast<int>(this->packettype().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "sendData.serverPacket.packetType");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->packettype(), target);
  }

  // bytes byteString = 2;
  if (this->bytestring().size() > 0) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        2, this->bytestring(), target);
  }

  // int32 singleElementSize = 3;
  if (this->singleelementsize() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->singleelementsize(), target);
  }

  // int32 totalSize = 4;
  if (this->totalsize() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->totalsize(), target);
  }

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:sendData.serverPacket)
  return target;
}

size_t serverPacket::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:sendData.serverPacket)
  size_t total_size = 0;

  if ((_internal_metadata_.have_unknown_fields() &&  ::google::protobuf::internal::GetProto3PreserveUnknownsDefault())) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        (::google::protobuf::internal::GetProto3PreserveUnknownsDefault()   ? _internal_metadata_.unknown_fields()   : _internal_metadata_.default_instance()));
  }
  // string packetType = 1;
  if (this->packettype().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->packettype());
  }

  // bytes byteString = 2;
  if (this->bytestring().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::BytesSize(
        this->bytestring());
  }

  // int32 singleElementSize = 3;
  if (this->singleelementsize() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->singleelementsize());
  }

  // int32 totalSize = 4;
  if (this->totalsize() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->totalsize());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void serverPacket::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:sendData.serverPacket)
  GOOGLE_DCHECK_NE(&from, this);
  const serverPacket* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const serverPacket>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:sendData.serverPacket)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:sendData.serverPacket)
    MergeFrom(*source);
  }
}

void serverPacket::MergeFrom(const serverPacket& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:sendData.serverPacket)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.packettype().size() > 0) {

    packettype_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.packettype_);
  }
  if (from.bytestring().size() > 0) {

    bytestring_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.bytestring_);
  }
  if (from.singleelementsize() != 0) {
    set_singleelementsize(from.singleelementsize());
  }
  if (from.totalsize() != 0) {
    set_totalsize(from.totalsize());
  }
}

void serverPacket::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:sendData.serverPacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void serverPacket::CopyFrom(const serverPacket& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:sendData.serverPacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool serverPacket::IsInitialized() const {
  return true;
}

void serverPacket::Swap(serverPacket* other) {
  if (other == this) return;
  InternalSwap(other);
}
void serverPacket::InternalSwap(serverPacket* other) {
  using std::swap;
  packettype_.Swap(&other->packettype_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  bytestring_.Swap(&other->bytestring_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(singleelementsize_, other->singleelementsize_);
  swap(totalsize_, other->totalsize_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
}

::google::protobuf::Metadata serverPacket::GetMetadata() const {
  protobuf_sendData_2eproto::protobuf_AssignDescriptorsOnce();
  return ::protobuf_sendData_2eproto::file_level_metadata[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace sendData
namespace google {
namespace protobuf {
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::sendData::clientPacket* Arena::CreateMaybeMessage< ::sendData::clientPacket >(Arena* arena) {
  return Arena::CreateInternal< ::sendData::clientPacket >(arena);
}
template<> GOOGLE_PROTOBUF_ATTRIBUTE_NOINLINE ::sendData::serverPacket* Arena::CreateMaybeMessage< ::sendData::serverPacket >(Arena* arena) {
  return Arena::CreateInternal< ::sendData::serverPacket >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
