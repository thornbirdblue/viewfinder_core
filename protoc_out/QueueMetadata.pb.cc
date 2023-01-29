// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: QueueMetadata.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "QueueMetadata.pb.h"

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

const ::google::protobuf::Descriptor* QueueMetadata_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  QueueMetadata_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_QueueMetadata_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_QueueMetadata_2eproto() {
  protobuf_AddDesc_QueueMetadata_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "QueueMetadata.proto");
  GOOGLE_CHECK(file != NULL);
  QueueMetadata_descriptor_ = file->message_type(0);
  static const int QueueMetadata_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QueueMetadata, priority_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QueueMetadata, sequence_),
  };
  QueueMetadata_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      QueueMetadata_descriptor_,
      QueueMetadata::internal_default_instance(),
      QueueMetadata_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QueueMetadata, _has_bits_),
      -1,
      -1,
      sizeof(QueueMetadata),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(QueueMetadata, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_QueueMetadata_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      QueueMetadata_descriptor_, QueueMetadata::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_QueueMetadata_2eproto() {
  QueueMetadata_default_instance_.Shutdown();
  delete QueueMetadata_reflection_;
}

void protobuf_InitDefaults_QueueMetadata_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  QueueMetadata_default_instance_.DefaultConstruct();
  QueueMetadata_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_QueueMetadata_2eproto_once_);
void protobuf_InitDefaults_QueueMetadata_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_QueueMetadata_2eproto_once_,
                 &protobuf_InitDefaults_QueueMetadata_2eproto_impl);
}
void protobuf_AddDesc_QueueMetadata_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_QueueMetadata_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023QueueMetadata.proto\"3\n\rQueueMetadata\022\020"
    "\n\010priority\030\001 \001(\005\022\020\n\010sequence\030\002 \001(\003B&\n\023co"
    ".viewfinder.protoB\017QueueMetadataPB", 114);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "QueueMetadata.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_QueueMetadata_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_QueueMetadata_2eproto_once_);
void protobuf_AddDesc_QueueMetadata_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_QueueMetadata_2eproto_once_,
                 &protobuf_AddDesc_QueueMetadata_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_QueueMetadata_2eproto {
  StaticDescriptorInitializer_QueueMetadata_2eproto() {
    protobuf_AddDesc_QueueMetadata_2eproto();
  }
} static_descriptor_initializer_QueueMetadata_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int QueueMetadata::kPriorityFieldNumber;
const int QueueMetadata::kSequenceFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

QueueMetadata::QueueMetadata()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_QueueMetadata_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:QueueMetadata)
}

void QueueMetadata::InitAsDefaultInstance() {
}

QueueMetadata::QueueMetadata(const QueueMetadata& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:QueueMetadata)
}

void QueueMetadata::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&sequence_, 0, reinterpret_cast<char*>(&priority_) -
    reinterpret_cast<char*>(&sequence_) + sizeof(priority_));
}

QueueMetadata::~QueueMetadata() {
  // @@protoc_insertion_point(destructor:QueueMetadata)
  SharedDtor();
}

void QueueMetadata::SharedDtor() {
}

void QueueMetadata::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* QueueMetadata::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return QueueMetadata_descriptor_;
}

const QueueMetadata& QueueMetadata::default_instance() {
  protobuf_InitDefaults_QueueMetadata_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<QueueMetadata> QueueMetadata_default_instance_;

QueueMetadata* QueueMetadata::New(::google::protobuf::Arena* arena) const {
  QueueMetadata* n = new QueueMetadata;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void QueueMetadata::Clear() {
// @@protoc_insertion_point(message_clear_start:QueueMetadata)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(QueueMetadata, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<QueueMetadata*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(sequence_, priority_);

#undef ZR_HELPER_
#undef ZR_

  _has_bits_.Clear();
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool QueueMetadata::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:QueueMetadata)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 priority = 1;
      case 1: {
        if (tag == 8) {
          set_has_priority();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &priority_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_sequence;
        break;
      }

      // optional int64 sequence = 2;
      case 2: {
        if (tag == 16) {
         parse_sequence:
          set_has_sequence();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &sequence_)));
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
  // @@protoc_insertion_point(parse_success:QueueMetadata)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:QueueMetadata)
  return false;
#undef DO_
}

void QueueMetadata::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:QueueMetadata)
  // optional int32 priority = 1;
  if (has_priority()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->priority(), output);
  }

  // optional int64 sequence = 2;
  if (has_sequence()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->sequence(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:QueueMetadata)
}

::google::protobuf::uint8* QueueMetadata::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:QueueMetadata)
  // optional int32 priority = 1;
  if (has_priority()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->priority(), target);
  }

  // optional int64 sequence = 2;
  if (has_sequence()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->sequence(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:QueueMetadata)
  return target;
}

size_t QueueMetadata::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:QueueMetadata)
  size_t total_size = 0;

  if (_has_bits_[0 / 32] & 3u) {
    // optional int32 priority = 1;
    if (has_priority()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->priority());
    }

    // optional int64 sequence = 2;
    if (has_sequence()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->sequence());
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

void QueueMetadata::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:QueueMetadata)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const QueueMetadata* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const QueueMetadata>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:QueueMetadata)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:QueueMetadata)
    UnsafeMergeFrom(*source);
  }
}

void QueueMetadata::MergeFrom(const QueueMetadata& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:QueueMetadata)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void QueueMetadata::UnsafeMergeFrom(const QueueMetadata& from) {
  GOOGLE_DCHECK(&from != this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_priority()) {
      set_priority(from.priority());
    }
    if (from.has_sequence()) {
      set_sequence(from.sequence());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::UnknownFieldSet::MergeToInternalMetdata(
      from.unknown_fields(), &_internal_metadata_);
  }
}

void QueueMetadata::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:QueueMetadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void QueueMetadata::CopyFrom(const QueueMetadata& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:QueueMetadata)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool QueueMetadata::IsInitialized() const {

  return true;
}

void QueueMetadata::Swap(QueueMetadata* other) {
  if (other == this) return;
  InternalSwap(other);
}
void QueueMetadata::InternalSwap(QueueMetadata* other) {
  std::swap(priority_, other->priority_);
  std::swap(sequence_, other->sequence_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata QueueMetadata::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = QueueMetadata_descriptor_;
  metadata.reflection = QueueMetadata_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// QueueMetadata

// optional int32 priority = 1;
bool QueueMetadata::has_priority() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void QueueMetadata::set_has_priority() {
  _has_bits_[0] |= 0x00000001u;
}
void QueueMetadata::clear_has_priority() {
  _has_bits_[0] &= ~0x00000001u;
}
void QueueMetadata::clear_priority() {
  priority_ = 0;
  clear_has_priority();
}
::google::protobuf::int32 QueueMetadata::priority() const {
  // @@protoc_insertion_point(field_get:QueueMetadata.priority)
  return priority_;
}
void QueueMetadata::set_priority(::google::protobuf::int32 value) {
  set_has_priority();
  priority_ = value;
  // @@protoc_insertion_point(field_set:QueueMetadata.priority)
}

// optional int64 sequence = 2;
bool QueueMetadata::has_sequence() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void QueueMetadata::set_has_sequence() {
  _has_bits_[0] |= 0x00000002u;
}
void QueueMetadata::clear_has_sequence() {
  _has_bits_[0] &= ~0x00000002u;
}
void QueueMetadata::clear_sequence() {
  sequence_ = GOOGLE_LONGLONG(0);
  clear_has_sequence();
}
::google::protobuf::int64 QueueMetadata::sequence() const {
  // @@protoc_insertion_point(field_get:QueueMetadata.sequence)
  return sequence_;
}
void QueueMetadata::set_sequence(::google::protobuf::int64 value) {
  set_has_sequence();
  sequence_ = value;
  // @@protoc_insertion_point(field_set:QueueMetadata.sequence)
}

inline const QueueMetadata* QueueMetadata::internal_default_instance() {
  return &QueueMetadata_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)