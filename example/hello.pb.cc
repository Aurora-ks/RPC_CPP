// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: hello.proto

#include "hello.pb.h"

#include <algorithm>
#include "google/protobuf/io/coded_stream.h"
#include "google/protobuf/extension_set.h"
#include "google/protobuf/wire_format_lite.h"
#include "google/protobuf/descriptor.h"
#include "google/protobuf/generated_message_reflection.h"
#include "google/protobuf/reflection_ops.h"
#include "google/protobuf/wire_format.h"
#include "google/protobuf/generated_message_tctable_impl.h"
// @@protoc_insertion_point(includes)

// Must be included last.
#include "google/protobuf/port_def.inc"
PROTOBUF_PRAGMA_INIT_SEG
namespace _pb = ::google::protobuf;
namespace _pbi = ::google::protobuf::internal;
namespace _fl = ::google::protobuf::internal::field_layout;
namespace hello {

inline constexpr res::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        message_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()) {}

template <typename>
PROTOBUF_CONSTEXPR res::res(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct resDefaultTypeInternal {
  PROTOBUF_CONSTEXPR resDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~resDefaultTypeInternal() {}
  union {
    res _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 resDefaultTypeInternal _res_default_instance_;

inline constexpr req::Impl_::Impl_(
    ::_pbi::ConstantInitialized) noexcept
      : _cached_size_{0},
        name_(
            &::google::protobuf::internal::fixed_address_empty_string,
            ::_pbi::ConstantInitialized()) {}

template <typename>
PROTOBUF_CONSTEXPR req::req(::_pbi::ConstantInitialized)
    : _impl_(::_pbi::ConstantInitialized()) {}
struct reqDefaultTypeInternal {
  PROTOBUF_CONSTEXPR reqDefaultTypeInternal() : _instance(::_pbi::ConstantInitialized{}) {}
  ~reqDefaultTypeInternal() {}
  union {
    req _instance;
  };
};

PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT
    PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 reqDefaultTypeInternal _req_default_instance_;
}  // namespace hello
static ::_pb::Metadata file_level_metadata_hello_2eproto[2];
static constexpr const ::_pb::EnumDescriptor**
    file_level_enum_descriptors_hello_2eproto = nullptr;
static const ::_pb::ServiceDescriptor*
    file_level_service_descriptors_hello_2eproto[1];
const ::uint32_t TableStruct_hello_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(
    protodesc_cold) = {
    PROTOBUF_FIELD_OFFSET(::hello::req, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::hello::req, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::hello::req, _impl_.name_),
    0,
    PROTOBUF_FIELD_OFFSET(::hello::res, _impl_._has_bits_),
    PROTOBUF_FIELD_OFFSET(::hello::res, _internal_metadata_),
    ~0u,  // no _extensions_
    ~0u,  // no _oneof_case_
    ~0u,  // no _weak_field_map_
    ~0u,  // no _inlined_string_donated_
    ~0u,  // no _split_
    ~0u,  // no sizeof(Split)
    PROTOBUF_FIELD_OFFSET(::hello::res, _impl_.message_),
    0,
};

static const ::_pbi::MigrationSchema
    schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
        {0, 9, -1, sizeof(::hello::req)},
        {10, 19, -1, sizeof(::hello::res)},
};

static const ::_pb::Message* const file_default_instances[] = {
    &::hello::_req_default_instance_._instance,
    &::hello::_res_default_instance_._instance,
};
const char descriptor_table_protodef_hello_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
    "\n\013hello.proto\022\005hello\"!\n\003req\022\021\n\004name\030\001 \001("
    "\014H\000\210\001\001B\007\n\005_name\"\'\n\003res\022\024\n\007message\030\001 \001(\014H"
    "\000\210\001\001B\n\n\010_message2/\n\014HelloService\022\037\n\005hell"
    "o\022\n.hello.req\032\n.hello.resB\003\200\001\001b\006proto3"
};
static ::absl::once_flag descriptor_table_hello_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_hello_2eproto = {
    false,
    false,
    158,
    descriptor_table_protodef_hello_2eproto,
    "hello.proto",
    &descriptor_table_hello_2eproto_once,
    nullptr,
    0,
    2,
    schemas,
    file_default_instances,
    TableStruct_hello_2eproto::offsets,
    file_level_metadata_hello_2eproto,
    file_level_enum_descriptors_hello_2eproto,
    file_level_service_descriptors_hello_2eproto,
};

// This function exists to be marked as weak.
// It can significantly speed up compilation by breaking up LLVM's SCC
// in the .pb.cc translation units. Large translation units see a
// reduction of more than 35% of walltime for optimized builds. Without
// the weak attribute all the messages in the file, including all the
// vtables and everything they use become part of the same SCC through
// a cycle like:
// GetMetadata -> descriptor table -> default instances ->
//   vtables -> GetMetadata
// By adding a weak function here we break the connection from the
// individual vtables back into the descriptor table.
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_hello_2eproto_getter() {
  return &descriptor_table_hello_2eproto;
}
// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2
static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_hello_2eproto(&descriptor_table_hello_2eproto);
namespace hello {
// ===================================================================

class req::_Internal {
 public:
  using HasBits = decltype(std::declval<req>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(req, _impl_._has_bits_);
  static void set_has_name(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

req::req(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:hello.req)
}
inline PROTOBUF_NDEBUG_INLINE req::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : _has_bits_{from._has_bits_},
        _cached_size_{0},
        name_(arena, from.name_) {}

req::req(
    ::google::protobuf::Arena* arena,
    const req& from)
    : ::google::protobuf::Message(arena) {
  req* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:hello.req)
}
inline PROTOBUF_NDEBUG_INLINE req::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0},
        name_(arena) {}

inline void req::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
req::~req() {
  // @@protoc_insertion_point(destructor:hello.req)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void req::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.name_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void req::Clear() {
// @@protoc_insertion_point(message_clear_start:hello.req)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.name_.ClearNonDefaultToEmpty();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* req::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> req::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(req, _impl_._has_bits_),
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_req_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // optional bytes name = 1;
    {::_pbi::TcParser::FastBS1,
     {10, 0, 0, PROTOBUF_FIELD_OFFSET(req, _impl_.name_)}},
  }}, {{
    65535, 65535
  }}, {{
    // optional bytes name = 1;
    {PROTOBUF_FIELD_OFFSET(req, _impl_.name_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBytes | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* req::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:hello.req)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional bytes name = 1;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_name();
    target = stream->WriteBytesMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:hello.req)
  return target;
}

::size_t req::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hello.req)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional bytes name = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                    this->_internal_name());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData req::_class_data_ = {
    req::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* req::GetClassData() const {
  return &_class_data_;
}

void req::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<req*>(&to_msg);
  auto& from = static_cast<const req&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:hello.req)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_set_name(from._internal_name());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void req::CopyFrom(const req& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hello.req)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool req::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* req::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void req::InternalSwap(req* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.name_, &other->_impl_.name_, arena);
}

::google::protobuf::Metadata req::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_hello_2eproto_getter, &descriptor_table_hello_2eproto_once,
      file_level_metadata_hello_2eproto[0]);
}
// ===================================================================

class res::_Internal {
 public:
  using HasBits = decltype(std::declval<res>()._impl_._has_bits_);
  static constexpr ::int32_t kHasBitsOffset =
    8 * PROTOBUF_FIELD_OFFSET(res, _impl_._has_bits_);
  static void set_has_message(HasBits* has_bits) {
    (*has_bits)[0] |= 1u;
  }
};

res::res(::google::protobuf::Arena* arena)
    : ::google::protobuf::Message(arena) {
  SharedCtor(arena);
  // @@protoc_insertion_point(arena_constructor:hello.res)
}
inline PROTOBUF_NDEBUG_INLINE res::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility, ::google::protobuf::Arena* arena,
    const Impl_& from)
      : _has_bits_{from._has_bits_},
        _cached_size_{0},
        message_(arena, from.message_) {}

res::res(
    ::google::protobuf::Arena* arena,
    const res& from)
    : ::google::protobuf::Message(arena) {
  res* const _this = this;
  (void)_this;
  _internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(
      from._internal_metadata_);
  new (&_impl_) Impl_(internal_visibility(), arena, from._impl_);

  // @@protoc_insertion_point(copy_constructor:hello.res)
}
inline PROTOBUF_NDEBUG_INLINE res::Impl_::Impl_(
    ::google::protobuf::internal::InternalVisibility visibility,
    ::google::protobuf::Arena* arena)
      : _cached_size_{0},
        message_(arena) {}

inline void res::SharedCtor(::_pb::Arena* arena) {
  new (&_impl_) Impl_(internal_visibility(), arena);
}
res::~res() {
  // @@protoc_insertion_point(destructor:hello.res)
  _internal_metadata_.Delete<::google::protobuf::UnknownFieldSet>();
  SharedDtor();
}
inline void res::SharedDtor() {
  ABSL_DCHECK(GetArena() == nullptr);
  _impl_.message_.Destroy();
  _impl_.~Impl_();
}

PROTOBUF_NOINLINE void res::Clear() {
// @@protoc_insertion_point(message_clear_start:hello.res)
  PROTOBUF_TSAN_WRITE(&_impl_._tsan_detect_race);
  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    _impl_.message_.ClearNonDefaultToEmpty();
  }
  _impl_._has_bits_.Clear();
  _internal_metadata_.Clear<::google::protobuf::UnknownFieldSet>();
}

const char* res::_InternalParse(
    const char* ptr, ::_pbi::ParseContext* ctx) {
  ptr = ::_pbi::TcParser::ParseLoop(this, ptr, ctx, &_table_.header);
  return ptr;
}


PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1
const ::_pbi::TcParseTable<0, 1, 0, 0, 2> res::_table_ = {
  {
    PROTOBUF_FIELD_OFFSET(res, _impl_._has_bits_),
    0, // no _extensions_
    1, 0,  // max_field_number, fast_idx_mask
    offsetof(decltype(_table_), field_lookup_table),
    4294967294,  // skipmap
    offsetof(decltype(_table_), field_entries),
    1,  // num_field_entries
    0,  // num_aux_entries
    offsetof(decltype(_table_), field_names),  // no aux_entries
    &_res_default_instance_._instance,
    ::_pbi::TcParser::GenericFallback,  // fallback
  }, {{
    // optional bytes message = 1;
    {::_pbi::TcParser::FastBS1,
     {10, 0, 0, PROTOBUF_FIELD_OFFSET(res, _impl_.message_)}},
  }}, {{
    65535, 65535
  }}, {{
    // optional bytes message = 1;
    {PROTOBUF_FIELD_OFFSET(res, _impl_.message_), _Internal::kHasBitsOffset + 0, 0,
    (0 | ::_fl::kFcOptional | ::_fl::kBytes | ::_fl::kRepAString)},
  }},
  // no aux_entries
  {{
  }},
};

::uint8_t* res::_InternalSerialize(
    ::uint8_t* target,
    ::google::protobuf::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:hello.res)
  ::uint32_t cached_has_bits = 0;
  (void)cached_has_bits;

  cached_has_bits = _impl_._has_bits_[0];
  // optional bytes message = 1;
  if (cached_has_bits & 0x00000001u) {
    const std::string& _s = this->_internal_message();
    target = stream->WriteBytesMaybeAliased(1, _s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target =
        ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
            _internal_metadata_.unknown_fields<::google::protobuf::UnknownFieldSet>(::google::protobuf::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:hello.res)
  return target;
}

::size_t res::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:hello.res)
  ::size_t total_size = 0;

  ::uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // optional bytes message = 1;
  cached_has_bits = _impl_._has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    total_size += 1 + ::google::protobuf::internal::WireFormatLite::BytesSize(
                                    this->_internal_message());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::google::protobuf::Message::ClassData res::_class_data_ = {
    res::MergeImpl,
    nullptr,  // OnDemandRegisterArenaDtor
};
const ::google::protobuf::Message::ClassData* res::GetClassData() const {
  return &_class_data_;
}

void res::MergeImpl(::google::protobuf::Message& to_msg, const ::google::protobuf::Message& from_msg) {
  auto* const _this = static_cast<res*>(&to_msg);
  auto& from = static_cast<const res&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:hello.res)
  ABSL_DCHECK_NE(&from, _this);
  ::uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if ((from._impl_._has_bits_[0] & 0x00000001u) != 0) {
    _this->_internal_set_message(from._internal_message());
  }
  _this->_internal_metadata_.MergeFrom<::google::protobuf::UnknownFieldSet>(from._internal_metadata_);
}

void res::CopyFrom(const res& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:hello.res)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

PROTOBUF_NOINLINE bool res::IsInitialized() const {
  return true;
}

::_pbi::CachedSize* res::AccessCachedSize() const {
  return &_impl_._cached_size_;
}
void res::InternalSwap(res* PROTOBUF_RESTRICT other) {
  using std::swap;
  auto* arena = GetArena();
  ABSL_DCHECK_EQ(arena, other->GetArena());
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_._has_bits_[0], other->_impl_._has_bits_[0]);
  ::_pbi::ArenaStringPtr::InternalSwap(&_impl_.message_, &other->_impl_.message_, arena);
}

::google::protobuf::Metadata res::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_hello_2eproto_getter, &descriptor_table_hello_2eproto_once,
      file_level_metadata_hello_2eproto[1]);
}
// ===================================================================

const ::google::protobuf::ServiceDescriptor* HelloService::descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&descriptor_table_hello_2eproto);
  return file_level_service_descriptors_hello_2eproto[0];
}

const ::google::protobuf::ServiceDescriptor* HelloService::GetDescriptor() {
  return descriptor();
}

void HelloService::hello(::google::protobuf::RpcController* controller,
                         const ::hello::req*, ::hello::res*, ::google::protobuf::Closure* done) {
  controller->SetFailed("Method hello() not implemented.");
  done->Run();
}

void HelloService::CallMethod(
    const ::google::protobuf::MethodDescriptor* method,
    ::google::protobuf::RpcController* controller,
    const ::google::protobuf::Message* request,
    ::google::protobuf::Message* response, ::google::protobuf::Closure* done) {
  ABSL_DCHECK_EQ(method->service(), file_level_service_descriptors_hello_2eproto[0]);
  switch (method->index()) {
    case 0:
      hello(controller,
             ::google::protobuf::internal::DownCast<const ::hello::req*>(request),
             ::google::protobuf::internal::DownCast<::hello::res*>(response), done);
      break;

    default:
      ABSL_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& HelloService::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  ABSL_DCHECK_EQ(method->service(), descriptor());
  switch (method->index()) {
    case 0:
      return ::hello::req::default_instance();

    default:
      ABSL_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::google::protobuf::MessageFactory::generated_factory()
                  ->GetPrototype(method->input_type());
  }
}

const ::google::protobuf::Message& HelloService::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  ABSL_DCHECK_EQ(method->service(), descriptor());
  switch (method->index()) {
    case 0:
      return ::hello::res::default_instance();

    default:
      ABSL_LOG(FATAL) << "Bad method index; this should never happen.";
      return *::google::protobuf::MessageFactory::generated_factory()
                  ->GetPrototype(method->output_type());
  }
}

HelloService_Stub::HelloService_Stub(::google::protobuf::RpcChannel* channel)
    : channel_(channel), owns_channel_(false) {}

HelloService_Stub::HelloService_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
    : channel_(channel),
      owns_channel_(ownership ==
                    ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}

HelloService_Stub::~HelloService_Stub() {
  if (owns_channel_) delete channel_;
}

void HelloService_Stub::hello(::google::protobuf::RpcController* controller,
                              const ::hello::req* request,
                              ::hello::res* response, ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0), controller,
                       request, response, done);
}
// @@protoc_insertion_point(namespace_scope)
}  // namespace hello
namespace google {
namespace protobuf {
}  // namespace protobuf
}  // namespace google
// @@protoc_insertion_point(global_scope)
#include "google/protobuf/port_undef.inc"
