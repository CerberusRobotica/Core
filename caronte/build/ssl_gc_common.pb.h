// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ssl_gc_common.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ssl_5fgc_5fcommon_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ssl_5fgc_5fcommon_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3012000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3012004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ssl_5fgc_5fcommon_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ssl_5fgc_5fcommon_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ssl_5fgc_5fcommon_2eproto;
class RobotId;
class RobotIdDefaultTypeInternal;
extern RobotIdDefaultTypeInternal _RobotId_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::RobotId* Arena::CreateMaybeMessage<::RobotId>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

enum Team : int {
  UNKNOWN = 0,
  YELLOW = 1,
  BLUE = 2
};
bool Team_IsValid(int value);
constexpr Team Team_MIN = UNKNOWN;
constexpr Team Team_MAX = BLUE;
constexpr int Team_ARRAYSIZE = Team_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Team_descriptor();
template<typename T>
inline const std::string& Team_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Team>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Team_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Team_descriptor(), enum_t_value);
}
inline bool Team_Parse(
    const std::string& name, Team* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Team>(
    Team_descriptor(), name, value);
}
enum Division : int {
  DIV_UNKNOWN = 0,
  DIV_A = 1,
  DIV_B = 2
};
bool Division_IsValid(int value);
constexpr Division Division_MIN = DIV_UNKNOWN;
constexpr Division Division_MAX = DIV_B;
constexpr int Division_ARRAYSIZE = Division_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Division_descriptor();
template<typename T>
inline const std::string& Division_Name(T enum_t_value) {
  static_assert(::std::is_same<T, Division>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function Division_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    Division_descriptor(), enum_t_value);
}
inline bool Division_Parse(
    const std::string& name, Division* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<Division>(
    Division_descriptor(), name, value);
}
// ===================================================================

class RobotId PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:RobotId) */ {
 public:
  inline RobotId() : RobotId(nullptr) {};
  virtual ~RobotId();

  RobotId(const RobotId& from);
  RobotId(RobotId&& from) noexcept
    : RobotId() {
    *this = ::std::move(from);
  }

  inline RobotId& operator=(const RobotId& from) {
    CopyFrom(from);
    return *this;
  }
  inline RobotId& operator=(RobotId&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  inline const ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance);
  }
  inline ::PROTOBUF_NAMESPACE_ID::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const RobotId& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const RobotId* internal_default_instance() {
    return reinterpret_cast<const RobotId*>(
               &_RobotId_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(RobotId& a, RobotId& b) {
    a.Swap(&b);
  }
  inline void Swap(RobotId* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(RobotId* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline RobotId* New() const final {
    return CreateMaybeMessage<RobotId>(nullptr);
  }

  RobotId* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<RobotId>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const RobotId& from);
  void MergeFrom(const RobotId& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(RobotId* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "RobotId";
  }
  protected:
  explicit RobotId(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_ssl_5fgc_5fcommon_2eproto);
    return ::descriptor_table_ssl_5fgc_5fcommon_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kIdFieldNumber = 1,
    kTeamFieldNumber = 2,
  };
  // optional uint32 id = 1;
  bool has_id() const;
  private:
  bool _internal_has_id() const;
  public:
  void clear_id();
  ::PROTOBUF_NAMESPACE_ID::uint32 id() const;
  void set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_id() const;
  void _internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // optional .Team team = 2;
  bool has_team() const;
  private:
  bool _internal_has_team() const;
  public:
  void clear_team();
  ::Team team() const;
  void set_team(::Team value);
  private:
  ::Team _internal_team() const;
  void _internal_set_team(::Team value);
  public:

  // @@protoc_insertion_point(class_scope:RobotId)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  ::PROTOBUF_NAMESPACE_ID::uint32 id_;
  int team_;
  friend struct ::TableStruct_ssl_5fgc_5fcommon_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// RobotId

// optional uint32 id = 1;
inline bool RobotId::_internal_has_id() const {
  bool value = (_has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool RobotId::has_id() const {
  return _internal_has_id();
}
inline void RobotId::clear_id() {
  id_ = 0u;
  _has_bits_[0] &= ~0x00000001u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 RobotId::_internal_id() const {
  return id_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 RobotId::id() const {
  // @@protoc_insertion_point(field_get:RobotId.id)
  return _internal_id();
}
inline void RobotId::_internal_set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _has_bits_[0] |= 0x00000001u;
  id_ = value;
}
inline void RobotId::set_id(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_id(value);
  // @@protoc_insertion_point(field_set:RobotId.id)
}

// optional .Team team = 2;
inline bool RobotId::_internal_has_team() const {
  bool value = (_has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool RobotId::has_team() const {
  return _internal_has_team();
}
inline void RobotId::clear_team() {
  team_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::Team RobotId::_internal_team() const {
  return static_cast< ::Team >(team_);
}
inline ::Team RobotId::team() const {
  // @@protoc_insertion_point(field_get:RobotId.team)
  return _internal_team();
}
inline void RobotId::_internal_set_team(::Team value) {
  assert(::Team_IsValid(value));
  _has_bits_[0] |= 0x00000002u;
  team_ = value;
}
inline void RobotId::set_team(::Team value) {
  _internal_set_team(value);
  // @@protoc_insertion_point(field_set:RobotId.team)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::Team> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Team>() {
  return ::Team_descriptor();
}
template <> struct is_proto_enum< ::Division> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::Division>() {
  return ::Division_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ssl_5fgc_5fcommon_2eproto
