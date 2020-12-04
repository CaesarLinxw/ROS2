#include "SerialMapping_SplDcps.h"
#include "ccpp_SerialMapping_.h"

#include <v_copyIn.h>
#include <v_topic.h>
#include <os_stdlib.h>
#include <string.h>
#include <os_report.h>

v_copyin_result
__ros2_serial_msgs_msg_dds__SerialMapping___copyIn(
    c_base base,
    const struct ::ros2_serial_msgs::msg::dds_::SerialMapping_ *from,
    struct _ros2_serial_msgs_msg_dds__SerialMapping_ *to)
{
    v_copyin_result result = V_COPYIN_RESULT_OK;
    (void) base;

    {
/* Code generated by /var/lib/jenkins/workspace/opensplice-debbuilder/build/opensplice-6.9.190705-osrf1/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 838 */

        c_type type0 = NULL;
        c_type subtype0;
        c_ulong length0;
        c_string *dest0;
        const ::ros2_serial_msgs::msg::dds_::SerialMapping_::_topic_names__seq *src = &from->topic_names_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_string"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_string>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_ulong)(*src).length();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (c_string *)c_newSequence_s(c_collectionType(type0),length0);
         if(dest0 != NULL) {
            /* Code generated by /var/lib/jenkins/workspace/opensplice-debbuilder/build/opensplice-6.9.190705-osrf1/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2096 */
            unsigned int i0;
            for (i0 = 0; (i0 < length0) && V_COPYIN_RESULT_IS_OK(result); i0++) {
#ifdef OSPL_BOUNDS_CHECK
                if((*src)[i0]){
                    dest0[i0] = c_stringNew_s(base, (*src)[i0]);
                    if(dest0[i0] == NULL) {
                        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                    }
                } else {
                    OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'ros2_serial_msgs::msg::dds_::SerialMapping_.*src' of type 'c_string' is NULL.");
                    result = V_COPYIN_RESULT_INVALID;
                }
#else
                dest0[i0] = c_stringNew_s(base, (*src)[i0]);
                if(dest0[i0] == NULL) {
                    result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                }
#endif
            }
            to->topic_names_ = (c_sequence)dest0;
         } else {
             result = V_COPYIN_RESULT_OUT_OF_MEMORY;
          }
#else
        dest0 = (c_string *)c_newSequence_s(c_collectionType(type0),length0);
        if(dest0 != NULL) {
            /* Code generated by /var/lib/jenkins/workspace/opensplice-debbuilder/build/opensplice-6.9.190705-osrf1/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2096 */
            unsigned int i0;
            for (i0 = 0; (i0 < length0) && V_COPYIN_RESULT_IS_OK(result); i0++) {
#ifdef OSPL_BOUNDS_CHECK
                if((*src)[i0]){
                    dest0[i0] = c_stringNew_s(base, (*src)[i0]);
                    if(dest0[i0] == NULL) {
                        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                    }
                } else {
                    OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'ros2_serial_msgs::msg::dds_::SerialMapping_.*src' of type 'c_string' is NULL.");
                    result = V_COPYIN_RESULT_INVALID;
                }
#else
                dest0[i0] = c_stringNew_s(base, (*src)[i0]);
                if(dest0[i0] == NULL) {
                    result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                }
#endif
            }
            to->topic_names_ = (c_sequence)dest0;
        } else {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#endif
        c_free(type0);
    }
    {
/* Code generated by /var/lib/jenkins/workspace/opensplice-debbuilder/build/opensplice-6.9.190705-osrf1/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 838 */

        c_type type0 = NULL;
        c_type subtype0;
        c_ulong length0;
        c_ulonglong *dest0;
        const ::ros2_serial_msgs::msg::dds_::SerialMapping_::_serial_mappings__seq *src = &from->serial_mappings_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_ulonglong"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_ulonglong>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_ulong)(*src).length();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (c_ulonglong *)c_newSequence_s(c_collectionType(type0),length0);
         if(dest0 != NULL) {
            /* Code generated by /var/lib/jenkins/workspace/opensplice-debbuilder/build/opensplice-6.9.190705-osrf1/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2041 */
            const c_ulonglong *buf0;
            buf0 = (const c_ulonglong *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
            to->serial_mappings_ = (c_sequence)dest0;
         } else {
             result = V_COPYIN_RESULT_OUT_OF_MEMORY;
          }
#else
        dest0 = (c_ulonglong *)c_newSequence_s(c_collectionType(type0),length0);
        if(dest0 != NULL) {
            /* Code generated by /var/lib/jenkins/workspace/opensplice-debbuilder/build/opensplice-6.9.190705-osrf1/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2041 */
            const c_ulonglong *buf0;
            buf0 = (const c_ulonglong *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
            to->serial_mappings_ = (c_sequence)dest0;
        } else {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#endif
        c_free(type0);
    }
    {
/* Code generated by /var/lib/jenkins/workspace/opensplice-debbuilder/build/opensplice-6.9.190705-osrf1/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 838 */

        c_type type0 = NULL;
        c_type subtype0;
        c_ulong length0;
        c_string *dest0;
        const ::ros2_serial_msgs::msg::dds_::SerialMapping_::_types__seq *src = &from->types_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_string"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_string>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_ulong)(*src).length();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (c_string *)c_newSequence_s(c_collectionType(type0),length0);
         if(dest0 != NULL) {
            /* Code generated by /var/lib/jenkins/workspace/opensplice-debbuilder/build/opensplice-6.9.190705-osrf1/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2096 */
            unsigned int i0;
            for (i0 = 0; (i0 < length0) && V_COPYIN_RESULT_IS_OK(result); i0++) {
#ifdef OSPL_BOUNDS_CHECK
                if((*src)[i0]){
                    dest0[i0] = c_stringNew_s(base, (*src)[i0]);
                    if(dest0[i0] == NULL) {
                        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                    }
                } else {
                    OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'ros2_serial_msgs::msg::dds_::SerialMapping_.*src' of type 'c_string' is NULL.");
                    result = V_COPYIN_RESULT_INVALID;
                }
#else
                dest0[i0] = c_stringNew_s(base, (*src)[i0]);
                if(dest0[i0] == NULL) {
                    result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                }
#endif
            }
            to->types_ = (c_sequence)dest0;
         } else {
             result = V_COPYIN_RESULT_OUT_OF_MEMORY;
          }
#else
        dest0 = (c_string *)c_newSequence_s(c_collectionType(type0),length0);
        if(dest0 != NULL) {
            /* Code generated by /var/lib/jenkins/workspace/opensplice-debbuilder/build/opensplice-6.9.190705-osrf1/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2096 */
            unsigned int i0;
            for (i0 = 0; (i0 < length0) && V_COPYIN_RESULT_IS_OK(result); i0++) {
#ifdef OSPL_BOUNDS_CHECK
                if((*src)[i0]){
                    dest0[i0] = c_stringNew_s(base, (*src)[i0]);
                    if(dest0[i0] == NULL) {
                        result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                    }
                } else {
                    OS_REPORT (OS_ERROR, "copyIn", 0,"Element of 'ros2_serial_msgs::msg::dds_::SerialMapping_.*src' of type 'c_string' is NULL.");
                    result = V_COPYIN_RESULT_INVALID;
                }
#else
                dest0[i0] = c_stringNew_s(base, (*src)[i0]);
                if(dest0[i0] == NULL) {
                    result = V_COPYIN_RESULT_OUT_OF_MEMORY;
                }
#endif
            }
            to->types_ = (c_sequence)dest0;
        } else {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#endif
        c_free(type0);
    }
    {
/* Code generated by /var/lib/jenkins/workspace/opensplice-debbuilder/build/opensplice-6.9.190705-osrf1/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 838 */

        c_type type0 = NULL;
        c_type subtype0;
        c_ulong length0;
        c_octet *dest0;
        const ::ros2_serial_msgs::msg::dds_::SerialMapping_::_direction__seq *src = &from->direction_;

        if (type0 == NULL) {
            subtype0 = c_type(c_metaResolve (c_metaObject(base), "c_octet"));
            type0 = c_metaSequenceTypeNew(c_metaObject(base),"C_SEQUENCE<c_octet>",subtype0,0);
            c_free(subtype0);
        }
        length0 = (c_ulong)(*src).length();
#ifdef OSPL_BOUNDS_CHECK
         dest0 = (c_octet *)c_newSequence_s(c_collectionType(type0),length0);
         if(dest0 != NULL) {
            /* Code generated by /var/lib/jenkins/workspace/opensplice-debbuilder/build/opensplice-6.9.190705-osrf1/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2041 */
            const c_octet *buf0;
            buf0 = (const c_octet *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
            to->direction_ = (c_sequence)dest0;
         } else {
             result = V_COPYIN_RESULT_OUT_OF_MEMORY;
          }
#else
        dest0 = (c_octet *)c_newSequence_s(c_collectionType(type0),length0);
        if(dest0 != NULL) {
            /* Code generated by /var/lib/jenkins/workspace/opensplice-debbuilder/build/opensplice-6.9.190705-osrf1/src/tools/idlpp/code/idl_genCorbaCxxCopyin.c at line 2041 */
            const c_octet *buf0;
            buf0 = (const c_octet *)(*src).get_buffer();
            memcpy (dest0,buf0,length0* sizeof(*dest0));
            to->direction_ = (c_sequence)dest0;
        } else {
            result = V_COPYIN_RESULT_OUT_OF_MEMORY;
        }
#endif
        c_free(type0);
    }
    return result;
}

void
__ros2_serial_msgs_msg_dds__SerialMapping___copyOut(
    const void *_from,
    void *_to)
{
    const struct _ros2_serial_msgs_msg_dds__SerialMapping_ *from = (const struct _ros2_serial_msgs_msg_dds__SerialMapping_ *)_from;
    struct ::ros2_serial_msgs::msg::dds_::SerialMapping_ *to = (struct ::ros2_serial_msgs::msg::dds_::SerialMapping_ *)_to;
    {
        long size0;
        const c_string *src0 = (const c_string *)from->topic_names_;
        ::ros2_serial_msgs::msg::dds_::SerialMapping_::_topic_names__seq *dst = &to->topic_names_;

        size0 = c_arraySize(c_sequence(from->topic_names_));
        to->topic_names_.length(size0);
        {
            long i0;
            for (i0 = 0; i0 < size0; i0++) {
                (*dst)[i0] = DDS::string_dup(src0[i0]);
            }
        }
    }
    {
        long size0;
        const c_ulonglong *src0 = (const c_ulonglong *)from->serial_mappings_;
        ::ros2_serial_msgs::msg::dds_::SerialMapping_::_serial_mappings__seq *dst = &to->serial_mappings_;

        size0 = c_arraySize(c_sequence(from->serial_mappings_));
        to->serial_mappings_.length(size0);
        {
            c_ulonglong *buf0;
            buf0 = (c_ulonglong *)(*dst).get_buffer();
            memcpy ((void *)buf0,src0,size0* sizeof(*buf0));
        }
    }
    {
        long size0;
        const c_string *src0 = (const c_string *)from->types_;
        ::ros2_serial_msgs::msg::dds_::SerialMapping_::_types__seq *dst = &to->types_;

        size0 = c_arraySize(c_sequence(from->types_));
        to->types_.length(size0);
        {
            long i0;
            for (i0 = 0; i0 < size0; i0++) {
                (*dst)[i0] = DDS::string_dup(src0[i0]);
            }
        }
    }
    {
        long size0;
        const c_octet *src0 = (const c_octet *)from->direction_;
        ::ros2_serial_msgs::msg::dds_::SerialMapping_::_direction__seq *dst = &to->direction_;

        size0 = c_arraySize(c_sequence(from->direction_));
        to->direction_.length(size0);
        {
            c_octet *buf0;
            buf0 = (c_octet *)(*dst).get_buffer();
            memcpy ((void *)buf0,src0,size0* sizeof(*buf0));
        }
    }
}
