// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: custommessages.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_custommessages_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_custommessages_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021012 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_custommessages_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_custommessages_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_custommessages_2eproto;
class CDOTAGameAccountPlus;
struct CDOTAGameAccountPlusDefaultTypeInternal;
extern CDOTAGameAccountPlusDefaultTypeInternal _CDOTAGameAccountPlus_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::CDOTAGameAccountPlus* Arena::CreateMaybeMessage<::CDOTAGameAccountPlus>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class CDOTAGameAccountPlus final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:CDOTAGameAccountPlus) */ {
 public:
  inline CDOTAGameAccountPlus() : CDOTAGameAccountPlus(nullptr) {}
  ~CDOTAGameAccountPlus() override;
  explicit PROTOBUF_CONSTEXPR CDOTAGameAccountPlus(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CDOTAGameAccountPlus(const CDOTAGameAccountPlus& from);
  CDOTAGameAccountPlus(CDOTAGameAccountPlus&& from) noexcept
    : CDOTAGameAccountPlus() {
    *this = ::std::move(from);
  }

  inline CDOTAGameAccountPlus& operator=(const CDOTAGameAccountPlus& from) {
    CopyFrom(from);
    return *this;
  }
  inline CDOTAGameAccountPlus& operator=(CDOTAGameAccountPlus&& from) noexcept {
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
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CDOTAGameAccountPlus& default_instance() {
    return *internal_default_instance();
  }
  static inline const CDOTAGameAccountPlus* internal_default_instance() {
    return reinterpret_cast<const CDOTAGameAccountPlus*>(
               &_CDOTAGameAccountPlus_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CDOTAGameAccountPlus& a, CDOTAGameAccountPlus& b) {
    a.Swap(&b);
  }
  inline void Swap(CDOTAGameAccountPlus* other) {
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
  void UnsafeArenaSwap(CDOTAGameAccountPlus* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CDOTAGameAccountPlus* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CDOTAGameAccountPlus>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CDOTAGameAccountPlus& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CDOTAGameAccountPlus& from) {
    CDOTAGameAccountPlus::MergeImpl(*this, from);
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
  void InternalSwap(CDOTAGameAccountPlus* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "CDOTAGameAccountPlus";
  }
  protected:
  explicit CDOTAGameAccountPlus(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAccountIdFieldNumber = 1,
    kOriginalStartDateFieldNumber = 2,
    kPlusFlagsFieldNumber = 3,
    kPlusStatusFieldNumber = 4,
    kPrepaidTimeStartFieldNumber = 5,
    kPrepaidTimeBalanceFieldNumber = 6,
    kNextPaymentDateFieldNumber = 7,
    kSteamAgreementIdFieldNumber = 8,
  };
  // required int32 account_id = 1;
  bool has_account_id() const;
  private:
  bool _internal_has_account_id() const;
  public:
  void clear_account_id();
  int32_t account_id() const;
  void set_account_id(int32_t value);
  private:
  int32_t _internal_account_id() const;
  void _internal_set_account_id(int32_t value);
  public:

  // required int32 original_start_date = 2;
  bool has_original_start_date() const;
  private:
  bool _internal_has_original_start_date() const;
  public:
  void clear_original_start_date();
  int32_t original_start_date() const;
  void set_original_start_date(int32_t value);
  private:
  int32_t _internal_original_start_date() const;
  void _internal_set_original_start_date(int32_t value);
  public:

  // required int32 plus_flags = 3;
  bool has_plus_flags() const;
  private:
  bool _internal_has_plus_flags() const;
  public:
  void clear_plus_flags();
  int32_t plus_flags() const;
  void set_plus_flags(int32_t value);
  private:
  int32_t _internal_plus_flags() const;
  void _internal_set_plus_flags(int32_t value);
  public:

  // required int32 plus_status = 4;
  bool has_plus_status() const;
  private:
  bool _internal_has_plus_status() const;
  public:
  void clear_plus_status();
  int32_t plus_status() const;
  void set_plus_status(int32_t value);
  private:
  int32_t _internal_plus_status() const;
  void _internal_set_plus_status(int32_t value);
  public:

  // required int32 prepaid_time_start = 5;
  bool has_prepaid_time_start() const;
  private:
  bool _internal_has_prepaid_time_start() const;
  public:
  void clear_prepaid_time_start();
  int32_t prepaid_time_start() const;
  void set_prepaid_time_start(int32_t value);
  private:
  int32_t _internal_prepaid_time_start() const;
  void _internal_set_prepaid_time_start(int32_t value);
  public:

  // required int32 prepaid_time_balance = 6;
  bool has_prepaid_time_balance() const;
  private:
  bool _internal_has_prepaid_time_balance() const;
  public:
  void clear_prepaid_time_balance();
  int32_t prepaid_time_balance() const;
  void set_prepaid_time_balance(int32_t value);
  private:
  int32_t _internal_prepaid_time_balance() const;
  void _internal_set_prepaid_time_balance(int32_t value);
  public:

  // required int32 next_payment_date = 7;
  bool has_next_payment_date() const;
  private:
  bool _internal_has_next_payment_date() const;
  public:
  void clear_next_payment_date();
  int32_t next_payment_date() const;
  void set_next_payment_date(int32_t value);
  private:
  int32_t _internal_next_payment_date() const;
  void _internal_set_next_payment_date(int32_t value);
  public:

  // required int32 steam_agreement_id = 8;
  bool has_steam_agreement_id() const;
  private:
  bool _internal_has_steam_agreement_id() const;
  public:
  void clear_steam_agreement_id();
  int32_t steam_agreement_id() const;
  void set_steam_agreement_id(int32_t value);
  private:
  int32_t _internal_steam_agreement_id() const;
  void _internal_set_steam_agreement_id(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:CDOTAGameAccountPlus)
 private:
  class _Internal;

  // helper for ByteSizeLong()
  size_t RequiredFieldsByteSizeFallback() const;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::HasBits<1> _has_bits_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
    int32_t account_id_;
    int32_t original_start_date_;
    int32_t plus_flags_;
    int32_t plus_status_;
    int32_t prepaid_time_start_;
    int32_t prepaid_time_balance_;
    int32_t next_payment_date_;
    int32_t steam_agreement_id_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_custommessages_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CDOTAGameAccountPlus

// required int32 account_id = 1;
inline bool CDOTAGameAccountPlus::_internal_has_account_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000001u) != 0;
  return value;
}
inline bool CDOTAGameAccountPlus::has_account_id() const {
  return _internal_has_account_id();
}
inline void CDOTAGameAccountPlus::clear_account_id() {
  _impl_.account_id_ = 0;
  _impl_._has_bits_[0] &= ~0x00000001u;
}
inline int32_t CDOTAGameAccountPlus::_internal_account_id() const {
  return _impl_.account_id_;
}
inline int32_t CDOTAGameAccountPlus::account_id() const {
  // @@protoc_insertion_point(field_get:CDOTAGameAccountPlus.account_id)
  return _internal_account_id();
}
inline void CDOTAGameAccountPlus::_internal_set_account_id(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000001u;
  _impl_.account_id_ = value;
}
inline void CDOTAGameAccountPlus::set_account_id(int32_t value) {
  _internal_set_account_id(value);
  // @@protoc_insertion_point(field_set:CDOTAGameAccountPlus.account_id)
}

// required int32 original_start_date = 2;
inline bool CDOTAGameAccountPlus::_internal_has_original_start_date() const {
  bool value = (_impl_._has_bits_[0] & 0x00000002u) != 0;
  return value;
}
inline bool CDOTAGameAccountPlus::has_original_start_date() const {
  return _internal_has_original_start_date();
}
inline void CDOTAGameAccountPlus::clear_original_start_date() {
  _impl_.original_start_date_ = 0;
  _impl_._has_bits_[0] &= ~0x00000002u;
}
inline int32_t CDOTAGameAccountPlus::_internal_original_start_date() const {
  return _impl_.original_start_date_;
}
inline int32_t CDOTAGameAccountPlus::original_start_date() const {
  // @@protoc_insertion_point(field_get:CDOTAGameAccountPlus.original_start_date)
  return _internal_original_start_date();
}
inline void CDOTAGameAccountPlus::_internal_set_original_start_date(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000002u;
  _impl_.original_start_date_ = value;
}
inline void CDOTAGameAccountPlus::set_original_start_date(int32_t value) {
  _internal_set_original_start_date(value);
  // @@protoc_insertion_point(field_set:CDOTAGameAccountPlus.original_start_date)
}

// required int32 plus_flags = 3;
inline bool CDOTAGameAccountPlus::_internal_has_plus_flags() const {
  bool value = (_impl_._has_bits_[0] & 0x00000004u) != 0;
  return value;
}
inline bool CDOTAGameAccountPlus::has_plus_flags() const {
  return _internal_has_plus_flags();
}
inline void CDOTAGameAccountPlus::clear_plus_flags() {
  _impl_.plus_flags_ = 0;
  _impl_._has_bits_[0] &= ~0x00000004u;
}
inline int32_t CDOTAGameAccountPlus::_internal_plus_flags() const {
  return _impl_.plus_flags_;
}
inline int32_t CDOTAGameAccountPlus::plus_flags() const {
  // @@protoc_insertion_point(field_get:CDOTAGameAccountPlus.plus_flags)
  return _internal_plus_flags();
}
inline void CDOTAGameAccountPlus::_internal_set_plus_flags(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000004u;
  _impl_.plus_flags_ = value;
}
inline void CDOTAGameAccountPlus::set_plus_flags(int32_t value) {
  _internal_set_plus_flags(value);
  // @@protoc_insertion_point(field_set:CDOTAGameAccountPlus.plus_flags)
}

// required int32 plus_status = 4;
inline bool CDOTAGameAccountPlus::_internal_has_plus_status() const {
  bool value = (_impl_._has_bits_[0] & 0x00000008u) != 0;
  return value;
}
inline bool CDOTAGameAccountPlus::has_plus_status() const {
  return _internal_has_plus_status();
}
inline void CDOTAGameAccountPlus::clear_plus_status() {
  _impl_.plus_status_ = 0;
  _impl_._has_bits_[0] &= ~0x00000008u;
}
inline int32_t CDOTAGameAccountPlus::_internal_plus_status() const {
  return _impl_.plus_status_;
}
inline int32_t CDOTAGameAccountPlus::plus_status() const {
  // @@protoc_insertion_point(field_get:CDOTAGameAccountPlus.plus_status)
  return _internal_plus_status();
}
inline void CDOTAGameAccountPlus::_internal_set_plus_status(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000008u;
  _impl_.plus_status_ = value;
}
inline void CDOTAGameAccountPlus::set_plus_status(int32_t value) {
  _internal_set_plus_status(value);
  // @@protoc_insertion_point(field_set:CDOTAGameAccountPlus.plus_status)
}

// required int32 prepaid_time_start = 5;
inline bool CDOTAGameAccountPlus::_internal_has_prepaid_time_start() const {
  bool value = (_impl_._has_bits_[0] & 0x00000010u) != 0;
  return value;
}
inline bool CDOTAGameAccountPlus::has_prepaid_time_start() const {
  return _internal_has_prepaid_time_start();
}
inline void CDOTAGameAccountPlus::clear_prepaid_time_start() {
  _impl_.prepaid_time_start_ = 0;
  _impl_._has_bits_[0] &= ~0x00000010u;
}
inline int32_t CDOTAGameAccountPlus::_internal_prepaid_time_start() const {
  return _impl_.prepaid_time_start_;
}
inline int32_t CDOTAGameAccountPlus::prepaid_time_start() const {
  // @@protoc_insertion_point(field_get:CDOTAGameAccountPlus.prepaid_time_start)
  return _internal_prepaid_time_start();
}
inline void CDOTAGameAccountPlus::_internal_set_prepaid_time_start(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000010u;
  _impl_.prepaid_time_start_ = value;
}
inline void CDOTAGameAccountPlus::set_prepaid_time_start(int32_t value) {
  _internal_set_prepaid_time_start(value);
  // @@protoc_insertion_point(field_set:CDOTAGameAccountPlus.prepaid_time_start)
}

// required int32 prepaid_time_balance = 6;
inline bool CDOTAGameAccountPlus::_internal_has_prepaid_time_balance() const {
  bool value = (_impl_._has_bits_[0] & 0x00000020u) != 0;
  return value;
}
inline bool CDOTAGameAccountPlus::has_prepaid_time_balance() const {
  return _internal_has_prepaid_time_balance();
}
inline void CDOTAGameAccountPlus::clear_prepaid_time_balance() {
  _impl_.prepaid_time_balance_ = 0;
  _impl_._has_bits_[0] &= ~0x00000020u;
}
inline int32_t CDOTAGameAccountPlus::_internal_prepaid_time_balance() const {
  return _impl_.prepaid_time_balance_;
}
inline int32_t CDOTAGameAccountPlus::prepaid_time_balance() const {
  // @@protoc_insertion_point(field_get:CDOTAGameAccountPlus.prepaid_time_balance)
  return _internal_prepaid_time_balance();
}
inline void CDOTAGameAccountPlus::_internal_set_prepaid_time_balance(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000020u;
  _impl_.prepaid_time_balance_ = value;
}
inline void CDOTAGameAccountPlus::set_prepaid_time_balance(int32_t value) {
  _internal_set_prepaid_time_balance(value);
  // @@protoc_insertion_point(field_set:CDOTAGameAccountPlus.prepaid_time_balance)
}

// required int32 next_payment_date = 7;
inline bool CDOTAGameAccountPlus::_internal_has_next_payment_date() const {
  bool value = (_impl_._has_bits_[0] & 0x00000040u) != 0;
  return value;
}
inline bool CDOTAGameAccountPlus::has_next_payment_date() const {
  return _internal_has_next_payment_date();
}
inline void CDOTAGameAccountPlus::clear_next_payment_date() {
  _impl_.next_payment_date_ = 0;
  _impl_._has_bits_[0] &= ~0x00000040u;
}
inline int32_t CDOTAGameAccountPlus::_internal_next_payment_date() const {
  return _impl_.next_payment_date_;
}
inline int32_t CDOTAGameAccountPlus::next_payment_date() const {
  // @@protoc_insertion_point(field_get:CDOTAGameAccountPlus.next_payment_date)
  return _internal_next_payment_date();
}
inline void CDOTAGameAccountPlus::_internal_set_next_payment_date(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000040u;
  _impl_.next_payment_date_ = value;
}
inline void CDOTAGameAccountPlus::set_next_payment_date(int32_t value) {
  _internal_set_next_payment_date(value);
  // @@protoc_insertion_point(field_set:CDOTAGameAccountPlus.next_payment_date)
}

// required int32 steam_agreement_id = 8;
inline bool CDOTAGameAccountPlus::_internal_has_steam_agreement_id() const {
  bool value = (_impl_._has_bits_[0] & 0x00000080u) != 0;
  return value;
}
inline bool CDOTAGameAccountPlus::has_steam_agreement_id() const {
  return _internal_has_steam_agreement_id();
}
inline void CDOTAGameAccountPlus::clear_steam_agreement_id() {
  _impl_.steam_agreement_id_ = 0;
  _impl_._has_bits_[0] &= ~0x00000080u;
}
inline int32_t CDOTAGameAccountPlus::_internal_steam_agreement_id() const {
  return _impl_.steam_agreement_id_;
}
inline int32_t CDOTAGameAccountPlus::steam_agreement_id() const {
  // @@protoc_insertion_point(field_get:CDOTAGameAccountPlus.steam_agreement_id)
  return _internal_steam_agreement_id();
}
inline void CDOTAGameAccountPlus::_internal_set_steam_agreement_id(int32_t value) {
  _impl_._has_bits_[0] |= 0x00000080u;
  _impl_.steam_agreement_id_ = value;
}
inline void CDOTAGameAccountPlus::set_steam_agreement_id(int32_t value) {
  _internal_set_steam_agreement_id(value);
  // @@protoc_insertion_point(field_set:CDOTAGameAccountPlus.steam_agreement_id)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_custommessages_2eproto