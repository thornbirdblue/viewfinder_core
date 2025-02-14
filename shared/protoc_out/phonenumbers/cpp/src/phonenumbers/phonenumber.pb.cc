// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: phonenumber.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "phonenumber.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/io/zero_copy_stream_impl_lite.h>
// @@protoc_insertion_point(includes)

namespace i18n {
namespace phonenumbers {

void protobuf_ShutdownFile_phonenumber_2eproto() {
  PhoneNumber_default_instance_.Shutdown();
}

void protobuf_InitDefaults_phonenumber_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  PhoneNumber_default_instance_.DefaultConstruct();
  PhoneNumber_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_phonenumber_2eproto_once_);
void protobuf_InitDefaults_phonenumber_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_phonenumber_2eproto_once_,
                 &protobuf_InitDefaults_phonenumber_2eproto_impl);
}
void protobuf_AddDesc_phonenumber_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_phonenumber_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_phonenumber_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_phonenumber_2eproto_once_);
void protobuf_AddDesc_phonenumber_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_phonenumber_2eproto_once_,
                 &protobuf_AddDesc_phonenumber_2eproto_impl);
}
#ifdef GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_phonenumber_2eproto {
  StaticDescriptorInitializer_phonenumber_2eproto() {
    protobuf_AddDesc_phonenumber_2eproto();
  }
} static_descriptor_initializer_phonenumber_2eproto_;
#endif  // GOOGLE_PROTOBUF_NO_STATIC_INITIALIZER

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

static ::std::string* MutableUnknownFieldsForPhoneNumber(
    PhoneNumber* ptr) {
  return ptr->mutable_unknown_fields();
}

bool PhoneNumber_CountryCodeSource_IsValid(int value) {
  switch (value) {
    case 1:
    case 5:
    case 10:
    case 20:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const PhoneNumber_CountryCodeSource PhoneNumber::FROM_NUMBER_WITH_PLUS_SIGN;
const PhoneNumber_CountryCodeSource PhoneNumber::FROM_NUMBER_WITH_IDD;
const PhoneNumber_CountryCodeSource PhoneNumber::FROM_NUMBER_WITHOUT_PLUS_SIGN;
const PhoneNumber_CountryCodeSource PhoneNumber::FROM_DEFAULT_COUNTRY;
const PhoneNumber_CountryCodeSource PhoneNumber::CountryCodeSource_MIN;
const PhoneNumber_CountryCodeSource PhoneNumber::CountryCodeSource_MAX;
const int PhoneNumber::CountryCodeSource_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int PhoneNumber::kCountryCodeFieldNumber;
const int PhoneNumber::kNationalNumberFieldNumber;
const int PhoneNumber::kExtensionFieldNumber;
const int PhoneNumber::kItalianLeadingZeroFieldNumber;
const int PhoneNumber::kRawInputFieldNumber;
const int PhoneNumber::kCountryCodeSourceFieldNumber;
const int PhoneNumber::kPreferredDomesticCarrierCodeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

PhoneNumber::PhoneNumber()
  : ::google::protobuf::MessageLite(), _arena_ptr_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_phonenumber_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:i18n.phonenumbers.PhoneNumber)
}

void PhoneNumber::InitAsDefaultInstance() {
}

PhoneNumber::PhoneNumber(const PhoneNumber& from)
  : ::google::protobuf::MessageLite(),
    _arena_ptr_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:i18n.phonenumbers.PhoneNumber)
}

void PhoneNumber::SharedCtor() {
  _cached_size_ = 0;
  _unknown_fields_.UnsafeSetDefault(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  extension_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  raw_input_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  preferred_domestic_carrier_code_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&national_number_, 0, reinterpret_cast<char*>(&italian_leading_zero_) -
    reinterpret_cast<char*>(&national_number_) + sizeof(italian_leading_zero_));
  country_code_source_ = 1;
}

PhoneNumber::~PhoneNumber() {
  // @@protoc_insertion_point(destructor:i18n.phonenumbers.PhoneNumber)
  SharedDtor();
}

void PhoneNumber::SharedDtor() {
  _unknown_fields_.DestroyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
  extension_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  raw_input_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  preferred_domestic_carrier_code_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void PhoneNumber::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const PhoneNumber& PhoneNumber::default_instance() {
  protobuf_InitDefaults_phonenumber_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<PhoneNumber> PhoneNumber_default_instance_;

PhoneNumber* PhoneNumber::New(::google::protobuf::Arena* arena) const {
  PhoneNumber* n = new PhoneNumber;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void PhoneNumber::Clear() {
// @@protoc_insertion_point(message_clear_start:i18n.phonenumbers.PhoneNumber)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(PhoneNumber, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<PhoneNumber*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 127u) {
    ZR_(national_number_, italian_leading_zero_);
    if (has_extension()) {
      extension_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_raw_input()) {
      raw_input_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    country_code_source_ = 1;
    if (has_preferred_domestic_carrier_code()) {
      preferred_domestic_carrier_code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }

#undef ZR_HELPER_
#undef ZR_

  _has_bits_.Clear();
  _unknown_fields_.ClearToEmptyNoArena(
      &::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool PhoneNumber::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  ::google::protobuf::io::LazyStringOutputStream unknown_fields_string(
      ::google::protobuf::NewPermanentCallback(
          &MutableUnknownFieldsForPhoneNumber, this));
  ::google::protobuf::io::CodedOutputStream unknown_fields_stream(
      &unknown_fields_string, false);
  // @@protoc_insertion_point(parse_start:i18n.phonenumbers.PhoneNumber)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 country_code = 1;
      case 1: {
        if (tag == 8) {
          set_has_country_code();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &country_code_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_national_number;
        break;
      }

      // required uint64 national_number = 2;
      case 2: {
        if (tag == 16) {
         parse_national_number:
          set_has_national_number();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &national_number_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_extension;
        break;
      }

      // optional string extension = 3;
      case 3: {
        if (tag == 26) {
         parse_extension:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_extension()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_italian_leading_zero;
        break;
      }

      // optional bool italian_leading_zero = 4;
      case 4: {
        if (tag == 32) {
         parse_italian_leading_zero:
          set_has_italian_leading_zero();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &italian_leading_zero_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(42)) goto parse_raw_input;
        break;
      }

      // optional string raw_input = 5;
      case 5: {
        if (tag == 42) {
         parse_raw_input:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_raw_input()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_country_code_source;
        break;
      }

      // optional .i18n.phonenumbers.PhoneNumber.CountryCodeSource country_code_source = 6;
      case 6: {
        if (tag == 48) {
         parse_country_code_source:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::i18n::phonenumbers::PhoneNumber_CountryCodeSource_IsValid(value)) {
            set_country_code_source(static_cast< ::i18n::phonenumbers::PhoneNumber_CountryCodeSource >(value));
          } else {
            unknown_fields_stream.WriteVarint32(48);
            unknown_fields_stream.WriteVarint32(value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_preferred_domestic_carrier_code;
        break;
      }

      // optional string preferred_domestic_carrier_code = 7;
      case 7: {
        if (tag == 58) {
         parse_preferred_domestic_carrier_code:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_preferred_domestic_carrier_code()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(
            input, tag, &unknown_fields_stream));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:i18n.phonenumbers.PhoneNumber)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:i18n.phonenumbers.PhoneNumber)
  return false;
#undef DO_
}

void PhoneNumber::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:i18n.phonenumbers.PhoneNumber)
  // required int32 country_code = 1;
  if (has_country_code()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->country_code(), output);
  }

  // required uint64 national_number = 2;
  if (has_national_number()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->national_number(), output);
  }

  // optional string extension = 3;
  if (has_extension()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->extension(), output);
  }

  // optional bool italian_leading_zero = 4;
  if (has_italian_leading_zero()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(4, this->italian_leading_zero(), output);
  }

  // optional string raw_input = 5;
  if (has_raw_input()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      5, this->raw_input(), output);
  }

  // optional .i18n.phonenumbers.PhoneNumber.CountryCodeSource country_code_source = 6;
  if (has_country_code_source()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      6, this->country_code_source(), output);
  }

  // optional string preferred_domestic_carrier_code = 7;
  if (has_preferred_domestic_carrier_code()) {
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      7, this->preferred_domestic_carrier_code(), output);
  }

  output->WriteRaw(unknown_fields().data(),
                   static_cast<int>(unknown_fields().size()));
  // @@protoc_insertion_point(serialize_end:i18n.phonenumbers.PhoneNumber)
}

size_t PhoneNumber::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:i18n.phonenumbers.PhoneNumber)
  size_t total_size = 0;

  if (has_country_code()) {
    // required int32 country_code = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->country_code());
  }

  if (has_national_number()) {
    // required uint64 national_number = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->national_number());
  }

  return total_size;
}
size_t PhoneNumber::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:i18n.phonenumbers.PhoneNumber)
  size_t total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required int32 country_code = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->country_code());

    // required uint64 national_number = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->national_number());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_has_bits_[2 / 32] & 124u) {
    // optional string extension = 3;
    if (has_extension()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->extension());
    }

    // optional bool italian_leading_zero = 4;
    if (has_italian_leading_zero()) {
      total_size += 1 + 1;
    }

    // optional string raw_input = 5;
    if (has_raw_input()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->raw_input());
    }

    // optional .i18n.phonenumbers.PhoneNumber.CountryCodeSource country_code_source = 6;
    if (has_country_code_source()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->country_code_source());
    }

    // optional string preferred_domestic_carrier_code = 7;
    if (has_preferred_domestic_carrier_code()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->preferred_domestic_carrier_code());
    }

  }
  total_size += unknown_fields().size();

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void PhoneNumber::CheckTypeAndMergeFrom(
    const ::google::protobuf::MessageLite& from) {
  MergeFrom(*::google::protobuf::down_cast<const PhoneNumber*>(&from));
}

void PhoneNumber::MergeFrom(const PhoneNumber& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:i18n.phonenumbers.PhoneNumber)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void PhoneNumber::UnsafeMergeFrom(const PhoneNumber& from) {
  GOOGLE_DCHECK(&from != this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_country_code()) {
      set_country_code(from.country_code());
    }
    if (from.has_national_number()) {
      set_national_number(from.national_number());
    }
    if (from.has_extension()) {
      set_has_extension();
      extension_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.extension_);
    }
    if (from.has_italian_leading_zero()) {
      set_italian_leading_zero(from.italian_leading_zero());
    }
    if (from.has_raw_input()) {
      set_has_raw_input();
      raw_input_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.raw_input_);
    }
    if (from.has_country_code_source()) {
      set_country_code_source(from.country_code_source());
    }
    if (from.has_preferred_domestic_carrier_code()) {
      set_has_preferred_domestic_carrier_code();
      preferred_domestic_carrier_code_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.preferred_domestic_carrier_code_);
    }
  }
  if (!from.unknown_fields().empty()) {
    mutable_unknown_fields()->append(from.unknown_fields());
  }
}

void PhoneNumber::CopyFrom(const PhoneNumber& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:i18n.phonenumbers.PhoneNumber)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool PhoneNumber::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void PhoneNumber::Swap(PhoneNumber* other) {
  if (other == this) return;
  InternalSwap(other);
}
void PhoneNumber::InternalSwap(PhoneNumber* other) {
  std::swap(country_code_, other->country_code_);
  std::swap(national_number_, other->national_number_);
  extension_.Swap(&other->extension_);
  std::swap(italian_leading_zero_, other->italian_leading_zero_);
  raw_input_.Swap(&other->raw_input_);
  std::swap(country_code_source_, other->country_code_source_);
  preferred_domestic_carrier_code_.Swap(&other->preferred_domestic_carrier_code_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _unknown_fields_.Swap(&other->_unknown_fields_);
  std::swap(_cached_size_, other->_cached_size_);
}

::std::string PhoneNumber::GetTypeName() const {
  return "i18n.phonenumbers.PhoneNumber";
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// PhoneNumber

// required int32 country_code = 1;
bool PhoneNumber::has_country_code() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void PhoneNumber::set_has_country_code() {
  _has_bits_[0] |= 0x00000001u;
}
void PhoneNumber::clear_has_country_code() {
  _has_bits_[0] &= ~0x00000001u;
}
void PhoneNumber::clear_country_code() {
  country_code_ = 0;
  clear_has_country_code();
}
::google::protobuf::int32 PhoneNumber::country_code() const {
  // @@protoc_insertion_point(field_get:i18n.phonenumbers.PhoneNumber.country_code)
  return country_code_;
}
void PhoneNumber::set_country_code(::google::protobuf::int32 value) {
  set_has_country_code();
  country_code_ = value;
  // @@protoc_insertion_point(field_set:i18n.phonenumbers.PhoneNumber.country_code)
}

// required uint64 national_number = 2;
bool PhoneNumber::has_national_number() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void PhoneNumber::set_has_national_number() {
  _has_bits_[0] |= 0x00000002u;
}
void PhoneNumber::clear_has_national_number() {
  _has_bits_[0] &= ~0x00000002u;
}
void PhoneNumber::clear_national_number() {
  national_number_ = GOOGLE_ULONGLONG(0);
  clear_has_national_number();
}
::google::protobuf::uint64 PhoneNumber::national_number() const {
  // @@protoc_insertion_point(field_get:i18n.phonenumbers.PhoneNumber.national_number)
  return national_number_;
}
void PhoneNumber::set_national_number(::google::protobuf::uint64 value) {
  set_has_national_number();
  national_number_ = value;
  // @@protoc_insertion_point(field_set:i18n.phonenumbers.PhoneNumber.national_number)
}

// optional string extension = 3;
bool PhoneNumber::has_extension() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void PhoneNumber::set_has_extension() {
  _has_bits_[0] |= 0x00000004u;
}
void PhoneNumber::clear_has_extension() {
  _has_bits_[0] &= ~0x00000004u;
}
void PhoneNumber::clear_extension() {
  extension_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_extension();
}
const ::std::string& PhoneNumber::extension() const {
  // @@protoc_insertion_point(field_get:i18n.phonenumbers.PhoneNumber.extension)
  return extension_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PhoneNumber::set_extension(const ::std::string& value) {
  set_has_extension();
  extension_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:i18n.phonenumbers.PhoneNumber.extension)
}
void PhoneNumber::set_extension(const char* value) {
  set_has_extension();
  extension_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:i18n.phonenumbers.PhoneNumber.extension)
}
void PhoneNumber::set_extension(const char* value, size_t size) {
  set_has_extension();
  extension_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:i18n.phonenumbers.PhoneNumber.extension)
}
::std::string* PhoneNumber::mutable_extension() {
  set_has_extension();
  // @@protoc_insertion_point(field_mutable:i18n.phonenumbers.PhoneNumber.extension)
  return extension_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PhoneNumber::release_extension() {
  // @@protoc_insertion_point(field_release:i18n.phonenumbers.PhoneNumber.extension)
  clear_has_extension();
  return extension_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PhoneNumber::set_allocated_extension(::std::string* extension) {
  if (extension != NULL) {
    set_has_extension();
  } else {
    clear_has_extension();
  }
  extension_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), extension);
  // @@protoc_insertion_point(field_set_allocated:i18n.phonenumbers.PhoneNumber.extension)
}

// optional bool italian_leading_zero = 4;
bool PhoneNumber::has_italian_leading_zero() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void PhoneNumber::set_has_italian_leading_zero() {
  _has_bits_[0] |= 0x00000008u;
}
void PhoneNumber::clear_has_italian_leading_zero() {
  _has_bits_[0] &= ~0x00000008u;
}
void PhoneNumber::clear_italian_leading_zero() {
  italian_leading_zero_ = false;
  clear_has_italian_leading_zero();
}
bool PhoneNumber::italian_leading_zero() const {
  // @@protoc_insertion_point(field_get:i18n.phonenumbers.PhoneNumber.italian_leading_zero)
  return italian_leading_zero_;
}
void PhoneNumber::set_italian_leading_zero(bool value) {
  set_has_italian_leading_zero();
  italian_leading_zero_ = value;
  // @@protoc_insertion_point(field_set:i18n.phonenumbers.PhoneNumber.italian_leading_zero)
}

// optional string raw_input = 5;
bool PhoneNumber::has_raw_input() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void PhoneNumber::set_has_raw_input() {
  _has_bits_[0] |= 0x00000010u;
}
void PhoneNumber::clear_has_raw_input() {
  _has_bits_[0] &= ~0x00000010u;
}
void PhoneNumber::clear_raw_input() {
  raw_input_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_raw_input();
}
const ::std::string& PhoneNumber::raw_input() const {
  // @@protoc_insertion_point(field_get:i18n.phonenumbers.PhoneNumber.raw_input)
  return raw_input_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PhoneNumber::set_raw_input(const ::std::string& value) {
  set_has_raw_input();
  raw_input_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:i18n.phonenumbers.PhoneNumber.raw_input)
}
void PhoneNumber::set_raw_input(const char* value) {
  set_has_raw_input();
  raw_input_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:i18n.phonenumbers.PhoneNumber.raw_input)
}
void PhoneNumber::set_raw_input(const char* value, size_t size) {
  set_has_raw_input();
  raw_input_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:i18n.phonenumbers.PhoneNumber.raw_input)
}
::std::string* PhoneNumber::mutable_raw_input() {
  set_has_raw_input();
  // @@protoc_insertion_point(field_mutable:i18n.phonenumbers.PhoneNumber.raw_input)
  return raw_input_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PhoneNumber::release_raw_input() {
  // @@protoc_insertion_point(field_release:i18n.phonenumbers.PhoneNumber.raw_input)
  clear_has_raw_input();
  return raw_input_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PhoneNumber::set_allocated_raw_input(::std::string* raw_input) {
  if (raw_input != NULL) {
    set_has_raw_input();
  } else {
    clear_has_raw_input();
  }
  raw_input_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), raw_input);
  // @@protoc_insertion_point(field_set_allocated:i18n.phonenumbers.PhoneNumber.raw_input)
}

// optional .i18n.phonenumbers.PhoneNumber.CountryCodeSource country_code_source = 6;
bool PhoneNumber::has_country_code_source() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void PhoneNumber::set_has_country_code_source() {
  _has_bits_[0] |= 0x00000020u;
}
void PhoneNumber::clear_has_country_code_source() {
  _has_bits_[0] &= ~0x00000020u;
}
void PhoneNumber::clear_country_code_source() {
  country_code_source_ = 1;
  clear_has_country_code_source();
}
::i18n::phonenumbers::PhoneNumber_CountryCodeSource PhoneNumber::country_code_source() const {
  // @@protoc_insertion_point(field_get:i18n.phonenumbers.PhoneNumber.country_code_source)
  return static_cast< ::i18n::phonenumbers::PhoneNumber_CountryCodeSource >(country_code_source_);
}
void PhoneNumber::set_country_code_source(::i18n::phonenumbers::PhoneNumber_CountryCodeSource value) {
  assert(::i18n::phonenumbers::PhoneNumber_CountryCodeSource_IsValid(value));
  set_has_country_code_source();
  country_code_source_ = value;
  // @@protoc_insertion_point(field_set:i18n.phonenumbers.PhoneNumber.country_code_source)
}

// optional string preferred_domestic_carrier_code = 7;
bool PhoneNumber::has_preferred_domestic_carrier_code() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void PhoneNumber::set_has_preferred_domestic_carrier_code() {
  _has_bits_[0] |= 0x00000040u;
}
void PhoneNumber::clear_has_preferred_domestic_carrier_code() {
  _has_bits_[0] &= ~0x00000040u;
}
void PhoneNumber::clear_preferred_domestic_carrier_code() {
  preferred_domestic_carrier_code_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_preferred_domestic_carrier_code();
}
const ::std::string& PhoneNumber::preferred_domestic_carrier_code() const {
  // @@protoc_insertion_point(field_get:i18n.phonenumbers.PhoneNumber.preferred_domestic_carrier_code)
  return preferred_domestic_carrier_code_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PhoneNumber::set_preferred_domestic_carrier_code(const ::std::string& value) {
  set_has_preferred_domestic_carrier_code();
  preferred_domestic_carrier_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:i18n.phonenumbers.PhoneNumber.preferred_domestic_carrier_code)
}
void PhoneNumber::set_preferred_domestic_carrier_code(const char* value) {
  set_has_preferred_domestic_carrier_code();
  preferred_domestic_carrier_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:i18n.phonenumbers.PhoneNumber.preferred_domestic_carrier_code)
}
void PhoneNumber::set_preferred_domestic_carrier_code(const char* value, size_t size) {
  set_has_preferred_domestic_carrier_code();
  preferred_domestic_carrier_code_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:i18n.phonenumbers.PhoneNumber.preferred_domestic_carrier_code)
}
::std::string* PhoneNumber::mutable_preferred_domestic_carrier_code() {
  set_has_preferred_domestic_carrier_code();
  // @@protoc_insertion_point(field_mutable:i18n.phonenumbers.PhoneNumber.preferred_domestic_carrier_code)
  return preferred_domestic_carrier_code_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* PhoneNumber::release_preferred_domestic_carrier_code() {
  // @@protoc_insertion_point(field_release:i18n.phonenumbers.PhoneNumber.preferred_domestic_carrier_code)
  clear_has_preferred_domestic_carrier_code();
  return preferred_domestic_carrier_code_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void PhoneNumber::set_allocated_preferred_domestic_carrier_code(::std::string* preferred_domestic_carrier_code) {
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
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace phonenumbers
}  // namespace i18n

// @@protoc_insertion_point(global_scope)
