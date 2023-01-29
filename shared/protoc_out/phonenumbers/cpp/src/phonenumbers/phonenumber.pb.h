// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: phonenumber.proto

#ifndef PROTOBUF_phonenumber_2eproto__INCLUDED
#define PROTOBUF_phonenumber_2eproto__INCLUDED

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
#include <google/protobuf/message_lite.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_enum_util.h>
// @@protoc_insertion_point(includes)

namespace i18n {
namespace phonenumbers {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_phonenumber_2eproto();
void protobuf_InitDefaults_phonenumber_2eproto();
void protobuf_AssignDesc_phonenumber_2eproto();
void protobuf_ShutdownFile_phonenumber_2eproto();

class PhoneNumber;

enum PhoneNumber_CountryCodeSource {
  PhoneNumber_CountryCodeSource_FROM_NUMBER_WITH_PLUS_SIGN = 1,
  PhoneNumber_CountryCodeSource_FROM_NUMBER_WITH_IDD = 5,
  PhoneNumber_CountryCodeSource_FROM_NUMBER_WITHOUT_PLUS_SIGN = 10,
  PhoneNumber_CountryCodeSource_FROM_DEFAULT_COUNTRY = 20
};
bool PhoneNumber_CountryCodeSource_IsValid(int value);
const PhoneNumber_CountryCodeSource PhoneNumber_CountryCodeSource_CountryCodeSource_MIN = PhoneNumber_CountryCodeSource_FROM_NUMBER_WITH_PLUS_SIGN;
const PhoneNumber_CountryCodeSource PhoneNumber_CountryCodeSource_CountryCodeSource_MAX = PhoneNumber_CountryCodeSource_FROM_DEFAULT_COUNTRY;
const int PhoneNumber_CountryCodeSource_CountryCodeSource_ARRAYSIZE = PhoneNumber_CountryCodeSource_CountryCodeSource_MAX + 1;

// ===================================================================

class PhoneNumber : public ::google::protobuf::MessageLite /* @@protoc_insertion_point(class_definition:i18n.phonenumbers.PhoneNumber) */ {
 public:
  PhoneNumber();
  virtual ~PhoneNumber();

  PhoneNumber(const PhoneNumber& from);

  inline PhoneNumber& operator=(const PhoneNumber& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::std::string& unknown_fields() const {
    return _unknown_fields_.GetNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  inline ::std::string* mutable_unknown_fields() {
    return _unknown_fields_.MutableNoArena(
        &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }

  static const PhoneNumber& default_instance();

  static const PhoneNumber* internal_default_instance();

  void Swap(PhoneNumber* other);

  // implements Message ----------------------------------------------

  inline PhoneNumber* New() const { return New(NULL); }

  PhoneNumber* New(::google::protobuf::Arena* arena) const;
  void CheckTypeAndMergeFrom(const ::google::protobuf::MessageLite& from);
  void CopyFrom(const PhoneNumber& from);
  void MergeFrom(const PhoneNumber& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  void DiscardUnknownFields();
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(PhoneNumber* other);
  void UnsafeMergeFrom(const PhoneNumber& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _arena_ptr_;
  }
  inline ::google::protobuf::Arena* MaybeArenaPtr() const {
    return _arena_ptr_;
  }
  public:

  ::std::string GetTypeName() const;

  // nested types ----------------------------------------------------

  typedef PhoneNumber_CountryCodeSource CountryCodeSource;
  static const CountryCodeSource FROM_NUMBER_WITH_PLUS_SIGN =
    PhoneNumber_CountryCodeSource_FROM_NUMBER_WITH_PLUS_SIGN;
  static const CountryCodeSource FROM_NUMBER_WITH_IDD =
    PhoneNumber_CountryCodeSource_FROM_NUMBER_WITH_IDD;
  static const CountryCodeSource FROM_NUMBER_WITHOUT_PLUS_SIGN =
    PhoneNumber_CountryCodeSource_FROM_NUMBER_WITHOUT_PLUS_SIGN;
  static const CountryCodeSource FROM_DEFAULT_COUNTRY =
    PhoneNumber_CountryCodeSource_FROM_DEFAULT_COUNTRY;
  static inline bool CountryCodeSource_IsValid(int value) {
    return PhoneNumber_CountryCodeSource_IsValid(value);
  }
  static const CountryCodeSource CountryCodeSource_MIN =
    PhoneNumber_CountryCodeSource_CountryCodeSource_MIN;
  static const CountryCodeSource CountryCodeSource_MAX =
    PhoneNumber_CountryCodeSource_CountryCodeSource_MAX;
  static const int CountryCodeSource_ARRAYSIZE =
    PhoneNumber_CountryCodeSource_CountryCodeSource_ARRAYSIZE;

  // accessors -------------------------------------------------------

  // required int32 country_code = 1;
  bool has_country_code() const;
  void clear_country_code();
  static const int kCountryCodeFieldNumber = 1;
  ::google::protobuf::int32 country_code() const;
  void set_country_code(::google::protobuf::int32 value);

  // required uint64 national_number = 2;
  bool has_national_number() const;
  void clear_national_number();
  static const int kNationalNumberFieldNumber = 2;
  ::google::protobuf::uint64 national_number() const;
  void set_national_number(::google::protobuf::uint64 value);

  // optional string extension = 3;
  bool has_extension() const;
  void clear_extension();
  static const int kExtensionFieldNumber = 3;
  const ::std::string& extension() const;
  void set_extension(const ::std::string& value);
  void set_extension(const char* value);
  void set_extension(const char* value, size_t size);
  ::std::string* mutable_extension();
  ::std::string* release_extension();
  void set_allocated_extension(::std::string* extension);

  // optional bool italian_leading_zero = 4;
  bool has_italian_leading_zero() const;
  void clear_italian_leading_zero();
  static const int kItalianLeadingZeroFieldNumber = 4;
  bool italian_leading_zero() const;
  void set_italian_leading_zero(bool value);

  // optional string raw_input = 5;
  bool has_raw_input() const;
  void clear_raw_input();
  static const int kRawInputFieldNumber = 5;
  const ::std::string& raw_input() const;
  void set_raw_input(const ::std::string& value);
  void set_raw_input(const char* value);
  void set_raw_input(const char* value, size_t size);
  ::std::string* mutable_raw_input();
  ::std::string* release_raw_input();
  void set_allocated_raw_input(::std::string* raw_input);

  // optional .i18n.phonenumbers.PhoneNumber.CountryCodeSource country_code_source = 6;
  bool has_country_code_source() const;
  void clear_country_code_source();
  static const int kCountryCodeSourceFieldNumber = 6;
  ::i18n::phonenumbers::PhoneNumber_CountryCodeSource country_code_source() const;
  void set_country_code_source(::i18n::phonenumbers::PhoneNumber_CountryCodeSource value);

  // optional string preferred_domestic_carrier_code = 7;
  bool has_preferred_domestic_carrier_code() const;
  void clear_preferred_domestic_carrier_code();
  static const int kPreferredDomesticCarrierCodeFieldNumber = 7;
  const ::std::string& preferred_domestic_carrier_code() const;
  void set_preferred_domestic_carrier_code(const ::std::string& value);
  void set_preferred_domestic_carrier_code(const char* value);
  void set_preferred_domestic_carrier_code(const char* value, size_t size);
  ::std::string* mutable_preferred_domestic_carrier_code();
  ::std::string* release_preferred_domestic_carrier_code();
  void set_allocated_preferred_domestic_carrier_code(::std::string* preferred_domestic_carrier_code);

  // @@protoc_insertion_point(class_scope:i18n.phonenumbers.PhoneNumber)
 private:
  inline void set_has_country_code();
  inline void clear_has_country_code();
  inline void set_has_national_number();
  inline void clear_has_national_number();
  inline void set_has_extension();
  inline void clear_has_extension();
  inline void set_has_italian_leading_zero();
  inline void clear_has_italian_leading_zero();
  inline void set_has_raw_input();
  inline void clear_has_raw_input();
  inline void set_has_country_code_source();
  inline void clear_has_country_code_source();
  inline void set_has_preferred_domestic_carrier_code();
  inline void clear_has_preferred_domestic_carrier_code();

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::ArenaStringPtr _unknown_fields_;
  ::google::protobuf::Arena* _arena_ptr_;

  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr extension_;
  ::google::protobuf::internal::ArenaStringPtr raw_input_;
  ::google::protobuf::internal::ArenaStringPtr preferred_domestic_carrier_code_;
  ::google::protobuf::uint64 national_number_;
  ::google::protobuf::int32 country_code_;
  bool italian_leading_zero_;
  int country_code_source_;
  friend void  protobuf_InitDefaults_phonenumber_2eproto_impl();
  friend void  protobuf_AddDesc_phonenumber_2eproto_impl();
  friend void protobuf_AssignDesc_phonenumber_2eproto();
  friend void protobuf_ShutdownFile_phonenumber_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<PhoneNumber> PhoneNumber_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// PhoneNumber

// required int32 country_code = 1;
inline bool PhoneNumber::has_country_code() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void PhoneNumber::set_has_country_code() {
  _has_bits_[0] |= 0x00000001u;
}
inline void PhoneNumber::clear_has_country_code() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void PhoneNumber::clear_country_code() {
  country_code_ = 0;
  clear_has_country_code();
}
inline ::google::protobuf::int32 PhoneNumber::country_code() const {
  // @@protoc_insertion_point(field_get:i18n.phonenumbers.PhoneNumber.country_code)
  return country_code_;
}
inline void PhoneNumber::set_country_code(::google::protobuf::int32 value) {
  set_has_country_code();
  country_code_ = value;
  // @@protoc_insertion_point(field_set:i18n.phonenumbers.PhoneNumber.country_code)
}

// required uint64 national_number = 2;
inline bool PhoneNumber::has_national_number() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void PhoneNumber::set_has_national_number() {
  _has_bits_[0] |= 0x00000002u;
}
inline void PhoneNumber::clear_has_national_number() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void PhoneNumber::clear_national_number() {
  national_number_ = GOOGLE_ULONGLONG(0);
  clear_has_national_number();
}
inline ::google::protobuf::uint64 PhoneNumber::national_number() const {
  // @@protoc_insertion_point(field_get:i18n.phonenumbers.PhoneNumber.national_number)
  return national_number_;
}
inline void PhoneNumber::set_national_number(::google::protobuf::uint64 value) {
  set_has_national_number();
  national_number_ = value;
  // @@protoc_insertion_point(field_set:i18n.phonenumbers.PhoneNumber.national_number)
}

// optional string extension = 3;
inline bool PhoneNumber::has_extension() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void PhoneNumber::set_has_extension() {
  _has_bits_[0] |= 0x00000004u;
}
inline void PhoneNumber::clear_has_extension() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void PhoneNumber::clear_extension() {
  extension_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_extension();
}
inline const ::std::string& PhoneNumber::extension() const {
  // @@protoc_insertion_point(field_get:i18n.phonenumbers.PhoneNumber.extension)
  return extension_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PhoneNumber::set_extension(const ::std::string& value) {
  set_has_extension();
  extension_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:i18n.phonenumbers.PhoneNumber.extension)
}
inline void PhoneNumber::set_extension(const char* value) {
  set_has_extension();
  extension_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:i18n.phonenumbers.PhoneNumber.extension)
}
inline void PhoneNumber::set_extension(const char* value, size_t size) {
  set_has_extension();
  extension_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:i18n.phonenumbers.PhoneNumber.extension)
}
inline ::std::string* PhoneNumber::mutable_extension() {
  set_has_extension();
  // @@protoc_insertion_point(field_mutable:i18n.phonenumbers.PhoneNumber.extension)
  return extension_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PhoneNumber::release_extension() {
  // @@protoc_insertion_point(field_release:i18n.phonenumbers.PhoneNumber.extension)
  clear_has_extension();
  return extension_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PhoneNumber::set_allocated_extension(::std::string* extension) {
  if (extension != NULL) {
    set_has_extension();
  } else {
    clear_has_extension();
  }
  extension_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), extension);
  // @@protoc_insertion_point(field_set_allocated:i18n.phonenumbers.PhoneNumber.extension)
}

// optional bool italian_leading_zero = 4;
inline bool PhoneNumber::has_italian_leading_zero() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void PhoneNumber::set_has_italian_leading_zero() {
  _has_bits_[0] |= 0x00000008u;
}
inline void PhoneNumber::clear_has_italian_leading_zero() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void PhoneNumber::clear_italian_leading_zero() {
  italian_leading_zero_ = false;
  clear_has_italian_leading_zero();
}
inline bool PhoneNumber::italian_leading_zero() const {
  // @@protoc_insertion_point(field_get:i18n.phonenumbers.PhoneNumber.italian_leading_zero)
  return italian_leading_zero_;
}
inline void PhoneNumber::set_italian_leading_zero(bool value) {
  set_has_italian_leading_zero();
  italian_leading_zero_ = value;
  // @@protoc_insertion_point(field_set:i18n.phonenumbers.PhoneNumber.italian_leading_zero)
}

// optional string raw_input = 5;
inline bool PhoneNumber::has_raw_input() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void PhoneNumber::set_has_raw_input() {
  _has_bits_[0] |= 0x00000010u;
}
inline void PhoneNumber::clear_has_raw_input() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void PhoneNumber::clear_raw_input() {
  raw_input_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_raw_input();
}
inline const ::std::string& PhoneNumber::raw_input() const {
  // @@protoc_insertion_point(field_get:i18n.phonenumbers.PhoneNumber.raw_input)
  return raw_input_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PhoneNumber::set_raw_input(const ::std::string& value) {
  set_has_raw_input();
  raw_input_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:i18n.phonenumbers.PhoneNumber.raw_input)
}
inline void PhoneNumber::set_raw_input(const char* value) {
  set_has_raw_input();
  raw_input_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:i18n.phonenumbers.PhoneNumber.raw_input)
}
inline void PhoneNumber::set_raw_input(const char* value, size_t size) {
  set_has_raw_input();
  raw_input_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:i18n.phonenumbers.PhoneNumber.raw_input)
}
inline ::std::string* PhoneNumber::mutable_raw_input() {
  set_has_raw_input();
  // @@protoc_insertion_point(field_mutable:i18n.phonenumbers.PhoneNumber.raw_input)
  return raw_input_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PhoneNumber::release_raw_input() {
  // @@protoc_insertion_point(field_release:i18n.phonenumbers.PhoneNumber.raw_input)
  clear_has_raw_input();
  return raw_input_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PhoneNumber::set_allocated_raw_input(::std::string* raw_input) {
  if (raw_input != NULL) {
    set_has_raw_input();
  } else {
    clear_has_raw_input();
  }
  raw_input_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), raw_input);
  // @@protoc_insertion_point(field_set_allocated:i18n.phonenumbers.PhoneNumber.raw_input)
}

// optional .i18n.phonenumbers.PhoneNumber.CountryCodeSource country_code_source = 6;
inline bool PhoneNumber::has_country_code_source() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void PhoneNumber::set_has_country_code_source() {
  _has_bits_[0] |= 0x00000020u;
}
inline void PhoneNumber::clear_has_country_code_source() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void PhoneNumber::clear_country_code_source() {
  country_code_source_ = 1;
  clear_has_country_code_source();
}
inline ::i18n::phonenumbers::PhoneNumber_CountryCodeSource PhoneNumber::country_code_source() const {
  // @@protoc_insertion_point(field_get:i18n.phonenumbers.PhoneNumber.country_code_source)
  return static_cast< ::i18n::phonenumbers::PhoneNumber_CountryCodeSource >(country_code_source_);
}
inline void PhoneNumber::set_country_code_source(::i18n::phonenumbers::PhoneNumber_CountryCodeSource value) {
  assert(::i18n::phonenumbers::PhoneNumber_CountryCodeSource_IsValid(value));
  set_has_country_code_source();
  country_code_source_ = value;
  // @@protoc_insertion_point(field_set:i18n.phonenumbers.PhoneNumber.country_code_source)
}

// optional string preferred_domestic_carrier_code = 7;
inline bool PhoneNumber::has_preferred_domestic_carrier_code() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void PhoneNumber::set_has_preferred_domestic_carrier_code() {
  _has_bits_[0] |= 0x00000040u;
}
inline void PhoneNumber::clear_has_preferred_domestic_carrier_code() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void PhoneNumber::clear_preferred_domestic_carrier_code() {
  preferred_domestic_carrier_code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_preferred_domestic_carrier_code();
}
inline const ::std::string& PhoneNumber::preferred_domestic_carrier_code() const {
  // @@protoc_insertion_point(field_get:i18n.phonenumbers.PhoneNumber.preferred_domestic_carrier_code)
  return preferred_domestic_carrier_code_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PhoneNumber::set_preferred_domestic_carrier_code(const ::std::string& value) {
  set_has_preferred_domestic_carrier_code();
  preferred_domestic_carrier_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:i18n.phonenumbers.PhoneNumber.preferred_domestic_carrier_code)
}
inline void PhoneNumber::set_preferred_domestic_carrier_code(const char* value) {
  set_has_preferred_domestic_carrier_code();
  preferred_domestic_carrier_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:i18n.phonenumbers.PhoneNumber.preferred_domestic_carrier_code)
}
inline void PhoneNumber::set_preferred_domestic_carrier_code(const char* value, size_t size) {
  set_has_preferred_domestic_carrier_code();
  preferred_domestic_carrier_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:i18n.phonenumbers.PhoneNumber.preferred_domestic_carrier_code)
}
inline ::std::string* PhoneNumber::mutable_preferred_domestic_carrier_code() {
  set_has_preferred_domestic_carrier_code();
  // @@protoc_insertion_point(field_mutable:i18n.phonenumbers.PhoneNumber.preferred_domestic_carrier_code)
  return preferred_domestic_carrier_code_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* PhoneNumber::release_preferred_domestic_carrier_code() {
  // @@protoc_insertion_point(field_release:i18n.phonenumbers.PhoneNumber.preferred_domestic_carrier_code)
  clear_has_preferred_domestic_carrier_code();
  return preferred_domestic_carrier_code_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void PhoneNumber::set_allocated_preferred_domestic_carrier_code(::std::string* preferred_domestic_carrier_code) {
  if (preferred_domestic_carrier_code != NULL) {
    set_has_preferred_domestic_carrier_code();
  } else {
    clear_has_preferred_domestic_carrier_code();
  }
  preferred_domestic_carrier_code_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), preferred_domestic_carrier_code);
  // @@protoc_insertion_point(field_set_allocated:i18n.phonenumbers.PhoneNumber.preferred_domestic_carrier_code)
}

inline const PhoneNumber* PhoneNumber::internal_default_instance() {
  return &PhoneNumber_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace phonenumbers
}  // namespace i18n

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::i18n::phonenumbers::PhoneNumber_CountryCodeSource> : ::google::protobuf::internal::true_type {};

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_phonenumber_2eproto__INCLUDED