// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: job.proto

#ifndef PROTOBUF_INCLUDED_job_2eproto
#define PROTOBUF_INCLUDED_job_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3007000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3007001 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_job_2eproto

// Internal implementation detail -- do not use these members.
struct TableStruct_job_2eproto {
  static const ::google::protobuf::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::google::protobuf::internal::FieldMetadata field_metadata[];
  static const ::google::protobuf::internal::SerializationTable serialization_table[];
  static const ::google::protobuf::uint32 offsets[];
};
void AddDescriptors_job_2eproto();
namespace job {
class Job;
class JobDefaultTypeInternal;
extern JobDefaultTypeInternal _Job_default_instance_;
class Job_File;
class Job_FileDefaultTypeInternal;
extern Job_FileDefaultTypeInternal _Job_File_default_instance_;
}  // namespace job
namespace google {
namespace protobuf {
template<> ::job::Job* Arena::CreateMaybeMessage<::job::Job>(Arena*);
template<> ::job::Job_File* Arena::CreateMaybeMessage<::job::Job_File>(Arena*);
}  // namespace protobuf
}  // namespace google
namespace job {

enum Job_FileType {
  Job_FileType_ENCODED = 0,
  Job_FileType_NFS_Path = 1
};
bool Job_FileType_IsValid(int value);
const Job_FileType Job_FileType_FileType_MIN = Job_FileType_ENCODED;
const Job_FileType Job_FileType_FileType_MAX = Job_FileType_NFS_Path;
const int Job_FileType_FileType_ARRAYSIZE = Job_FileType_FileType_MAX + 1;

const ::google::protobuf::EnumDescriptor* Job_FileType_descriptor();
inline const ::std::string& Job_FileType_Name(Job_FileType value) {
  return ::google::protobuf::internal::NameOfEnum(
    Job_FileType_descriptor(), value);
}
inline bool Job_FileType_Parse(
    const ::std::string& name, Job_FileType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Job_FileType>(
    Job_FileType_descriptor(), name, value);
}
// ===================================================================

class Job_File :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:job.Job.File) */ {
 public:
  Job_File();
  virtual ~Job_File();

  Job_File(const Job_File& from);

  inline Job_File& operator=(const Job_File& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Job_File(Job_File&& from) noexcept
    : Job_File() {
    *this = ::std::move(from);
  }

  inline Job_File& operator=(Job_File&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Job_File& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Job_File* internal_default_instance() {
    return reinterpret_cast<const Job_File*>(
               &_Job_File_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  void Swap(Job_File* other);
  friend void swap(Job_File& a, Job_File& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Job_File* New() const final {
    return CreateMaybeMessage<Job_File>(nullptr);
  }

  Job_File* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Job_File>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Job_File& from);
  void MergeFrom(const Job_File& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Job_File* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string encodedFile = 1;
  bool has_encodedfile() const;
  void clear_encodedfile();
  static const int kEncodedFileFieldNumber = 1;
  const ::std::string& encodedfile() const;
  void set_encodedfile(const ::std::string& value);
  #if LANG_CXX11
  void set_encodedfile(::std::string&& value);
  #endif
  void set_encodedfile(const char* value);
  void set_encodedfile(const char* value, size_t size);
  ::std::string* mutable_encodedfile();
  ::std::string* release_encodedfile();
  void set_allocated_encodedfile(::std::string* encodedfile);

  // required .job.Job.FileType type = 2 [default = ENCODED];
  bool has_type() const;
  void clear_type();
  static const int kTypeFieldNumber = 2;
  ::job::Job_FileType type() const;
  void set_type(::job::Job_FileType value);

  // @@protoc_insertion_point(class_scope:job.Job.File)
 private:
  class HasBitSetters;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::internal::ArenaStringPtr encodedfile_;
  int type_;
  friend struct ::TableStruct_job_2eproto;
};
// -------------------------------------------------------------------

class Job :
    public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:job.Job) */ {
 public:
  Job();
  virtual ~Job();

  Job(const Job& from);

  inline Job& operator=(const Job& from) {
    CopyFrom(from);
    return *this;
  }
  #if LANG_CXX11
  Job(Job&& from) noexcept
    : Job() {
    *this = ::std::move(from);
  }

  inline Job& operator=(Job&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }
  #endif
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor() {
    return default_instance().GetDescriptor();
  }
  static const Job& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Job* internal_default_instance() {
    return reinterpret_cast<const Job*>(
               &_Job_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  void Swap(Job* other);
  friend void swap(Job& a, Job& b) {
    a.Swap(&b);
  }

  // implements Message ----------------------------------------------

  inline Job* New() const final {
    return CreateMaybeMessage<Job>(nullptr);
  }

  Job* New(::google::protobuf::Arena* arena) const final {
    return CreateMaybeMessage<Job>(arena);
  }
  void CopyFrom(const ::google::protobuf::Message& from) final;
  void MergeFrom(const ::google::protobuf::Message& from) final;
  void CopyFrom(const Job& from);
  void MergeFrom(const Job& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  static const char* _InternalParse(const char* begin, const char* end, void* object, ::google::protobuf::internal::ParseContext* ctx);
  ::google::protobuf::internal::ParseFunc _ParseFunc() const final { return _InternalParse; }
  #else
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const final;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      ::google::protobuf::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Job* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef Job_File File;

  typedef Job_FileType FileType;
  static const FileType ENCODED =
    Job_FileType_ENCODED;
  static const FileType NFS_Path =
    Job_FileType_NFS_Path;
  static inline bool FileType_IsValid(int value) {
    return Job_FileType_IsValid(value);
  }
  static const FileType FileType_MIN =
    Job_FileType_FileType_MIN;
  static const FileType FileType_MAX =
    Job_FileType_FileType_MAX;
  static const int FileType_ARRAYSIZE =
    Job_FileType_FileType_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  FileType_descriptor() {
    return Job_FileType_descriptor();
  }
  static inline const ::std::string& FileType_Name(FileType value) {
    return Job_FileType_Name(value);
  }
  static inline bool FileType_Parse(const ::std::string& name,
      FileType* value) {
    return Job_FileType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // repeated .job.Job.File files = 3;
  int files_size() const;
  void clear_files();
  static const int kFilesFieldNumber = 3;
  ::job::Job_File* mutable_files(int index);
  ::google::protobuf::RepeatedPtrField< ::job::Job_File >*
      mutable_files();
  const ::job::Job_File& files(int index) const;
  ::job::Job_File* add_files();
  const ::google::protobuf::RepeatedPtrField< ::job::Job_File >&
      files() const;

  // required string name = 1;
  bool has_name() const;
  void clear_name();
  static const int kNameFieldNumber = 1;
  const ::std::string& name() const;
  void set_name(const ::std::string& value);
  #if LANG_CXX11
  void set_name(::std::string&& value);
  #endif
  void set_name(const char* value);
  void set_name(const char* value, size_t size);
  ::std::string* mutable_name();
  ::std::string* release_name();
  void set_allocated_name(::std::string* name);

  // required int32 id = 2;
  bool has_id() const;
  void clear_id();
  static const int kIdFieldNumber = 2;
  ::google::protobuf::int32 id() const;
  void set_id(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:job.Job)
 private:
  class HasBitSetters;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable ::google::protobuf::internal::CachedSize _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::job::Job_File > files_;
  ::google::protobuf::internal::ArenaStringPtr name_;
  ::google::protobuf::int32 id_;
  friend struct ::TableStruct_job_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Job_File

// required string encodedFile = 1;
inline bool Job_File::has_encodedfile() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Job_File::clear_encodedfile() {
  encodedfile_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::std::string& Job_File::encodedfile() const {
  // @@protoc_insertion_point(field_get:job.Job.File.encodedFile)
  return encodedfile_.GetNoArena();
}
inline void Job_File::set_encodedfile(const ::std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  encodedfile_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:job.Job.File.encodedFile)
}
#if LANG_CXX11
inline void Job_File::set_encodedfile(::std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  encodedfile_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:job.Job.File.encodedFile)
}
#endif
inline void Job_File::set_encodedfile(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  encodedfile_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:job.Job.File.encodedFile)
}
inline void Job_File::set_encodedfile(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  encodedfile_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:job.Job.File.encodedFile)
}
inline ::std::string* Job_File::mutable_encodedfile() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:job.Job.File.encodedFile)
  return encodedfile_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Job_File::release_encodedfile() {
  // @@protoc_insertion_point(field_release:job.Job.File.encodedFile)
  if (!has_encodedfile()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return encodedfile_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Job_File::set_allocated_encodedfile(::std::string* encodedfile) {
  if (encodedfile != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  encodedfile_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), encodedfile);
  // @@protoc_insertion_point(field_set_allocated:job.Job.File.encodedFile)
}

// required .job.Job.FileType type = 2 [default = ENCODED];
inline bool Job_File::has_type() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Job_File::clear_type() {
  type_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::job::Job_FileType Job_File::type() const {
  // @@protoc_insertion_point(field_get:job.Job.File.type)
  return static_cast< ::job::Job_FileType >(type_);
}
inline void Job_File::set_type(::job::Job_FileType value) {
  assert(::job::Job_FileType_IsValid(value));
  _has_bits_[0] |= 0x00000002u;
  type_ = value;
  // @@protoc_insertion_point(field_set:job.Job.File.type)
}

// -------------------------------------------------------------------

// Job

// required string name = 1;
inline bool Job::has_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Job::clear_name() {
  name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _has_bits_[0] &= ~0x00000001u;
}
inline const ::std::string& Job::name() const {
  // @@protoc_insertion_point(field_get:job.Job.name)
  return name_.GetNoArena();
}
inline void Job::set_name(const ::std::string& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:job.Job.name)
}
#if LANG_CXX11
inline void Job::set_name(::std::string&& value) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:job.Job.name)
}
#endif
inline void Job::set_name(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:job.Job.name)
}
inline void Job::set_name(const char* value, size_t size) {
  _has_bits_[0] |= 0x00000001u;
  name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:job.Job.name)
}
inline ::std::string* Job::mutable_name() {
  _has_bits_[0] |= 0x00000001u;
  // @@protoc_insertion_point(field_mutable:job.Job.name)
  return name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* Job::release_name() {
  // @@protoc_insertion_point(field_release:job.Job.name)
  if (!has_name()) {
    return nullptr;
  }
  _has_bits_[0] &= ~0x00000001u;
  return name_.ReleaseNonDefaultNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void Job::set_allocated_name(::std::string* name) {
  if (name != nullptr) {
    _has_bits_[0] |= 0x00000001u;
  } else {
    _has_bits_[0] &= ~0x00000001u;
  }
  name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), name);
  // @@protoc_insertion_point(field_set_allocated:job.Job.name)
}

// required int32 id = 2;
inline bool Job::has_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Job::clear_id() {
  id_ = 0;
  _has_bits_[0] &= ~0x00000002u;
}
inline ::google::protobuf::int32 Job::id() const {
  // @@protoc_insertion_point(field_get:job.Job.id)
  return id_;
}
inline void Job::set_id(::google::protobuf::int32 value) {
  _has_bits_[0] |= 0x00000002u;
  id_ = value;
  // @@protoc_insertion_point(field_set:job.Job.id)
}

// repeated .job.Job.File files = 3;
inline int Job::files_size() const {
  return files_.size();
}
inline void Job::clear_files() {
  files_.Clear();
}
inline ::job::Job_File* Job::mutable_files(int index) {
  // @@protoc_insertion_point(field_mutable:job.Job.files)
  return files_.Mutable(index);
}
inline ::google::protobuf::RepeatedPtrField< ::job::Job_File >*
Job::mutable_files() {
  // @@protoc_insertion_point(field_mutable_list:job.Job.files)
  return &files_;
}
inline const ::job::Job_File& Job::files(int index) const {
  // @@protoc_insertion_point(field_get:job.Job.files)
  return files_.Get(index);
}
inline ::job::Job_File* Job::add_files() {
  // @@protoc_insertion_point(field_add:job.Job.files)
  return files_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::job::Job_File >&
Job::files() const {
  // @@protoc_insertion_point(field_list:job.Job.files)
  return files_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace job

namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::job::Job_FileType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::job::Job_FileType>() {
  return ::job::Job_FileType_descriptor();
}

}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // PROTOBUF_INCLUDED_job_2eproto