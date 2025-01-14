# This file is generated by gyp; do not edit.
LOCAL_PATH := ../..
GYP_CONFIGURATION := Default
include $(CLEAR_VARS)

LOCAL_MODULE_CLASS := STATIC_LIBRARIES
LOCAL_MODULE := third_party_shared_phonenumbersprotos_gyp
LOCAL_MODULE_SUFFIX := .a
LOCAL_MODULE_TAGS := optional
gyp_intermediate_dir := $(abspath $(LOCAL_PATH)/third_party/shared)

# Make sure our deps are built first.
GYP_TARGET_DEPENDENCIES :=


### Generated for rule "third_party_shared_phonenumbers_gyp_phonenumbersprotos_target_genproto":
# "{'inputs': ['../../clients/shared/scripts/protoc-gyp.sh'], 'process_outputs_as_sources': '1', 'extension': 'proto', 'outputs': ['$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/%(INPUT_ROOT)s.pb.cc', '$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/%(INPUT_ROOT)s.pb.h'], 'rule_name': 'genproto', 'rule_sources': ['phonenumbers/resources/phonemetadata.proto', 'phonenumbers/resources/phonenumber.proto'], 'action': ['bash', '../../clients/shared/scripts/protoc-gyp.sh', '"${SHARED_INTERMEDIATE_DIR}/protoc_out" protobuf/src', '$(RULE_SOURCES)', '$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/'], 'message': 'Generating C++ code from $(RULE_SOURCES)'}":
$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonemetadata.pb.cc: gyp_local_path := $(LOCAL_PATH)
$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonemetadata.pb.cc: gyp_intermediate_dir := $(abspath $(gyp_intermediate_dir))
$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonemetadata.pb.cc: export PATH := $(subst $(ANDROID_BUILD_PATHS),,$(PATH))
$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonemetadata.pb.cc: $(LOCAL_PATH)/third_party/shared/phonenumbers/resources/phonemetadata.proto $(LOCAL_PATH)/clients/shared/scripts/protoc-gyp.sh $(GYP_TARGET_DEPENDENCIES)
	mkdir -p $(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers; cd $(gyp_local_path)/third_party/shared; bash ../../clients/shared/scripts/protoc-gyp.sh "\"${SHARED_INTERMEDIATE_DIR}/protoc_out\" protobuf/src" phonenumbers/resources/phonemetadata.proto "$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/"

$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonemetadata.pb.h: $(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonemetadata.pb.cc ;
.PHONY: third_party_shared_phonenumbersprotos_gyp_rule_trigger
third_party_shared_phonenumbersprotos_gyp_rule_trigger: $(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonemetadata.pb.cc

$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonenumber.pb.cc: gyp_local_path := $(LOCAL_PATH)
$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonenumber.pb.cc: gyp_intermediate_dir := $(abspath $(gyp_intermediate_dir))
$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonenumber.pb.cc: export PATH := $(subst $(ANDROID_BUILD_PATHS),,$(PATH))
$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonenumber.pb.cc: $(LOCAL_PATH)/third_party/shared/phonenumbers/resources/phonenumber.proto $(LOCAL_PATH)/clients/shared/scripts/protoc-gyp.sh $(GYP_TARGET_DEPENDENCIES)
	mkdir -p $(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers; cd $(gyp_local_path)/third_party/shared; bash ../../clients/shared/scripts/protoc-gyp.sh "\"${SHARED_INTERMEDIATE_DIR}/protoc_out\" protobuf/src" phonenumbers/resources/phonenumber.proto "$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/"

$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonenumber.pb.h: $(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonenumber.pb.cc ;
.PHONY: third_party_shared_phonenumbersprotos_gyp_rule_trigger
third_party_shared_phonenumbersprotos_gyp_rule_trigger: $(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonenumber.pb.cc

### Finished generating for all rules

GYP_GENERATED_OUTPUTS := \
	$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonemetadata.pb.cc \
	$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonemetadata.pb.h \
	$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonenumber.pb.cc \
	$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonenumber.pb.h

# Make sure our deps and generated files are built first.
GYP_TARGET_DEPENDENCIES += $(GYP_GENERATED_OUTPUTS)

LOCAL_CPP_EXTENSION := .cc
LOCAL_GENERATED_SOURCES := \
	$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonemetadata.pb.cc \
	$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonenumber.pb.cc \
	$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonemetadata.pb.h \
	$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonenumber.pb.h \
	third_party_shared_phonenumbersprotos_gyp_rule_trigger

GYP_COPIED_SOURCE_ORIGIN_DIRS :=

LOCAL_SRC_FILES := \
	$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonemetadata.pb.cc \
	$(gyp_intermediate_dir)/protoc_out/phonenumbers/cpp/src/phonenumbers/phonenumber.pb.cc


# Flags passed to both C and C++ files.
MY_CFLAGS_Default :=

MY_DEFS_Default := \
	'-D__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1' \
	'-D__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2' \
	'-D__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4' \
	'-D__GCC_HAVE_SYNC_COMPARE_AND_SWAP_8'


# Include paths placed before CFLAGS/CPPFLAGS
LOCAL_C_INCLUDES_Default := \
	$(LOCAL_PATH)/third_party/shared/${SHARED_INTERMEDIATE_DIR}/protoc_out \
	$(LOCAL_PATH)/third_party/shared/protobuf/src


# Flags passed to only C++ (and not C) files.
LOCAL_CPPFLAGS_Default := \
	-std=c++11 \
	-stdlib=libc++ \
	-frtti \
	-g


LOCAL_CFLAGS := $(MY_CFLAGS_$(GYP_CONFIGURATION)) $(MY_DEFS_$(GYP_CONFIGURATION))
LOCAL_C_INCLUDES := $(GYP_COPIED_SOURCE_ORIGIN_DIRS) $(LOCAL_C_INCLUDES_$(GYP_CONFIGURATION))
LOCAL_CPPFLAGS := $(LOCAL_CPPFLAGS_$(GYP_CONFIGURATION))
### Rules for final target.

LOCAL_LDFLAGS_Default :=


LOCAL_LDFLAGS := $(LOCAL_LDFLAGS_$(GYP_CONFIGURATION))

LOCAL_STATIC_LIBRARIES :=

# Enable grouping to fix circular references
LOCAL_GROUP_STATIC_LIBRARIES := true

LOCAL_SHARED_LIBRARIES :=

# Add target alias to "gyp_all_modules" target.
.PHONY: gyp_all_modules
gyp_all_modules: third_party_shared_phonenumbersprotos_gyp

# Alias gyp target name.
.PHONY: phonenumbersprotos
phonenumbersprotos: third_party_shared_phonenumbersprotos_gyp

include $(BUILD_STATIC_LIBRARY)
