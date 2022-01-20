/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.HashMap;
import java.util.Set;
import java.util.HashSet;
import java.util.Collections;
import java.util.BitSet;
import java.util.Arrays;
@SuppressWarnings({ "unused" })
public class Constants {

  public static final Integer myInt = 1337;

  public static final String name = "Mark Zuckerberg";

  public static final String multi_line_string = "This
is a
multi line string.
";

  public static final List<Map<String,Integer>> states = new ArrayList<Map<String,Integer>>();
  static {
    Map<String,Integer> tmp0 = new HashMap<String,Integer>();
    tmp0.put("San Diego", 3211000);
    tmp0.put("Sacramento", 479600);
    tmp0.put("SF", 837400);

    states.add(tmp0);
    Map<String,Integer> tmp1 = new HashMap<String,Integer>();
    tmp1.put("New York", 8406000);
    tmp1.put("Albany", 98400);

    states.add(tmp1);
  }

  public static final Double x = 1;

  public static final Double y = (double)1000000;

  public static final Double z = 1e+09;

  public static final Double zeroDoubleValue = 0;

  public static final Double longDoubleValue = 2.59961e-05;

  public static final Company my_company = Company.FACEBOOK;

  public static final String foo = "foo";

  public static final Integer bar = 42;

  public static final Map<String,String> mymap = new HashMap<String,String>();
  static {
    mymap.put("keys", "values");
  }

  public static final Internship instagram = new Internship();
  static {
    instagram.setWeeks(12);
    instagram.setTitle("Software Engineer");
    instagram.setEmployer(Company.INSTAGRAM);
    instagram.setCompensation(1200);
    instagram.setSchool("Monters University");
  }

  public static final Internship partial_const = new Internship();
  static {
    partial_const.setWeeks(8);
    partial_const.setTitle("Some Job");
  }

  public static final List<Range> kRanges = new ArrayList<Range>();
  static {
    Range tmp2 = new Range();
    tmp2.setMin(1);
    tmp2.setMax(2);

    kRanges.add(tmp2);
    Range tmp3 = new Range();
    tmp3.setMin(5);
    tmp3.setMax(6);

    kRanges.add(tmp3);
  }

  public static final List<Internship> internList = new ArrayList<Internship>();
  static {
    Internship tmp4 = new Internship();
    tmp4.setWeeks(12);
    tmp4.setTitle("Software Engineer");
    tmp4.setEmployer(Company.INSTAGRAM);
    tmp4.setCompensation(1200);
    tmp4.setSchool("Monters University");

    internList.add(tmp4);
    Internship tmp5 = new Internship();
    tmp5.setWeeks(10);
    tmp5.setTitle("Sales Intern");
    tmp5.setEmployer(Company.FACEBOOK);
    tmp5.setCompensation(1000);

    internList.add(tmp5);
  }

  public static final struct1 pod_0 = new struct1();
  static {
  }

  public static final struct1 pod_s_0 = new struct1();
  static {
  }

  public static final struct1 pod_1 = new struct1();
  static {
    pod_1.setA(10);
    pod_1.setB("foo");
  }

  public static final struct1 pod_s_1 = new struct1();
  static {
    pod_s_1.setA(10);
    pod_s_1.setB("foo");
  }

  public static final struct2 pod_2 = new struct2();
  static {
    pod_2.setA(98);
    pod_2.setB("gaz");
    struct1 tmp6 = new struct1();
    tmp6.setA(12);
    tmp6.setB("bar");

    pod_2.setC(tmp6);
    List<Integer> tmp7 = new ArrayList<Integer>();
    tmp7.add(11);
    tmp7.add(22);
    tmp7.add(33);

    pod_2.setD(tmp7);
  }

  public static final struct2 pod_trailing_commas = new struct2();
  static {
    pod_trailing_commas.setA(98);
    pod_trailing_commas.setB("gaz");
    struct1 tmp8 = new struct1();
    tmp8.setA(12);
    tmp8.setB("bar");

    pod_trailing_commas.setC(tmp8);
    List<Integer> tmp9 = new ArrayList<Integer>();
    tmp9.add(11);
    tmp9.add(22);
    tmp9.add(33);

    pod_trailing_commas.setD(tmp9);
  }

  public static final struct2 pod_s_2 = new struct2();
  static {
    pod_s_2.setA(98);
    pod_s_2.setB("gaz");
    struct1 tmp10 = new struct1();
    tmp10.setA(12);
    tmp10.setB("bar");

    pod_s_2.setC(tmp10);
    List<Integer> tmp11 = new ArrayList<Integer>();
    tmp11.add(11);
    tmp11.add(22);
    tmp11.add(33);

    pod_s_2.setD(tmp11);
  }

  public static final struct3 pod_3 = new struct3();
  static {
    pod_3.setA("abc");
    pod_3.setB(456);
    struct2 tmp12 = new struct2();
    tmp12.setA(888);
    struct1 tmp13 = new struct1();
    tmp13.setB("gaz");

    tmp12.setC(tmp13);
    List<Integer> tmp14 = new ArrayList<Integer>();
    tmp14.add(1);
    tmp14.add(2);
    tmp14.add(3);

    tmp12.setD(tmp14);

    pod_3.setC(tmp12);
  }

  public static final struct3 pod_s_3 = new struct3();
  static {
    pod_s_3.setA("abc");
    pod_s_3.setB(456);
    struct2 tmp15 = new struct2();
    tmp15.setA(888);
    struct1 tmp16 = new struct1();
    tmp16.setB("gaz");

    tmp15.setC(tmp16);
    List<Integer> tmp17 = new ArrayList<Integer>();
    tmp17.add(1);
    tmp17.add(2);
    tmp17.add(3);

    tmp15.setD(tmp17);

    pod_s_3.setC(tmp15);
  }

  public static final struct4 pod_4 = new struct4();
  static {
    pod_4.setA(1234);
    pod_4.setB(0.333);
    pod_4.setC((byte)25);
  }

  public static final union1 u_1_1 = new union1();
  static {
    u_1_1.setI(97);
  }

  public static final union1 u_1_2 = new union1();
  static {
    u_1_2.setD(5.6);
  }

  public static final union1 u_1_3 = new union1();
  static {
  }

  public static final union2 u_2_1 = new union2();
  static {
    u_2_1.setI(51);
  }

  public static final union2 u_2_2 = new union2();
  static {
    u_2_2.setD(6.7);
  }

  public static final union2 u_2_3 = new union2();
  static {
    struct1 tmp18 = new struct1();
    tmp18.setA(8);
    tmp18.setB("abacabb");

    u_2_3.setS(tmp18);
  }

  public static final union2 u_2_4 = new union2();
  static {
    union1 tmp19 = new union1();
    tmp19.setI(43);

    u_2_4.setU(tmp19);
  }

  public static final union2 u_2_5 = new union2();
  static {
    union1 tmp20 = new union1();
    tmp20.setD(9.8);

    u_2_5.setU(tmp20);
  }

  public static final union2 u_2_6 = new union2();
  static {
    union1 tmp21 = new union1();

    u_2_6.setU(tmp21);
  }

  public static final String apostrophe = "'";

  public static final String tripleApostrophe = "'''";

  public static final String quotationMark = "\"";

  public static final String backslash = "\\";

  public static final String escaped_a = "\u0061";

  public static final Map<String,Integer> char2ascii = new HashMap<String,Integer>();
  static {
    char2ascii.put("'", 39);
    char2ascii.put("\"", 34);
    char2ascii.put("\\", 92);
    char2ascii.put("\u0061", 97);
  }

  public static final List<String> escaped_strings = new ArrayList<String>();
  static {
    escaped_strings.add("\u0061");
    escaped_strings.add("\u00ab");
    escaped_strings.add("\u006a");
    escaped_strings.add("\u00a6");
    escaped_strings.add("\u0061yyy");
    escaped_strings.add("\u00abyyy");
    escaped_strings.add("\u006ayyy");
    escaped_strings.add("\u00a6yyy");
    escaped_strings.add("zzz\u0061");
    escaped_strings.add("zzz\u00ab");
    escaped_strings.add("zzz\u006a");
    escaped_strings.add("zzz\u00a6");
    escaped_strings.add("zzz\u0061yyy");
    escaped_strings.add("zzz\u00abyyy");
    escaped_strings.add("zzz\u006ayyy");
    escaped_strings.add("zzz\u00a6yyy");
  }

  public static final Boolean false_c = false;

  public static final Boolean true_c = true;

  public static final Byte zero_byte = (byte)0;

  public static final Short zero16 = (short)0;

  public static final Integer zero32 = 0;

  public static final Long zero64 = 0L;

  public static final Double zero_dot_zero = 0;

  public static final String empty_string = "";

  public static final List<Integer> empty_int_list = new ArrayList<Integer>();
  static {
  }

  public static final List<String> empty_string_list = new ArrayList<String>();
  static {
  }

  public static final Set<Integer> empty_int_set = new HashSet<Integer>();
  static {
  }

  public static final Set<String> empty_string_set = new HashSet<String>();
  static {
  }

  public static final Map<Integer,Integer> empty_int_int_map = new HashMap<Integer,Integer>();
  static {
  }

  public static final Map<Integer,String> empty_int_string_map = new HashMap<Integer,String>();
  static {
  }

  public static final Map<String,Integer> empty_string_int_map = new HashMap<String,Integer>();
  static {
  }

  public static final Map<String,String> empty_string_string_map = new HashMap<String,String>();
  static {
  }

  public static final Long maxIntDec = 9223372036854775807L;

  public static final Long maxIntOct = 9223372036854775807L;

  public static final Long maxIntHex = 9223372036854775807L;

  public static final Double maxDub = 1.79769e+308;

  public static final Double minDub = 2.22507e-308;

  public static final Double minSDub = 4.94066e-324;

  public static final Double underflowDub1 = 0;

  public static final Double underflowDub2 = 0;

  public static final Long maxPIntDec = 9223372036854775807L;

  public static final Double maxPDub = 1.79769e+308;

  public static final Double minPDub = 2.22507e-308;

  public static final Double minPSDub = 4.94066e-324;

  public static final Long minIntDec = -9223372036854775808L;

  public static final Double maxNDub = -1.79769e+308;

  public static final Double minNDub = -2.22507e-308;

  public static final Double minNSDub = -4.94066e-324;

}
