/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

package test.fixtures.patch;

import com.facebook.swift.codec.*;
import com.facebook.swift.codec.ThriftField.Requiredness;
import com.facebook.swift.codec.ThriftField.Recursiveness;
import com.google.common.collect.*;
import java.util.*;
import javax.annotation.Nullable;
import org.apache.thrift.*;
import org.apache.thrift.transport.*;
import org.apache.thrift.protocol.*;
import static com.google.common.base.MoreObjects.toStringHelper;
import static com.google.common.base.MoreObjects.ToStringHelper;

@SwiftGenerated
@com.facebook.swift.codec.ThriftStruct(value="OptionalMyDataValuePatch", builder=OptionalMyDataValuePatch.Builder.class)
public final class OptionalMyDataValuePatch implements com.facebook.thrift.payload.ThriftSerializable {

    @ThriftConstructor
    public OptionalMyDataValuePatch(
        @com.facebook.swift.codec.ThriftField(value=2, name="clear", requiredness=Requiredness.NONE) final boolean clear,
        @com.facebook.swift.codec.ThriftField(value=3, name="patch", requiredness=Requiredness.NONE) final test.fixtures.patch.MyDataValuePatch patch,
        @com.facebook.swift.codec.ThriftField(value=4, name="ensure", requiredness=Requiredness.OPTIONAL) final test.fixtures.patch.MyData ensure,
        @com.facebook.swift.codec.ThriftField(value=5, name="patchAfter", requiredness=Requiredness.NONE) final test.fixtures.patch.MyDataValuePatch patchAfter
    ) {
        this.clear = clear;
        this.patch = patch;
        this.ensure = ensure;
        this.patchAfter = patchAfter;
    }
    
    @ThriftConstructor
    protected OptionalMyDataValuePatch() {
      this.clear = false;
      this.patch = null;
      this.ensure = null;
      this.patchAfter = null;
    }
    
    public static class Builder {
    
        private boolean clear = false;
        private test.fixtures.patch.MyDataValuePatch patch = null;
        private test.fixtures.patch.MyData ensure = null;
        private test.fixtures.patch.MyDataValuePatch patchAfter = null;
    
        @com.facebook.swift.codec.ThriftField(value=2, name="clear", requiredness=Requiredness.NONE)
        public Builder setClear(boolean clear) {
            this.clear = clear;
            return this;
        }
    
        public boolean isClear() { return clear; }
    
            @com.facebook.swift.codec.ThriftField(value=3, name="patch", requiredness=Requiredness.NONE)
        public Builder setPatch(test.fixtures.patch.MyDataValuePatch patch) {
            this.patch = patch;
            return this;
        }
    
        public test.fixtures.patch.MyDataValuePatch getPatch() { return patch; }
    
            @com.facebook.swift.codec.ThriftField(value=4, name="ensure", requiredness=Requiredness.OPTIONAL)
        public Builder setEnsure(test.fixtures.patch.MyData ensure) {
            this.ensure = ensure;
            return this;
        }
    
        public test.fixtures.patch.MyData getEnsure() { return ensure; }
    
            @com.facebook.swift.codec.ThriftField(value=5, name="patchAfter", requiredness=Requiredness.NONE)
        public Builder setPatchAfter(test.fixtures.patch.MyDataValuePatch patchAfter) {
            this.patchAfter = patchAfter;
            return this;
        }
    
        public test.fixtures.patch.MyDataValuePatch getPatchAfter() { return patchAfter; }
    
        public Builder() { }
        public Builder(OptionalMyDataValuePatch other) {
            this.clear = other.clear;
            this.patch = other.patch;
            this.ensure = other.ensure;
            this.patchAfter = other.patchAfter;
        }
    
        @ThriftConstructor
        public OptionalMyDataValuePatch build() {
            OptionalMyDataValuePatch result = new OptionalMyDataValuePatch (
                this.clear,
                this.patch,
                this.ensure,
                this.patchAfter
            );
            return result;
        }
    }
                    public static final Map<String, Integer> NAMES_TO_IDS = new HashMap();
    public static final Map<String, Integer> THRIFT_NAMES_TO_IDS = new HashMap();
    public static final Map<Integer, TField> FIELD_METADATA = new HashMap<>();
    private static final TStruct STRUCT_DESC = new TStruct("OptionalMyDataValuePatch");
    private final boolean clear;
    public static final int _CLEAR = 2;
    private static final TField CLEAR_FIELD_DESC = new TField("clear", TType.BOOL, (short)2);
        private final test.fixtures.patch.MyDataValuePatch patch;
    public static final int _PATCH = 3;
    private static final TField PATCH_FIELD_DESC = new TField("patch", TType.STRUCT, (short)3);
        private final test.fixtures.patch.MyData ensure;
    public static final int _ENSURE = 4;
    private static final TField ENSURE_FIELD_DESC = new TField("ensure", TType.STRUCT, (short)4);
        private final test.fixtures.patch.MyDataValuePatch patchAfter;
    public static final int _PATCHAFTER = 5;
    private static final TField PATCH_AFTER_FIELD_DESC = new TField("patchAfter", TType.STRUCT, (short)5);
    static {
      NAMES_TO_IDS.put("clear", 2);
      THRIFT_NAMES_TO_IDS.put("clear", 2);
      FIELD_METADATA.put(2, CLEAR_FIELD_DESC);
      NAMES_TO_IDS.put("patch", 3);
      THRIFT_NAMES_TO_IDS.put("patch", 3);
      FIELD_METADATA.put(3, PATCH_FIELD_DESC);
      NAMES_TO_IDS.put("ensure", 4);
      THRIFT_NAMES_TO_IDS.put("ensure", 4);
      FIELD_METADATA.put(4, ENSURE_FIELD_DESC);
      NAMES_TO_IDS.put("patchAfter", 5);
      THRIFT_NAMES_TO_IDS.put("patchAfter", 5);
      FIELD_METADATA.put(5, PATCH_AFTER_FIELD_DESC);
      com.facebook.thrift.type.TypeRegistry.add(new com.facebook.thrift.type.Type(
        new com.facebook.thrift.type.UniversalName("test.dev/fixtures/patch/OptionalMyDataValuePatch"), 
        OptionalMyDataValuePatch.class, OptionalMyDataValuePatch::read0));
    }
    
    
    @com.facebook.swift.codec.ThriftField(value=2, name="clear", requiredness=Requiredness.NONE)
    public boolean isClear() { return clear; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=3, name="patch", requiredness=Requiredness.NONE)
    public test.fixtures.patch.MyDataValuePatch getPatch() { return patch; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=4, name="ensure", requiredness=Requiredness.OPTIONAL)
    public test.fixtures.patch.MyData getEnsure() { return ensure; }
    
    
    @Nullable
    @com.facebook.swift.codec.ThriftField(value=5, name="patchAfter", requiredness=Requiredness.NONE)
    public test.fixtures.patch.MyDataValuePatch getPatchAfter() { return patchAfter; }
    
    @java.lang.Override
    public String toString() {
        ToStringHelper helper = toStringHelper(this);
        helper.add("clear", clear);
        helper.add("patch", patch);
        helper.add("ensure", ensure);
        helper.add("patchAfter", patchAfter);
        return helper.toString();
    }
    
    @java.lang.Override
    public boolean equals(java.lang.Object o) {
        if (this == o) {
            return true;
        }
        if (o == null || getClass() != o.getClass()) {
            return false;
        }
    
        OptionalMyDataValuePatch other = (OptionalMyDataValuePatch)o;
    
        return
            Objects.equals(clear, other.clear) &&
    Objects.equals(patch, other.patch) &&
    Objects.equals(ensure, other.ensure) &&
    Objects.equals(patchAfter, other.patchAfter) &&
            true;
    }
    
    @java.lang.Override
    public int hashCode() {
        return Arrays.deepHashCode(new java.lang.Object[] {
            clear,
            patch,
            ensure,
            patchAfter
        });
    }
    
    
    public static com.facebook.thrift.payload.Reader<OptionalMyDataValuePatch> asReader() {
      return OptionalMyDataValuePatch::read0;
    }
    
    public static OptionalMyDataValuePatch read0(TProtocol oprot) throws TException {
      TField __field;
      oprot.readStructBegin(OptionalMyDataValuePatch.NAMES_TO_IDS, OptionalMyDataValuePatch.THRIFT_NAMES_TO_IDS, OptionalMyDataValuePatch.FIELD_METADATA);
      OptionalMyDataValuePatch.Builder builder = new OptionalMyDataValuePatch.Builder();
      while (true) {
        __field = oprot.readFieldBegin();
        if (__field.type == TType.STOP) { break; }
        switch (__field.id) {
        case _CLEAR:
          if (__field.type == TType.BOOL) {
            boolean clear = oprot.readBool();
            builder.setClear(clear);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _PATCH:
          if (__field.type == TType.STRUCT) {
            test.fixtures.patch.MyDataValuePatch patch = test.fixtures.patch.MyDataValuePatch.read0(oprot);
            builder.setPatch(patch);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _ENSURE:
          if (__field.type == TType.STRUCT) {
            test.fixtures.patch.MyData ensure = test.fixtures.patch.MyData.read0(oprot);
            builder.setEnsure(ensure);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        case _PATCHAFTER:
          if (__field.type == TType.STRUCT) {
            test.fixtures.patch.MyDataValuePatch patchAfter = test.fixtures.patch.MyDataValuePatch.read0(oprot);
            builder.setPatchAfter(patchAfter);
          } else {
            TProtocolUtil.skip(oprot, __field.type);
          }
          break;
        default:
          TProtocolUtil.skip(oprot, __field.type);
          break;
        }
        oprot.readFieldEnd();
      }
      oprot.readStructEnd();
      return builder.build();
    }
    
    public void write0(TProtocol oprot) throws TException {
      oprot.writeStructBegin(STRUCT_DESC);
      oprot.writeFieldBegin(CLEAR_FIELD_DESC);
      oprot.writeBool(this.clear);
      oprot.writeFieldEnd();
      if (this.patch != null) {
        oprot.writeFieldBegin(PATCH_FIELD_DESC);
        this.patch.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.ensure != null) {
        oprot.writeFieldBegin(ENSURE_FIELD_DESC);
        this.ensure.write0(oprot);
        oprot.writeFieldEnd();
      }
      if (this.patchAfter != null) {
        oprot.writeFieldBegin(PATCH_AFTER_FIELD_DESC);
        this.patchAfter.write0(oprot);
        oprot.writeFieldEnd();
      }
      oprot.writeFieldStop();
      oprot.writeStructEnd();
    }
    
    private static class _OptionalMyDataValuePatchLazy {
        private static final OptionalMyDataValuePatch _DEFAULT = new OptionalMyDataValuePatch.Builder().build();
    }
    
    public static OptionalMyDataValuePatch defaultInstance() {
        return  _OptionalMyDataValuePatchLazy._DEFAULT;
    }
}
