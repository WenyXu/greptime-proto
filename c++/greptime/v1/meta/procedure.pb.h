// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: greptime/v1/meta/procedure.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_greptime_2fv1_2fmeta_2fprocedure_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_greptime_2fv1_2fmeta_2fprocedure_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021006 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "greptime/v1/meta/common.pb.h"
#include "greptime/v1/meta/ddl.pb.h"
#include "greptime/v1/meta/region.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_greptime_2fv1_2fmeta_2fprocedure_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_greptime_2fv1_2fmeta_2fprocedure_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_greptime_2fv1_2fmeta_2fprocedure_2eproto;
namespace greptime {
namespace v1 {
namespace meta {
class ProcedureStateResponse;
struct ProcedureStateResponseDefaultTypeInternal;
extern ProcedureStateResponseDefaultTypeInternal _ProcedureStateResponse_default_instance_;
class QueryProcedureRequest;
struct QueryProcedureRequestDefaultTypeInternal;
extern QueryProcedureRequestDefaultTypeInternal _QueryProcedureRequest_default_instance_;
}  // namespace meta
}  // namespace v1
}  // namespace greptime
PROTOBUF_NAMESPACE_OPEN
template<> ::greptime::v1::meta::ProcedureStateResponse* Arena::CreateMaybeMessage<::greptime::v1::meta::ProcedureStateResponse>(Arena*);
template<> ::greptime::v1::meta::QueryProcedureRequest* Arena::CreateMaybeMessage<::greptime::v1::meta::QueryProcedureRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace greptime {
namespace v1 {
namespace meta {

enum ProcedureStatus : int {
  Running = 0,
  Done = 1,
  Retrying = 2,
  Failed = 3,
  PrepareRollback = 4,
  RollingBack = 5,
  ProcedureStatus_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  ProcedureStatus_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool ProcedureStatus_IsValid(int value);
constexpr ProcedureStatus ProcedureStatus_MIN = Running;
constexpr ProcedureStatus ProcedureStatus_MAX = RollingBack;
constexpr int ProcedureStatus_ARRAYSIZE = ProcedureStatus_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ProcedureStatus_descriptor();
template<typename T>
inline const std::string& ProcedureStatus_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ProcedureStatus>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ProcedureStatus_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ProcedureStatus_descriptor(), enum_t_value);
}
inline bool ProcedureStatus_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ProcedureStatus* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ProcedureStatus>(
    ProcedureStatus_descriptor(), name, value);
}
// ===================================================================

class QueryProcedureRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:greptime.v1.meta.QueryProcedureRequest) */ {
 public:
  inline QueryProcedureRequest() : QueryProcedureRequest(nullptr) {}
  ~QueryProcedureRequest() override;
  explicit PROTOBUF_CONSTEXPR QueryProcedureRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  QueryProcedureRequest(const QueryProcedureRequest& from);
  QueryProcedureRequest(QueryProcedureRequest&& from) noexcept
    : QueryProcedureRequest() {
    *this = ::std::move(from);
  }

  inline QueryProcedureRequest& operator=(const QueryProcedureRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline QueryProcedureRequest& operator=(QueryProcedureRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const QueryProcedureRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const QueryProcedureRequest* internal_default_instance() {
    return reinterpret_cast<const QueryProcedureRequest*>(
               &_QueryProcedureRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(QueryProcedureRequest& a, QueryProcedureRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(QueryProcedureRequest* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(QueryProcedureRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  QueryProcedureRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<QueryProcedureRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const QueryProcedureRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const QueryProcedureRequest& from) {
    QueryProcedureRequest::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(QueryProcedureRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "greptime.v1.meta.QueryProcedureRequest";
  }
  protected:
  explicit QueryProcedureRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kHeaderFieldNumber = 1,
    kPidFieldNumber = 2,
  };
  // .greptime.v1.meta.RequestHeader header = 1;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const ::greptime::v1::meta::RequestHeader& header() const;
  PROTOBUF_NODISCARD ::greptime::v1::meta::RequestHeader* release_header();
  ::greptime::v1::meta::RequestHeader* mutable_header();
  void set_allocated_header(::greptime::v1::meta::RequestHeader* header);
  private:
  const ::greptime::v1::meta::RequestHeader& _internal_header() const;
  ::greptime::v1::meta::RequestHeader* _internal_mutable_header();
  public:
  void unsafe_arena_set_allocated_header(
      ::greptime::v1::meta::RequestHeader* header);
  ::greptime::v1::meta::RequestHeader* unsafe_arena_release_header();

  // .greptime.v1.meta.ProcedureId pid = 2;
  bool has_pid() const;
  private:
  bool _internal_has_pid() const;
  public:
  void clear_pid();
  const ::greptime::v1::meta::ProcedureId& pid() const;
  PROTOBUF_NODISCARD ::greptime::v1::meta::ProcedureId* release_pid();
  ::greptime::v1::meta::ProcedureId* mutable_pid();
  void set_allocated_pid(::greptime::v1::meta::ProcedureId* pid);
  private:
  const ::greptime::v1::meta::ProcedureId& _internal_pid() const;
  ::greptime::v1::meta::ProcedureId* _internal_mutable_pid();
  public:
  void unsafe_arena_set_allocated_pid(
      ::greptime::v1::meta::ProcedureId* pid);
  ::greptime::v1::meta::ProcedureId* unsafe_arena_release_pid();

  // @@protoc_insertion_point(class_scope:greptime.v1.meta.QueryProcedureRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::greptime::v1::meta::RequestHeader* header_;
    ::greptime::v1::meta::ProcedureId* pid_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_greptime_2fv1_2fmeta_2fprocedure_2eproto;
};
// -------------------------------------------------------------------

class ProcedureStateResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:greptime.v1.meta.ProcedureStateResponse) */ {
 public:
  inline ProcedureStateResponse() : ProcedureStateResponse(nullptr) {}
  ~ProcedureStateResponse() override;
  explicit PROTOBUF_CONSTEXPR ProcedureStateResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ProcedureStateResponse(const ProcedureStateResponse& from);
  ProcedureStateResponse(ProcedureStateResponse&& from) noexcept
    : ProcedureStateResponse() {
    *this = ::std::move(from);
  }

  inline ProcedureStateResponse& operator=(const ProcedureStateResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline ProcedureStateResponse& operator=(ProcedureStateResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const ProcedureStateResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const ProcedureStateResponse* internal_default_instance() {
    return reinterpret_cast<const ProcedureStateResponse*>(
               &_ProcedureStateResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ProcedureStateResponse& a, ProcedureStateResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(ProcedureStateResponse* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(ProcedureStateResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ProcedureStateResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ProcedureStateResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ProcedureStateResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ProcedureStateResponse& from) {
    ProcedureStateResponse::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ProcedureStateResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "greptime.v1.meta.ProcedureStateResponse";
  }
  protected:
  explicit ProcedureStateResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kErrorFieldNumber = 3,
    kHeaderFieldNumber = 1,
    kStatusFieldNumber = 2,
  };
  // string error = 3;
  void clear_error();
  const std::string& error() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_error(ArgT0&& arg0, ArgT... args);
  std::string* mutable_error();
  PROTOBUF_NODISCARD std::string* release_error();
  void set_allocated_error(std::string* error);
  private:
  const std::string& _internal_error() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_error(const std::string& value);
  std::string* _internal_mutable_error();
  public:

  // .greptime.v1.meta.ResponseHeader header = 1;
  bool has_header() const;
  private:
  bool _internal_has_header() const;
  public:
  void clear_header();
  const ::greptime::v1::meta::ResponseHeader& header() const;
  PROTOBUF_NODISCARD ::greptime::v1::meta::ResponseHeader* release_header();
  ::greptime::v1::meta::ResponseHeader* mutable_header();
  void set_allocated_header(::greptime::v1::meta::ResponseHeader* header);
  private:
  const ::greptime::v1::meta::ResponseHeader& _internal_header() const;
  ::greptime::v1::meta::ResponseHeader* _internal_mutable_header();
  public:
  void unsafe_arena_set_allocated_header(
      ::greptime::v1::meta::ResponseHeader* header);
  ::greptime::v1::meta::ResponseHeader* unsafe_arena_release_header();

  // .greptime.v1.meta.ProcedureStatus status = 2;
  void clear_status();
  ::greptime::v1::meta::ProcedureStatus status() const;
  void set_status(::greptime::v1::meta::ProcedureStatus value);
  private:
  ::greptime::v1::meta::ProcedureStatus _internal_status() const;
  void _internal_set_status(::greptime::v1::meta::ProcedureStatus value);
  public:

  // @@protoc_insertion_point(class_scope:greptime.v1.meta.ProcedureStateResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr error_;
    ::greptime::v1::meta::ResponseHeader* header_;
    int status_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_greptime_2fv1_2fmeta_2fprocedure_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// QueryProcedureRequest

// .greptime.v1.meta.RequestHeader header = 1;
inline bool QueryProcedureRequest::_internal_has_header() const {
  return this != internal_default_instance() && _impl_.header_ != nullptr;
}
inline bool QueryProcedureRequest::has_header() const {
  return _internal_has_header();
}
inline const ::greptime::v1::meta::RequestHeader& QueryProcedureRequest::_internal_header() const {
  const ::greptime::v1::meta::RequestHeader* p = _impl_.header_;
  return p != nullptr ? *p : reinterpret_cast<const ::greptime::v1::meta::RequestHeader&>(
      ::greptime::v1::meta::_RequestHeader_default_instance_);
}
inline const ::greptime::v1::meta::RequestHeader& QueryProcedureRequest::header() const {
  // @@protoc_insertion_point(field_get:greptime.v1.meta.QueryProcedureRequest.header)
  return _internal_header();
}
inline void QueryProcedureRequest::unsafe_arena_set_allocated_header(
    ::greptime::v1::meta::RequestHeader* header) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.header_);
  }
  _impl_.header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:greptime.v1.meta.QueryProcedureRequest.header)
}
inline ::greptime::v1::meta::RequestHeader* QueryProcedureRequest::release_header() {
  
  ::greptime::v1::meta::RequestHeader* temp = _impl_.header_;
  _impl_.header_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::greptime::v1::meta::RequestHeader* QueryProcedureRequest::unsafe_arena_release_header() {
  // @@protoc_insertion_point(field_release:greptime.v1.meta.QueryProcedureRequest.header)
  
  ::greptime::v1::meta::RequestHeader* temp = _impl_.header_;
  _impl_.header_ = nullptr;
  return temp;
}
inline ::greptime::v1::meta::RequestHeader* QueryProcedureRequest::_internal_mutable_header() {
  
  if (_impl_.header_ == nullptr) {
    auto* p = CreateMaybeMessage<::greptime::v1::meta::RequestHeader>(GetArenaForAllocation());
    _impl_.header_ = p;
  }
  return _impl_.header_;
}
inline ::greptime::v1::meta::RequestHeader* QueryProcedureRequest::mutable_header() {
  ::greptime::v1::meta::RequestHeader* _msg = _internal_mutable_header();
  // @@protoc_insertion_point(field_mutable:greptime.v1.meta.QueryProcedureRequest.header)
  return _msg;
}
inline void QueryProcedureRequest::set_allocated_header(::greptime::v1::meta::RequestHeader* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header));
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.header_ = header;
  // @@protoc_insertion_point(field_set_allocated:greptime.v1.meta.QueryProcedureRequest.header)
}

// .greptime.v1.meta.ProcedureId pid = 2;
inline bool QueryProcedureRequest::_internal_has_pid() const {
  return this != internal_default_instance() && _impl_.pid_ != nullptr;
}
inline bool QueryProcedureRequest::has_pid() const {
  return _internal_has_pid();
}
inline const ::greptime::v1::meta::ProcedureId& QueryProcedureRequest::_internal_pid() const {
  const ::greptime::v1::meta::ProcedureId* p = _impl_.pid_;
  return p != nullptr ? *p : reinterpret_cast<const ::greptime::v1::meta::ProcedureId&>(
      ::greptime::v1::meta::_ProcedureId_default_instance_);
}
inline const ::greptime::v1::meta::ProcedureId& QueryProcedureRequest::pid() const {
  // @@protoc_insertion_point(field_get:greptime.v1.meta.QueryProcedureRequest.pid)
  return _internal_pid();
}
inline void QueryProcedureRequest::unsafe_arena_set_allocated_pid(
    ::greptime::v1::meta::ProcedureId* pid) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.pid_);
  }
  _impl_.pid_ = pid;
  if (pid) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:greptime.v1.meta.QueryProcedureRequest.pid)
}
inline ::greptime::v1::meta::ProcedureId* QueryProcedureRequest::release_pid() {
  
  ::greptime::v1::meta::ProcedureId* temp = _impl_.pid_;
  _impl_.pid_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::greptime::v1::meta::ProcedureId* QueryProcedureRequest::unsafe_arena_release_pid() {
  // @@protoc_insertion_point(field_release:greptime.v1.meta.QueryProcedureRequest.pid)
  
  ::greptime::v1::meta::ProcedureId* temp = _impl_.pid_;
  _impl_.pid_ = nullptr;
  return temp;
}
inline ::greptime::v1::meta::ProcedureId* QueryProcedureRequest::_internal_mutable_pid() {
  
  if (_impl_.pid_ == nullptr) {
    auto* p = CreateMaybeMessage<::greptime::v1::meta::ProcedureId>(GetArenaForAllocation());
    _impl_.pid_ = p;
  }
  return _impl_.pid_;
}
inline ::greptime::v1::meta::ProcedureId* QueryProcedureRequest::mutable_pid() {
  ::greptime::v1::meta::ProcedureId* _msg = _internal_mutable_pid();
  // @@protoc_insertion_point(field_mutable:greptime.v1.meta.QueryProcedureRequest.pid)
  return _msg;
}
inline void QueryProcedureRequest::set_allocated_pid(::greptime::v1::meta::ProcedureId* pid) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.pid_);
  }
  if (pid) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(pid));
    if (message_arena != submessage_arena) {
      pid = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, pid, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.pid_ = pid;
  // @@protoc_insertion_point(field_set_allocated:greptime.v1.meta.QueryProcedureRequest.pid)
}

// -------------------------------------------------------------------

// ProcedureStateResponse

// .greptime.v1.meta.ResponseHeader header = 1;
inline bool ProcedureStateResponse::_internal_has_header() const {
  return this != internal_default_instance() && _impl_.header_ != nullptr;
}
inline bool ProcedureStateResponse::has_header() const {
  return _internal_has_header();
}
inline const ::greptime::v1::meta::ResponseHeader& ProcedureStateResponse::_internal_header() const {
  const ::greptime::v1::meta::ResponseHeader* p = _impl_.header_;
  return p != nullptr ? *p : reinterpret_cast<const ::greptime::v1::meta::ResponseHeader&>(
      ::greptime::v1::meta::_ResponseHeader_default_instance_);
}
inline const ::greptime::v1::meta::ResponseHeader& ProcedureStateResponse::header() const {
  // @@protoc_insertion_point(field_get:greptime.v1.meta.ProcedureStateResponse.header)
  return _internal_header();
}
inline void ProcedureStateResponse::unsafe_arena_set_allocated_header(
    ::greptime::v1::meta::ResponseHeader* header) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.header_);
  }
  _impl_.header_ = header;
  if (header) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:greptime.v1.meta.ProcedureStateResponse.header)
}
inline ::greptime::v1::meta::ResponseHeader* ProcedureStateResponse::release_header() {
  
  ::greptime::v1::meta::ResponseHeader* temp = _impl_.header_;
  _impl_.header_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::greptime::v1::meta::ResponseHeader* ProcedureStateResponse::unsafe_arena_release_header() {
  // @@protoc_insertion_point(field_release:greptime.v1.meta.ProcedureStateResponse.header)
  
  ::greptime::v1::meta::ResponseHeader* temp = _impl_.header_;
  _impl_.header_ = nullptr;
  return temp;
}
inline ::greptime::v1::meta::ResponseHeader* ProcedureStateResponse::_internal_mutable_header() {
  
  if (_impl_.header_ == nullptr) {
    auto* p = CreateMaybeMessage<::greptime::v1::meta::ResponseHeader>(GetArenaForAllocation());
    _impl_.header_ = p;
  }
  return _impl_.header_;
}
inline ::greptime::v1::meta::ResponseHeader* ProcedureStateResponse::mutable_header() {
  ::greptime::v1::meta::ResponseHeader* _msg = _internal_mutable_header();
  // @@protoc_insertion_point(field_mutable:greptime.v1.meta.ProcedureStateResponse.header)
  return _msg;
}
inline void ProcedureStateResponse::set_allocated_header(::greptime::v1::meta::ResponseHeader* header) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.header_);
  }
  if (header) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(header));
    if (message_arena != submessage_arena) {
      header = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, header, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.header_ = header;
  // @@protoc_insertion_point(field_set_allocated:greptime.v1.meta.ProcedureStateResponse.header)
}

// .greptime.v1.meta.ProcedureStatus status = 2;
inline void ProcedureStateResponse::clear_status() {
  _impl_.status_ = 0;
}
inline ::greptime::v1::meta::ProcedureStatus ProcedureStateResponse::_internal_status() const {
  return static_cast< ::greptime::v1::meta::ProcedureStatus >(_impl_.status_);
}
inline ::greptime::v1::meta::ProcedureStatus ProcedureStateResponse::status() const {
  // @@protoc_insertion_point(field_get:greptime.v1.meta.ProcedureStateResponse.status)
  return _internal_status();
}
inline void ProcedureStateResponse::_internal_set_status(::greptime::v1::meta::ProcedureStatus value) {
  
  _impl_.status_ = value;
}
inline void ProcedureStateResponse::set_status(::greptime::v1::meta::ProcedureStatus value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:greptime.v1.meta.ProcedureStateResponse.status)
}

// string error = 3;
inline void ProcedureStateResponse::clear_error() {
  _impl_.error_.ClearToEmpty();
}
inline const std::string& ProcedureStateResponse::error() const {
  // @@protoc_insertion_point(field_get:greptime.v1.meta.ProcedureStateResponse.error)
  return _internal_error();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ProcedureStateResponse::set_error(ArgT0&& arg0, ArgT... args) {
 
 _impl_.error_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:greptime.v1.meta.ProcedureStateResponse.error)
}
inline std::string* ProcedureStateResponse::mutable_error() {
  std::string* _s = _internal_mutable_error();
  // @@protoc_insertion_point(field_mutable:greptime.v1.meta.ProcedureStateResponse.error)
  return _s;
}
inline const std::string& ProcedureStateResponse::_internal_error() const {
  return _impl_.error_.Get();
}
inline void ProcedureStateResponse::_internal_set_error(const std::string& value) {
  
  _impl_.error_.Set(value, GetArenaForAllocation());
}
inline std::string* ProcedureStateResponse::_internal_mutable_error() {
  
  return _impl_.error_.Mutable(GetArenaForAllocation());
}
inline std::string* ProcedureStateResponse::release_error() {
  // @@protoc_insertion_point(field_release:greptime.v1.meta.ProcedureStateResponse.error)
  return _impl_.error_.Release();
}
inline void ProcedureStateResponse::set_allocated_error(std::string* error) {
  if (error != nullptr) {
    
  } else {
    
  }
  _impl_.error_.SetAllocated(error, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.error_.IsDefault()) {
    _impl_.error_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:greptime.v1.meta.ProcedureStateResponse.error)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace meta
}  // namespace v1
}  // namespace greptime

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::greptime::v1::meta::ProcedureStatus> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::greptime::v1::meta::ProcedureStatus>() {
  return ::greptime::v1::meta::ProcedureStatus_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_greptime_2fv1_2fmeta_2fprocedure_2eproto
