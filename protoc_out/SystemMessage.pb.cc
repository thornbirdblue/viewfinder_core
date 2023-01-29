// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SystemMessage.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SystemMessage.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* SystemMessage_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SystemMessage_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* SystemMessage_Severity_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_SystemMessage_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_SystemMessage_2eproto() {
  protobuf_AddDesc_SystemMessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "SystemMessage.proto");
  GOOGLE_CHECK(file != NULL);
  SystemMessage_descriptor_ = file->message_type(0);
  static const int SystemMessage_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemMessage, title_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemMessage, body_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemMessage, link_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemMessage, identifier_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemMessage, severity_),
  };
  SystemMessage_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SystemMessage_descriptor_,
      SystemMessage::internal_default_instance(),
      SystemMessage_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemMessage, _has_bits_),
      -1,
      -1,
      sizeof(SystemMessage),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SystemMessage, _internal_metadata_));
  SystemMessage_Severity_descriptor_ = SystemMessage_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_SystemMessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SystemMessage_descriptor_, SystemMessage::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_SystemMessage_2eproto() {
  SystemMessage_default_instance_.Shutdown();
  delete SystemMessage_reflection_;
}

void protobuf_InitDefaults_SystemMessage_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::GetEmptyString();
  SystemMessage_default_instance_.DefaultConstruct();
  SystemMessage_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_SystemMessage_2eproto_once_);
void protobuf_InitDefaults_SystemMessage_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_SystemMessage_2eproto_once_,
                 &protobuf_InitDefaults_SystemMessage_2eproto_impl);
}
void protobuf_AddDesc_SystemMessage_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_SystemMessage_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023SystemMessage.proto\"\325\001\n\rSystemMessage\022"
    "\r\n\005title\030\001 \001(\t\022\014\n\004body\030\002 \001(\t\022\014\n\004link\030\003 \001"
    "(\t\022\022\n\nidentifier\030\004 \001(\t\0222\n\010severity\030\005 \001(\016"
    "2\027.SystemMessage.Severity:\007UNKNOWN\"Q\n\010Se"
    "verity\022\n\n\006SILENT\020\000\022\010\n\004INFO\020\001\022\r\n\tATTENTIO"
    "N\020\002\022\023\n\017DISABLE_NETWORK\020\003\022\013\n\007UNKNOWN\020\004B&\n"
    "\023co.viewfinder.protoB\017SystemMessagePB", 277);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SystemMessage.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_SystemMessage_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_SystemMessage_2eproto_once_);
void protobuf_AddDesc_SystemMessage_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_SystemMessage_2eproto_once_,
                 &protobuf_AddDesc_SystemMessage_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_SystemMessage_2eproto {
  StaticDescriptorInitializer_SystemMessage_2eproto() {
    protobuf_AddDesc_SystemMessage_2eproto();
  }
} static_descriptor_initializer_SystemMessage_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

const ::google::protobuf::EnumDescriptor* SystemMessage_Severity_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SystemMessage_Severity_descriptor_;
}
bool SystemMessage_Severity_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SystemMessage_Severity SystemMessage::SILENT;
const SystemMessage_Severity SystemMessage::INFO;
const SystemMessage_Severity SystemMessage::ATTENTION;
const SystemMessage_Severity SystemMessage::DISABLE_NETWORK;
const SystemMessage_Severity SystemMessage::UNKNOWN;
const SystemMessage_Severity SystemMessage::Severity_MIN;
const SystemMessage_Severity SystemMessage::Severity_MAX;
const int SystemMessage::Severity_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SystemMessage::kTitleFieldNumber;
const int SystemMessage::kBodyFieldNumber;
const int SystemMessage::kLinkFieldNumber;
const int SystemMessage::kIdentifierFieldNumber;
const int SystemMessage::kSeverityFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SystemMessage::SystemMessage()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_SystemMessage_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:SystemMessage)
}

void SystemMessage::InitAsDefaultInstance() {
}

SystemMessage::SystemMessage(const SystemMessage& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:SystemMessage)
}

void SystemMessage::SharedCtor() {
  _cached_size_ = 0;
  title_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  body_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  link_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  identifier_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  severity_ = 4;
}

SystemMessage::~SystemMessage() {
  // @@protoc_insertion_point(destructor:SystemMessage)
  SharedDtor();
}

void SystemMessage::SharedDtor() {
  title_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  body_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  link_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  identifier_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void SystemMessage::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SystemMessage::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SystemMessage_descriptor_;
}

const SystemMessage& SystemMessage::default_instance() {
  protobuf_InitDefaults_SystemMessage_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<SystemMessage> SystemMessage_default_instance_;

SystemMessage* SystemMessage::New(::google::protobuf::Arena* arena) const {
  SystemMessage* n = new SystemMessage;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SystemMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:SystemMessage)
  if (_has_bits_[0 / 32] & 31u) {
    if (has_title()) {
      title_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_body()) {
      body_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_link()) {
      link_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_identifier()) {
      identifier_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    severity_ = 4;
  }
  _has_bits_.Clear();
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool SystemMessage::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:SystemMessage)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string title = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_title()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->title().data(), this->title().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "SystemMessage.title");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_body;
        break;
      }

      // optional string body = 2;
      case 2: {
        if (tag == 18) {
         parse_body:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_body()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->body().data(), this->body().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "SystemMessage.body");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_link;
        break;
      }

      // optional string link = 3;
      case 3: {
        if (tag == 26) {
         parse_link:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_link()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->link().data(), this->link().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "SystemMessage.link");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_identifier;
        break;
      }

      // optional string identifier = 4;
      case 4: {
        if (tag == 34) {
         parse_identifier:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_identifier()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->identifier().data(), this->identifier().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "SystemMessage.identifier");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_severity;
        break;
      }

      // optional .SystemMessage.Severity severity = 5 [default = UNKNOWN];
      case 5: {
        if (tag == 40) {
         parse_severity:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::SystemMessage_Severity_IsValid(value)) {
            set_severity(static_cast< ::SystemMessage_Severity >(value));
          } else {
            mutable_unknown_fields()->AddVarint(5, value);
          }
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:SystemMessage)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:SystemMessage)
  return false;
#undef DO_
}

void SystemMessage::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:SystemMessage)
  // optional string title = 1;
  if (has_title()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->title().data(), this->title().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "SystemMessage.title");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->title(), output);
  }

  // optional string body = 2;
  if (has_body()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->body().data(), this->body().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "SystemMessage.body");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->body(), output);
  }

  // optional string link = 3;
  if (has_link()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->link().data(), this->link().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "SystemMessage.link");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->link(), output);
  }

  // optional string identifier = 4;
  if (has_identifier()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->identifier().data(), this->identifier().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "SystemMessage.identifier");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->identifier(), output);
  }

  // optional .SystemMessage.Severity severity = 5 [default = UNKNOWN];
  if (has_severity()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->severity(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:SystemMessage)
}

::google::protobuf::uint8* SystemMessage::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:SystemMessage)
  // optional string title = 1;
  if (has_title()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->title().data(), this->title().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "SystemMessage.title");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->title(), target);
  }

  // optional string body = 2;
  if (has_body()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->body().data(), this->body().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "SystemMessage.body");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->body(), target);
  }

  // optional string link = 3;
  if (has_link()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->link().data(), this->link().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "SystemMessage.link");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->link(), target);
  }

  // optional string identifier = 4;
  if (has_identifier()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->identifier().data(), this->identifier().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "SystemMessage.identifier");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->identifier(), target);
  }

  // optional .SystemMessage.Severity severity = 5 [default = UNKNOWN];
  if (has_severity()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      5, this->severity(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:SystemMessage)
  return target;
}

size_t SystemMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:SystemMessage)
  size_t total_size = 0;

  if (_has_bits_[0 / 32] & 31u) {
    // optional string title = 1;
    if (has_title()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->title());
    }

    // optional string body = 2;
    if (has_body()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->body());
    }

    // optional string link = 3;
    if (has_link()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->link());
    }

    // optional string identifier = 4;
    if (has_identifier()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->identifier());
    }

    // optional .SystemMessage.Severity severity = 5 [default = UNKNOWN];
    if (has_severity()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->severity());
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SystemMessage::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:SystemMessage)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const SystemMessage* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SystemMessage>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:SystemMessage)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:SystemMessage)
    UnsafeMergeFrom(*source);
  }
}

void SystemMessage::MergeFrom(const SystemMessage& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:SystemMessage)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void SystemMessage::UnsafeMergeFrom(const SystemMessage& from) {
  GOOGLE_DCHECK(&from != this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_title()) {
      set_has_title();
      title_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.title_);
    }
    if (from.has_body()) {
      set_has_body();
      body_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.body_);
    }
    if (from.has_link()) {
      set_has_link();
      link_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.link_);
    }
    if (from.has_identifier()) {
      set_has_identifier();
      identifier_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.identifier_);
    }
    if (from.has_severity()) {
      set_severity(from.severity());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::UnknownFieldSet::MergeToInternalMetdata(
      from.unknown_fields(), &_internal_metadata_);
  }
}

void SystemMessage::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:SystemMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SystemMessage::CopyFrom(const SystemMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:SystemMessage)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool SystemMessage::IsInitialized() const {

  return true;
}

void SystemMessage::Swap(SystemMessage* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SystemMessage::InternalSwap(SystemMessage* other) {
  title_.Swap(&other->title_);
  body_.Swap(&other->body_);
  link_.Swap(&other->link_);
  identifier_.Swap(&other->identifier_);
  std::swap(severity_, other->severity_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SystemMessage::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SystemMessage_descriptor_;
  metadata.reflection = SystemMessage_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SystemMessage

// optional string title = 1;
bool SystemMessage::has_title() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void SystemMessage::set_has_title() {
  _has_bits_[0] |= 0x00000001u;
}
void SystemMessage::clear_has_title() {
  _has_bits_[0] &= ~0x00000001u;
}
void SystemMessage::clear_title() {
  title_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_title();
}
const ::std::string& SystemMessage::title() const {
  // @@protoc_insertion_point(field_get:SystemMessage.title)
  return title_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void SystemMessage::set_title(const ::std::string& value) {
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:SystemMessage.title)
}
void SystemMessage::set_title(const char* value) {
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:SystemMessage.title)
}
void SystemMessage::set_title(const char* value, size_t size) {
  set_has_title();
  title_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:SystemMessage.title)
}
::std::string* SystemMessage::mutable_title() {
  set_has_title();
  // @@protoc_insertion_point(field_mutable:SystemMessage.title)
  return title_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* SystemMessage::release_title() {
  // @@protoc_insertion_point(field_release:SystemMessage.title)
  clear_has_title();
  return title_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void SystemMessage::set_allocated_title(::std::string* title) {
  if (title != NULL) {
    set_has_title();
  } else {
    clear_has_title();
  }
  title_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), title);
  // @@protoc_insertion_point(field_set_allocated:SystemMessage.title)
}

// optional string body = 2;
bool SystemMessage::has_body() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void SystemMessage::set_has_body() {
  _has_bits_[0] |= 0x00000002u;
}
void SystemMessage::clear_has_body() {
  _has_bits_[0] &= ~0x00000002u;
}
void SystemMessage::clear_body() {
  body_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_body();
}
const ::std::string& SystemMessage::body() const {
  // @@protoc_insertion_point(field_get:SystemMessage.body)
  return body_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void SystemMessage::set_body(const ::std::string& value) {
  set_has_body();
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:SystemMessage.body)
}
void SystemMessage::set_body(const char* value) {
  set_has_body();
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:SystemMessage.body)
}
void SystemMessage::set_body(const char* value, size_t size) {
  set_has_body();
  body_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:SystemMessage.body)
}
::std::string* SystemMessage::mutable_body() {
  set_has_body();
  // @@protoc_insertion_point(field_mutable:SystemMessage.body)
  return body_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* SystemMessage::release_body() {
  // @@protoc_insertion_point(field_release:SystemMessage.body)
  clear_has_body();
  return body_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void SystemMessage::set_allocated_body(::std::string* body) {
  if (body != NULL) {
    set_has_body();
  } else {
    clear_has_body();
  }
  body_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), body);
  // @@protoc_insertion_point(field_set_allocated:SystemMessage.body)
}

// optional string link = 3;
bool SystemMessage::has_link() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void SystemMessage::set_has_link() {
  _has_bits_[0] |= 0x00000004u;
}
void SystemMessage::clear_has_link() {
  _has_bits_[0] &= ~0x00000004u;
}
void SystemMessage::clear_link() {
  link_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_link();
}
const ::std::string& SystemMessage::link() const {
  // @@protoc_insertion_point(field_get:SystemMessage.link)
  return link_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void SystemMessage::set_link(const ::std::string& value) {
  set_has_link();
  link_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:SystemMessage.link)
}
void SystemMessage::set_link(const char* value) {
  set_has_link();
  link_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:SystemMessage.link)
}
void SystemMessage::set_link(const char* value, size_t size) {
  set_has_link();
  link_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:SystemMessage.link)
}
::std::string* SystemMessage::mutable_link() {
  set_has_link();
  // @@protoc_insertion_point(field_mutable:SystemMessage.link)
  return link_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* SystemMessage::release_link() {
  // @@protoc_insertion_point(field_release:SystemMessage.link)
  clear_has_link();
  return link_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void SystemMessage::set_allocated_link(::std::string* link) {
  if (link != NULL) {
    set_has_link();
  } else {
    clear_has_link();
  }
  link_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), link);
  // @@protoc_insertion_point(field_set_allocated:SystemMessage.link)
}

// optional string identifier = 4;
bool SystemMessage::has_identifier() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void SystemMessage::set_has_identifier() {
  _has_bits_[0] |= 0x00000008u;
}
void SystemMessage::clear_has_identifier() {
  _has_bits_[0] &= ~0x00000008u;
}
void SystemMessage::clear_identifier() {
  identifier_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_identifier();
}
const ::std::string& SystemMessage::identifier() const {
  // @@protoc_insertion_point(field_get:SystemMessage.identifier)
  return identifier_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void SystemMessage::set_identifier(const ::std::string& value) {
  set_has_identifier();
  identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:SystemMessage.identifier)
}
void SystemMessage::set_identifier(const char* value) {
  set_has_identifier();
  identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:SystemMessage.identifier)
}
void SystemMessage::set_identifier(const char* value, size_t size) {
  set_has_identifier();
  identifier_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:SystemMessage.identifier)
}
::std::string* SystemMessage::mutable_identifier() {
  set_has_identifier();
  // @@protoc_insertion_point(field_mutable:SystemMessage.identifier)
  return identifier_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* SystemMessage::release_identifier() {
  // @@protoc_insertion_point(field_release:SystemMessage.identifier)
  clear_has_identifier();
  return identifier_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void SystemMessage::set_allocated_identifier(::std::string* identifier) {
  if (identifier != NULL) {
    set_has_identifier();
  } else {
    clear_has_identifier();
  }
  identifier_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), identifier);
  // @@protoc_insertion_point(field_set_allocated:SystemMessage.identifier)
}

// optional .SystemMessage.Severity severity = 5 [default = UNKNOWN];
bool SystemMessage::has_severity() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void SystemMessage::set_has_severity() {
  _has_bits_[0] |= 0x00000010u;
}
void SystemMessage::clear_has_severity() {
  _has_bits_[0] &= ~0x00000010u;
}
void SystemMessage::clear_severity() {
  severity_ = 4;
  clear_has_severity();
}
::SystemMessage_Severity SystemMessage::severity() const {
  // @@protoc_insertion_point(field_get:SystemMessage.severity)
  return static_cast< ::SystemMessage_Severity >(severity_);
}
void SystemMessage::set_severity(::SystemMessage_Severity value) {
  assert(::SystemMessage_Severity_IsValid(value));
  set_has_severity();
  severity_ = value;
  // @@protoc_insertion_point(field_set:SystemMessage.severity)
}

inline const SystemMessage* SystemMessage::internal_default_instance() {
  return &SystemMessage_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
