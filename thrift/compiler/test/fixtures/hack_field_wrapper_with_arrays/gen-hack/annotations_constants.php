<?hh
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
class annotations_CONSTANTS implements \IThriftConstants {
  /**
   * Original thrift constant:-
   * map<string, string> MyConst
   */
  const dict<string, string> MyConst = dict[
    "ENUMERATOR" => "enum",
    "CONST" => "const",
  ];


  public static function getAllStructuredAnnotations()[]: dict<string, dict<string, \IThriftStruct>> {
    $structured_annotation_recursive0 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive0->name = "abc_constants";

    $structured_annotation_recursive1 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive1->name = "cba_constants";

    $structured_annotation_recursive0->get_recurse()->setValue_DO_NOT_USE_THRIFT_INTERNAL($structured_annotation_recursive1);

    $structured_annotation_recursive0->default = structured_annotation_with_default::fromShape(
      shape(
        "count" => 3,
      )
    );

    $structured_annotation_recursive2 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive2->name = "key_constants1";

    $structured_annotation_recursive3 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive3->name = "def_constants";

    $structured_annotation_recursive2->get_recurse()->setValue_DO_NOT_USE_THRIFT_INTERNAL($structured_annotation_recursive3);

    $structured_annotation_recursive4 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive4->name = "key_constants2";

    $structured_annotation_recursive5 = structured_annotation_recursive::withDefaultValues();
    $structured_annotation_recursive5->name = "fed_constants";

    $structured_annotation_recursive4->get_recurse()->setValue_DO_NOT_USE_THRIFT_INTERNAL($structured_annotation_recursive5);

    $structured_annotation_recursive0->recurse_map = dict[
      "key_constants1" => $structured_annotation_recursive2,
      "key_constants2" => $structured_annotation_recursive4,
    ];

    return dict[
      'MyConst' => dict[
        'structured_annotation_recursive' => $structured_annotation_recursive0,
      ],
    ];
  }
}

