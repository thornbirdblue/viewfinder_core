// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AuthMetadata.proto

#ifndef PROTOBUF_AuthMetadata_2eproto__INCLUDED
#define PROTOBUF_AuthMetadata_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_AuthMetadata_2eproto();
void protobuf_InitDefaults_AuthMetadata_2eproto();
void protobuf_AssignDesc_AuthMetadata_2eproto();
void protobuf_ShutdownFile_AuthMetadata_2eproto();

class AuthMetadata;

// ===================================================================

class AuthMetadata : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:AuthMetadata) */ {
 public:
  AuthMetadata();
  virtual ~AuthMetadata();

  AuthMetadata(const AuthMetadata& from);

  inline AuthMetadata& operator=(const AuthMetadata& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const AuthMetadata& default_instance();

  static const AuthMetadata* internal_default_instance();

  void Swap(AuthMetadata* other);

  // implements Message ----------------------------------------------

  inline AuthMetadata* New() const { return New(NULL); }

  AuthMetadata* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const AuthMetadata& from);
  void MergeFrom(const AuthMetadata& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(AuthMetadata* other);
  void UnsafeMergeFrom(const AuthMetadata& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 user_id = 1;
  bool has_user_id() const;
  void clear_user_id();
  static const int kUserIdFieldNumber = 1;
  ::google::protobuf::int64 user_id() const;
  void set_user_id(::google::protobuf::int64 value);

  // optional int64 device_id = 2;
  bool has_device_id() const;
  void clear_device_id();
  static const int kDeviceIdFieldNumber = 2;
  ::google::protobuf::int64 device_id() const;
  void set_device_id(::google::protobuf::int64 value);

  // optional bytes user_cookie = 3;
  bool has_user_cookie() const;
  void clear_user_cookie();
  static const int kUserCookieFieldNumber = 3;
  const ::std::string& user_cookie() const;
  void set_user_cookie(const ::std::string& value);
  void set_user_cookie(const char* value);
  void set_user_cookie(const void* value, size_t size);
  ::std::string* mutable_user_cookie();
  ::std::string* release_user_cookie();
  void set_allocated_user_cookie(::std::string* user_cookie);

  // optional bytes xsrf_cookie = 4;
  bool has_xsrf_cookie() const;
  void clear_xsrf_cookie();
  static const int kXsrfCookieFieldNumber = 4;
  const ::std::string& xsrf_cookie() const;
  void set_xsrf_cookie(const ::std::string& value);
  void set_xsrf_cookie(const char* value);
  void set_xsrf_cookie(const void* value, size_t size);
  ::std::string* mutable_xsrf_cookie();
  ::std::string* release_xsrf_cookie();
  void set_allocated_xsrf_cookie(::std::string* xsrf_cookie);

  // optional string device_uuid = 5;
  bool has_device_uuid() const;
  void clear_device_uuid();
  static const int kDeviceUuidFieldNumber = 5;
  const ::std::string& device_uuid() const;
  void set_device_uuid(const ::std::string& value);
  void set_device_uuid(const char* value);
  void set_device_uuid(const char* value, size_t size);
  ::std::string* mutable_device_uuid();
  ::std::string* release_device_uuid();
  void set_allocated_device_uuid(::std::string* device_uuid);

  // @@protoc_insertion_point(class_scope:AuthMetadata)
 private:
  inline void set_has_user_id();
  inline void clear_has_user_id();
  inline void set_has_device_id();
  inline void clear_has_device_id();
  inline void set_has_user_cookie();
  inline void clear_has_user_cookie();
  inline void set_has_xsrf_cookie();
  inline void clear_has_xsrf_cookie();
  inline void set_has_device_uuid();
  inline void clear_has_device_uuid();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr user_cookie_;
  ::google::protobuf::internal::ArenaStringPtr xsrf_cookie_;
  ::google::protobuf::internal::ArenaStringPtr device_uuid_;
  ::google::protobuf::int64 user_id_;
  ::google::protobuf::int64 device_id_;
  friend void  protobuf_InitDefaults_AuthMetadata_2eproto_impl();
  friend void  protobuf_AddDesc_AuthMetadata_2eproto_impl();
  friend void protobuf_AssignDesc_AuthMetadata_2eproto();
  friend void protobuf_ShutdownFile_AuthMetadata_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<AuthMetadata> AuthMetadata_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// AuthMetadata

// optional int64 user_id = 1;
inline bool AuthMetadata::has_user_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void AuthMetadata::set_has_user_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void AuthMetadata::clear_has_user_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void AuthMetadata::clear_user_id() {
  user_id_ = GOOGLE_LONGLONG(0);
  clear_has_user_id();
}
inline ::google::protobuf::int64 AuthMetadata::user_id() const {
  // @@protoc_insertion_point(field_get:AuthMetadata.user_id)
  return user_id_;
}
inline void AuthMetadata::set_user_id(::google::protobuf::int64 value) {
  set_has_user_id();
  user_id_ = value;
  // @@protoc_insertion_point(field_set:AuthMetadata.user_id)
}

// optional int64 device_id = 2;
inline bool AuthMetadata::has_device_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void AuthMetadata::set_has_device_id() {
  _has_bits_[0] |= 0x00000002u;
}
inline void AuthMetadata::clear_has_device_id() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void AuthMetadata::clear_device_id() {
  device_id_ = GOOGLE_LONGLONG(0);
  clear_has_device_id();
}
inline ::google::protobuf::int64 AuthMetadata::device_id() const {
  // @@protoc_insertion_point(field_get:AuthMetadata.device_id)
  return device_id_;
}
inline void AuthMetadata::set_device_id(::google::protobuf::int64 value) {
  set_has_device_id();
  device_id_ = value;
  // @@protoc_insertion_point(field_set:AuthMetadata.device_id)
}

// optional bytes user_cookie = 3;
inline bool AuthMetadata::has_user_cookie() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void AuthMetadata::set_has_user_cookie() {
  _has_bits_[0] |= 0x00000004u;
}
inline void AuthMetadata::clear_has_user_cookie() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void AuthMetadata::clear_user_cookie() {
  user_cookie_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_user_cookie();
}
inline const ::std::string& AuthMetadata::user_cookie() const {
  // @@protoc_insertion_point(field_get:AuthMetadata.user_cookie)
  return user_cookie_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AuthMetadata::set_user_cookie(const ::std::string& value) {
  set_has_user_cookie();
  user_cookie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AuthMetadata.user_cookie)
}
inline void AuthMetadata::set_user_cookie(const char* value) {
  set_has_user_cookie();
  user_cookie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AuthMetadata.user_cookie)
}
inline void AuthMetadata::set_user_cookie(const void* value, size_t size) {
  set_has_user_cookie();
  user_cookie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AuthMetadata.user_cookie)
}
inline ::std::string* AuthMetadata::mutable_user_cookie() {
  set_has_user_cookie();
  // @@protoc_insertion_point(field_mutable:AuthMetadata.user_cookie)
  return user_cookie_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AuthMetadata::release_user_cookie() {
  // @@protoc_insertion_point(field_release:AuthMetadata.user_cookie)
  clear_has_user_cookie();
  return user_cookie_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AuthMetadata::set_allocated_user_cookie(::std::string* user_cookie) {
  if (user_cookie != NULL) {
    set_has_user_cookie();
  } else {
    clear_has_user_cookie();
  }
  user_cookie_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), user_cookie);
  // @@protoc_insertion_point(field_set_allocated:AuthMetadata.user_cookie)
}

// optional bytes xsrf_cookie = 4;
inline bool AuthMetadata::has_xsrf_cookie() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void AuthMetadata::set_has_xsrf_cookie() {
  _has_bits_[0] |= 0x00000008u;
}
inline void AuthMetadata::clear_has_xsrf_cookie() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void AuthMetadata::clear_xsrf_cookie() {
  xsrf_cookie_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_xsrf_cookie();
}
inline const ::std::string& AuthMetadata::xsrf_cookie() const {
  // @@protoc_insertion_point(field_get:AuthMetadata.xsrf_cookie)
  return xsrf_cookie_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AuthMetadata::set_xsrf_cookie(const ::std::string& value) {
  set_has_xsrf_cookie();
  xsrf_cookie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AuthMetadata.xsrf_cookie)
}
inline void AuthMetadata::set_xsrf_cookie(const char* value) {
  set_has_xsrf_cookie();
  xsrf_cookie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AuthMetadata.xsrf_cookie)
}
inline void AuthMetadata::set_xsrf_cookie(const void* value, size_t size) {
  set_has_xsrf_cookie();
  xsrf_cookie_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AuthMetadata.xsrf_cookie)
}
inline ::std::string* AuthMetadata::mutable_xsrf_cookie() {
  set_has_xsrf_cookie();
  // @@protoc_insertion_point(field_mutable:AuthMetadata.xsrf_cookie)
  return xsrf_cookie_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AuthMetadata::release_xsrf_cookie() {
  // @@protoc_insertion_point(field_release:AuthMetadata.xsrf_cookie)
  clear_has_xsrf_cookie();
  return xsrf_cookie_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AuthMetadata::set_allocated_xsrf_cookie(::std::string* xsrf_cookie) {
  if (xsrf_cookie != NULL) {
    set_has_xsrf_cookie();
  } else {
    clear_has_xsrf_cookie();
  }
  xsrf_cookie_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), xsrf_cookie);
  // @@protoc_insertion_point(field_set_allocated:AuthMetadata.xsrf_cookie)
}

// optional string device_uuid = 5;
inline bool AuthMetadata::has_device_uuid() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void AuthMetadata::set_has_device_uuid() {
  _has_bits_[0] |= 0x00000010u;
}
inline void AuthMetadata::clear_has_device_uuid() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void AuthMetadata::clear_device_uuid() {
  device_uuid_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_device_uuid();
}
inline const ::std::string& AuthMetadata::device_uuid() const {
  // @@protoc_insertion_point(field_get:AuthMetadata.device_uuid)
  return device_uuid_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AuthMetadata::set_device_uuid(const ::std::string& value) {
  set_has_device_uuid();
  device_uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:AuthMetadata.device_uuid)
}
inline void AuthMetadata::set_device_uuid(const char* value) {
  set_has_device_uuid();
  device_uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:AuthMetadata.device_uuid)
}
inline void AuthMetadata::set_device_uuid(const char* value, size_t size) {
  set_has_device_uuid();
  device_uuid_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:AuthMetadata.device_uuid)
}
inline ::std::string* AuthMetadata::mutable_device_uuid() {
  set_has_device_uuid();
  // @@protoc_insertion_point(field_mutable:AuthMetadata.device_uuid)
  return device_uuid_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* AuthMetadata::release_device_uuid() {
  // @@protoc_insertion_point(field_release:AuthMetadata.device_uuid)
  clear_has_device_uuid();
  return device_uuid_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void AuthMetadata::set_allocated_device_uuid(::std::string* device_uuid) {
  if (device_uuid != NULL) {
    set_has_device_uuid();
  } else {
    clear_has_device_uuid();
  }
  device_uuid_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), device_uuid);
  // @@protoc_insertion_point(field_set_allocated:AuthMetadata.device_uuid)
}

inline const AuthMetadata* AuthMetadata::internal_default_instance() {
  return &AuthMetadata_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_AuthMetadata_2eproto__INCLUDED
