// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: job.proto

#include "job.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

extern PROTOBUF_INTERNAL_EXPORT_job_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Job_File_job_2eproto;
namespace job {
class Job_FileDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Job_File> _instance;
} _Job_File_default_instance_;
class JobDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<Job> _instance;
} _Job_default_instance_;
}  // namespace job
static void InitDefaultsJob_File_job_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::job::_Job_File_default_instance_;
    new (ptr) ::job::Job_File();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::job::Job_File::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_Job_File_job_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsJob_File_job_2eproto}, {}};

static void InitDefaultsJob_job_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::job::_Job_default_instance_;
    new (ptr) ::job::Job();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::job::Job::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<1> scc_info_Job_job_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 1, InitDefaultsJob_job_2eproto}, {
      &scc_info_Job_File_job_2eproto.base,}};

void InitDefaults_job_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_Job_File_job_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_Job_job_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_job_2eproto[2];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors_job_2eproto[1];
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_job_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_job_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  PROTOBUF_FIELD_OFFSET(::job::Job_File, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::job::Job_File, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::job::Job_File, encodedfile_),
  PROTOBUF_FIELD_OFFSET(::job::Job_File, type_),
  0,
  1,
  PROTOBUF_FIELD_OFFSET(::job::Job, _has_bits_),
  PROTOBUF_FIELD_OFFSET(::job::Job, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::job::Job, name_),
  PROTOBUF_FIELD_OFFSET(::job::Job, id_),
  PROTOBUF_FIELD_OFFSET(::job::Job, files_),
  0,
  1,
  ~0u,
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, 7, sizeof(::job::Job_File)},
  { 9, 17, sizeof(::job::Job)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::job::_Job_File_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::job::_Job_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_job_2eproto = {
  {}, AddDescriptors_job_2eproto, "job.proto", schemas,
  file_default_instances, TableStruct_job_2eproto::offsets,
  file_level_metadata_job_2eproto, 2, file_level_enum_descriptors_job_2eproto, file_level_service_descriptors_job_2eproto,
};

const char descriptor_table_protodef_job_2eproto[] =
  "\n\tjob.proto\022\003job\"\253\001\n\003Job\022\014\n\004name\030\001 \002(\t\022\n"
  "\n\002id\030\002 \002(\005\022\034\n\005files\030\003 \003(\0132\r.job.Job.File"
  "\032E\n\004File\022\023\n\013encodedFile\030\001 \002(\t\022(\n\004type\030\002 "
  "\002(\0162\021.job.Job.FileType:\007ENCODED\"%\n\010FileT"
  "ype\022\013\n\007ENCODED\020\000\022\014\n\010NFS_Path\020\001"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_job_2eproto = {
  false, InitDefaults_job_2eproto, 
  descriptor_table_protodef_job_2eproto,
  "job.proto", &assign_descriptors_table_job_2eproto, 190,
};

void AddDescriptors_job_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_job_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_job_2eproto = []() { AddDescriptors_job_2eproto(); return true; }();
namespace job {
const ::google::protobuf::EnumDescriptor* Job_FileType_descriptor() {
  ::google::protobuf::internal::AssignDescriptors(&assign_descriptors_table_job_2eproto);
  return file_level_enum_descriptors_job_2eproto[0];
}
bool Job_FileType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const Job_FileType Job::ENCODED;
const Job_FileType Job::NFS_Path;
const Job_FileType Job::FileType_MIN;
const Job_FileType Job::FileType_MAX;
const int Job::FileType_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

// ===================================================================

void Job_File::InitAsDefaultInstance() {
}
class Job_File::HasBitSetters {
 public:
  static void set_has_encodedfile(Job_File* msg) {
    msg->_has_bits_[0] |= 0x00000001u;
  }
  static void set_has_type(Job_File* msg) {
    msg->_has_bits_[0] |= 0x00000002u;
  }
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Job_File::kEncodedFileFieldNumber;
const int Job_File::kTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Job_File::Job_File()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:job.Job.File)
}
Job_File::Job_File(const Job_File& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  encodedfile_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_encodedfile()) {
    encodedfile_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.encodedfile_);
  }
  type_ = from.type_;
  // @@protoc_insertion_point(copy_constructor:job.Job.File)
}

void Job_File::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_Job_File_job_2eproto.base);
  encodedfile_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  type_ = 0;
}

Job_File::~Job_File() {
  // @@protoc_insertion_point(destructor:job.Job.File)
  SharedDtor();
}

void Job_File::SharedDtor() {
  encodedfile_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Job_File::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Job_File& Job_File::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Job_File_job_2eproto.base);
  return *internal_default_instance();
}


void Job_File::Clear() {
// @@protoc_insertion_point(message_clear_start:job.Job.File)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    encodedfile_.ClearNonDefaultToEmptyNoArena();
  }
  type_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Job_File::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Job_File*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // required string encodedFile = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("job.Job.File.encodedFile");
        object = msg->mutable_encodedfile();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8Verify;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8Verify(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // required .job.Job.FileType type = 2 [default = ENCODED];
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 16) goto handle_unusual;
        ::google::protobuf::uint64 val = ::google::protobuf::internal::ReadVarint(&ptr);
        if (!::job::Job_FileType_IsValid(val)) {
          ::google::protobuf::internal::WriteVarint(2, val, msg->mutable_unknown_fields());
          break;
        }
        msg->set_type(static_cast<::job::Job_FileType>(val));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Job_File::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:job.Job.File)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string encodedFile = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_encodedfile()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->encodedfile().data(), static_cast<int>(this->encodedfile().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "job.Job.File.encodedFile");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required .job.Job.FileType type = 2 [default = ENCODED];
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (16 & 0xFF)) {
          int value = 0;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::job::Job_FileType_IsValid(value)) {
            set_type(static_cast< ::job::Job_FileType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(
                2, static_cast<::google::protobuf::uint64>(value));
          }
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
  // @@protoc_insertion_point(parse_success:job.Job.File)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:job.Job.File)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Job_File::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:job.Job.File)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string encodedFile = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->encodedfile().data(), static_cast<int>(this->encodedfile().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "job.Job.File.encodedFile");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->encodedfile(), output);
  }

  // required .job.Job.FileType type = 2 [default = ENCODED];
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->type(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:job.Job.File)
}

::google::protobuf::uint8* Job_File::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:job.Job.File)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string encodedFile = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->encodedfile().data(), static_cast<int>(this->encodedfile().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "job.Job.File.encodedFile");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->encodedfile(), target);
  }

  // required .job.Job.FileType type = 2 [default = ENCODED];
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->type(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:job.Job.File)
  return target;
}

size_t Job_File::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:job.Job.File)
  size_t total_size = 0;

  if (has_encodedfile()) {
    // required string encodedFile = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->encodedfile());
  }

  if (has_type()) {
    // required .job.Job.FileType type = 2 [default = ENCODED];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  return total_size;
}
size_t Job_File::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:job.Job.File)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required string encodedFile = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->encodedfile());

    // required .job.Job.FileType type = 2 [default = ENCODED];
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Job_File::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:job.Job.File)
  GOOGLE_DCHECK_NE(&from, this);
  const Job_File* source =
      ::google::protobuf::DynamicCastToGenerated<Job_File>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:job.Job.File)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:job.Job.File)
    MergeFrom(*source);
  }
}

void Job_File::MergeFrom(const Job_File& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:job.Job.File)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      encodedfile_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.encodedfile_);
    }
    if (cached_has_bits & 0x00000002u) {
      type_ = from.type_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Job_File::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:job.Job.File)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Job_File::CopyFrom(const Job_File& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:job.Job.File)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Job_File::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  return true;
}

void Job_File::Swap(Job_File* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Job_File::InternalSwap(Job_File* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  encodedfile_.Swap(&other->encodedfile_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(type_, other->type_);
}

::google::protobuf::Metadata Job_File::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_job_2eproto);
  return ::file_level_metadata_job_2eproto[kIndexInFileMessages];
}


// ===================================================================

void Job::InitAsDefaultInstance() {
}
class Job::HasBitSetters {
 public:
  static void set_has_name(Job* msg) {
    msg->_has_bits_[0] |= 0x00000001u;
  }
  static void set_has_id(Job* msg) {
    msg->_has_bits_[0] |= 0x00000002u;
  }
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Job::kNameFieldNumber;
const int Job::kIdFieldNumber;
const int Job::kFilesFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Job::Job()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:job.Job)
}
Job::Job(const Job& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr),
      _has_bits_(from._has_bits_),
      files_(from.files_) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_name()) {
    name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
  }
  id_ = from.id_;
  // @@protoc_insertion_point(copy_constructor:job.Job)
}

void Job::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_Job_job_2eproto.base);
  name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_ = 0;
}

Job::~Job() {
  // @@protoc_insertion_point(destructor:job.Job)
  SharedDtor();
}

void Job::SharedDtor() {
  name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void Job::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const Job& Job::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_Job_job_2eproto.base);
  return *internal_default_instance();
}


void Job::Clear() {
// @@protoc_insertion_point(message_clear_start:job.Job)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  files_.Clear();
  cached_has_bits = _has_bits_[0];
  if (cached_has_bits & 0x00000001u) {
    name_.ClearNonDefaultToEmptyNoArena();
  }
  id_ = 0;
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* Job::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<Job*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // required string name = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("job.Job.name");
        object = msg->mutable_name();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8Verify;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8Verify(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // required int32 id = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 16) goto handle_unusual;
        msg->set_id(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // repeated .job.Job.File files = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 26) goto handle_unusual;
        do {
          ptr = ::google::protobuf::io::ReadSize(ptr, &size);
          GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
          parser_till_end = ::job::Job_File::_InternalParse;
          object = msg->add_files();
          if (size > end - ptr) goto len_delim_till_end;
          ptr += size;
          GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
              {parser_till_end, object}, ptr - size, ptr));
          if (ptr >= end) break;
        } while ((::google::protobuf::io::UnalignedLoad<::google::protobuf::uint64>(ptr) & 255) == 26 && (ptr += 1));
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool Job::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:job.Job)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->name().data(), static_cast<int>(this->name().length()),
            ::google::protobuf::internal::WireFormat::PARSE,
            "job.Job.name");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required int32 id = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (16 & 0xFF)) {
          HasBitSetters::set_has_id(this);
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // repeated .job.Job.File files = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (26 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
                input, add_files()));
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
  // @@protoc_insertion_point(parse_success:job.Job)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:job.Job)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void Job::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:job.Job)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "job.Job.name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->name(), output);
  }

  // required int32 id = 2;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->id(), output);
  }

  // repeated .job.Job.File files = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->files_size()); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3,
      this->files(static_cast<int>(i)),
      output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:job.Job)
}

::google::protobuf::uint8* Job::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:job.Job)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // required string name = 1;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->name().data(), static_cast<int>(this->name().length()),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "job.Job.name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }

  // required int32 id = 2;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->id(), target);
  }

  // repeated .job.Job.File files = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->files_size()); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        3, this->files(static_cast<int>(i)), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:job.Job)
  return target;
}

size_t Job::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:job.Job)
  size_t total_size = 0;

  if (has_name()) {
    // required string name = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());
  }

  if (has_id()) {
    // required int32 id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());
  }

  return total_size;
}
size_t Job::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:job.Job)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required string name = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->name());

    // required int32 id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->id());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .job.Job.File files = 3;
  {
    unsigned int count = static_cast<unsigned int>(this->files_size());
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSize(
          this->files(static_cast<int>(i)));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void Job::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:job.Job)
  GOOGLE_DCHECK_NE(&from, this);
  const Job* source =
      ::google::protobuf::DynamicCastToGenerated<Job>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:job.Job)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:job.Job)
    MergeFrom(*source);
  }
}

void Job::MergeFrom(const Job& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:job.Job)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  files_.MergeFrom(from.files_);
  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 0x00000003u) {
    if (cached_has_bits & 0x00000001u) {
      _has_bits_[0] |= 0x00000001u;
      name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.name_);
    }
    if (cached_has_bits & 0x00000002u) {
      id_ = from.id_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void Job::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:job.Job)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Job::CopyFrom(const Job& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:job.Job)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Job::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;
  if (!::google::protobuf::internal::AllAreInitialized(this->files())) return false;
  return true;
}

void Job::Swap(Job* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Job::InternalSwap(Job* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(_has_bits_[0], other->_has_bits_[0]);
  CastToBase(&files_)->InternalSwap(CastToBase(&other->files_));
  name_.Swap(&other->name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(id_, other->id_);
}

::google::protobuf::Metadata Job::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_job_2eproto);
  return ::file_level_metadata_job_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace job
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::job::Job_File* Arena::CreateMaybeMessage< ::job::Job_File >(Arena* arena) {
  return Arena::CreateInternal< ::job::Job_File >(arena);
}
template<> PROTOBUF_NOINLINE ::job::Job* Arena::CreateMaybeMessage< ::job::Job >(Arena* arena) {
  return Arena::CreateInternal< ::job::Job >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
