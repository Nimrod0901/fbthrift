<?hh // strict
/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

/**
 * Original thrift struct:-
 * A
 */
class A implements \IThriftStruct, \IThriftShapishStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'a',
      'type' => \TType::STRING,
    ),
    2 => shape(
      'var' => 'map_of_string_to_string',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::STRING,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'harray',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'a' => 1,
    'map_of_string_to_string' => 2,
  ];

  const type TConstructorShape = shape(
    ?'a' => string,
    ?'map_of_string_to_string' => dict<string, string>,
  );

  const type TShape = shape(
    'a' => string,
    'map_of_string_to_string' => dict<string, string>,
    ...
  );
  const int STRUCTURAL_ID = 3181416921594932928;
  /**
   * Original thrift field:-
   * 1: string a
   */
  public string $a;
  /**
   * Original thrift field:-
   * 2: map<string, string> map_of_string_to_string
   */
  public dict<string, string> $map_of_string_to_string;

  <<__Rx>>
  public function __construct(?string $a = null, ?dict<string, string> $map_of_string_to_string = null  ) {
    $this->a = $a ?? '';
    $this->map_of_string_to_string = $map_of_string_to_string ?? dict[];
  }

  <<__Rx>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'a'),
      Shapes::idx($shape, 'map_of_string_to_string'),
    );
  }

  public function getName(): string {
    return 'A';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
        'a' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'map_of_string_to_string' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
      ],
    );
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }

  <<__Rx>>
  public static function __fromShape(self::TShape $shape): this {
    $me = new static();
    $me->a = $shape['a'];
    $me->map_of_string_to_string = $shape['map_of_string_to_string'];
    return $me;
  }

  <<__Rx>>
  public function __toShape(): self::TShape {
    return shape(
      'a' => $this->a,
      'map_of_string_to_string' => $this->map_of_string_to_string,
    );
  }
}

/**
 * Original thrift struct:-
 * B
 */
class B implements \IThriftStruct, \IThriftShapishStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'map_of_string_to_string',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::STRING,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'harray',
    ),
    2 => shape(
      'var' => 'map_of_string_to_i32',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::I32,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::I32,
      ),
      'format' => 'harray',
    ),
    3 => shape(
      'var' => 'map_of_string_to_A',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::STRUCT,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::STRUCT,
        'class' => A::class,
      ),
      'format' => 'harray',
    ),
    4 => shape(
      'var' => 'map_of_string_to_self',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::STRUCT,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::STRUCT,
        'class' => B::class,
      ),
      'format' => 'harray',
    ),
    5 => shape(
      'var' => 'map_of_string_to_list_of_A',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::LST,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::LST,
        'etype' => \TType::STRUCT,
        'elem' => shape(
          'type' => \TType::STRUCT,
          'class' => A::class,
        ),
        'format' => 'harray',
      ),
      'format' => 'harray',
    ),
    6 => shape(
      'var' => 'map_of_string_to_map_of_string_to_i32',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::MAP,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::STRING,
        'vtype' => \TType::I32,
        'key' => shape(
          'type' => \TType::STRING,
        ),
        'val' => shape(
          'type' => \TType::I32,
        ),
        'format' => 'harray',
      ),
      'format' => 'harray',
    ),
    7 => shape(
      'var' => 'map_of_string_to_map_of_string_to_A',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::MAP,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::STRING,
        'vtype' => \TType::STRUCT,
        'key' => shape(
          'type' => \TType::STRING,
        ),
        'val' => shape(
          'type' => \TType::STRUCT,
          'class' => A::class,
        ),
        'format' => 'harray',
      ),
      'format' => 'harray',
    ),
    8 => shape(
      'var' => 'list_of_string',
      'type' => \TType::LST,
      'etype' => \TType::STRING,
      'elem' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'harray',
    ),
    9 => shape(
      'var' => 'list_of_map_of_string_to_A',
      'type' => \TType::LST,
      'etype' => \TType::MAP,
      'elem' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::STRING,
        'vtype' => \TType::STRUCT,
        'key' => shape(
          'type' => \TType::STRING,
        ),
        'val' => shape(
          'type' => \TType::STRUCT,
          'class' => A::class,
        ),
        'format' => 'harray',
      ),
      'format' => 'harray',
    ),
    10 => shape(
      'var' => 'list_of_self',
      'type' => \TType::LST,
      'etype' => \TType::STRUCT,
      'elem' => shape(
        'type' => \TType::STRUCT,
        'class' => B::class,
      ),
      'format' => 'harray',
    ),
    11 => shape(
      'var' => 'list_of_list_of_self',
      'type' => \TType::LST,
      'etype' => \TType::LST,
      'elem' => shape(
        'type' => \TType::LST,
        'etype' => \TType::STRUCT,
        'elem' => shape(
          'type' => \TType::STRUCT,
          'class' => B::class,
        ),
        'format' => 'harray',
      ),
      'format' => 'harray',
    ),
    12 => shape(
      'var' => 'list_of_map_of_string_to_list_of_A',
      'type' => \TType::LST,
      'etype' => \TType::MAP,
      'elem' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::STRING,
        'vtype' => \TType::LST,
        'key' => shape(
          'type' => \TType::STRING,
        ),
        'val' => shape(
          'type' => \TType::LST,
          'etype' => \TType::STRUCT,
          'elem' => shape(
            'type' => \TType::STRUCT,
            'class' => A::class,
          ),
          'format' => 'harray',
        ),
        'format' => 'harray',
      ),
      'format' => 'harray',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'map_of_string_to_string' => 1,
    'map_of_string_to_i32' => 2,
    'map_of_string_to_A' => 3,
    'map_of_string_to_self' => 4,
    'map_of_string_to_list_of_A' => 5,
    'map_of_string_to_map_of_string_to_i32' => 6,
    'map_of_string_to_map_of_string_to_A' => 7,
    'list_of_string' => 8,
    'list_of_map_of_string_to_A' => 9,
    'list_of_self' => 10,
    'list_of_list_of_self' => 11,
    'list_of_map_of_string_to_list_of_A' => 12,
  ];

  const type TConstructorShape = shape(
    ?'map_of_string_to_string' => dict<string, string>,
    ?'map_of_string_to_i32' => dict<string, int>,
    ?'map_of_string_to_A' => dict<string, A>,
    ?'map_of_string_to_self' => dict<string, B>,
    ?'map_of_string_to_list_of_A' => dict<string, vec<A>>,
    ?'map_of_string_to_map_of_string_to_i32' => dict<string, dict<string, int>>,
    ?'map_of_string_to_map_of_string_to_A' => dict<string, dict<string, A>>,
    ?'list_of_string' => vec<string>,
    ?'list_of_map_of_string_to_A' => vec<dict<string, A>>,
    ?'list_of_self' => vec<B>,
    ?'list_of_list_of_self' => vec<vec<B>>,
    ?'list_of_map_of_string_to_list_of_A' => vec<dict<string, vec<A>>>,
  );

  const type TShape = shape(
    'map_of_string_to_string' => dict<string, string>,
    'map_of_string_to_i32' => dict<string, int>,
    'map_of_string_to_A' => dict<string, A::TShape>,
    'map_of_string_to_self' => dict<string, B::TShape>,
    'map_of_string_to_list_of_A' => dict<string, vec<A::TShape>>,
    'map_of_string_to_map_of_string_to_i32' => dict<string, dict<string, int>>,
    'map_of_string_to_map_of_string_to_A' => dict<string, dict<string, A::TShape>>,
    'list_of_string' => vec<string>,
    'list_of_map_of_string_to_A' => vec<dict<string, A::TShape>>,
    'list_of_self' => vec<B::TShape>,
    'list_of_list_of_self' => vec<vec<B::TShape>>,
    'list_of_map_of_string_to_list_of_A' => vec<dict<string, vec<A::TShape>>>,
    ...
  );
  const int STRUCTURAL_ID = 2946796456701255343;
  /**
   * Original thrift field:-
   * 1: map<string, string> map_of_string_to_string
   */
  public dict<string, string> $map_of_string_to_string;
  /**
   * Original thrift field:-
   * 2: map<string, i32> map_of_string_to_i32
   */
  public dict<string, int> $map_of_string_to_i32;
  /**
   * Original thrift field:-
   * 3: map<string, struct module.A> map_of_string_to_A
   */
  public dict<string, A> $map_of_string_to_A;
  /**
   * Original thrift field:-
   * 4: map<string, struct module.B> map_of_string_to_self
   */
  public dict<string, B> $map_of_string_to_self;
  /**
   * Original thrift field:-
   * 5: map<string, list<struct module.A>> map_of_string_to_list_of_A
   */
  public dict<string, vec<A>> $map_of_string_to_list_of_A;
  /**
   * Original thrift field:-
   * 6: map<string, map<string, i32>> map_of_string_to_map_of_string_to_i32
   */
  public dict<string, dict<string, int>> $map_of_string_to_map_of_string_to_i32;
  /**
   * Original thrift field:-
   * 7: map<string, map<string, struct module.A>> map_of_string_to_map_of_string_to_A
   */
  public dict<string, dict<string, A>> $map_of_string_to_map_of_string_to_A;
  /**
   * Original thrift field:-
   * 8: list<string> list_of_string
   */
  public vec<string> $list_of_string;
  /**
   * Original thrift field:-
   * 9: list<map<string, struct module.A>> list_of_map_of_string_to_A
   */
  public vec<dict<string, A>> $list_of_map_of_string_to_A;
  /**
   * Original thrift field:-
   * 10: list<struct module.B> list_of_self
   */
  public vec<B> $list_of_self;
  /**
   * Original thrift field:-
   * 11: list<list<struct module.B>> list_of_list_of_self
   */
  public vec<vec<B>> $list_of_list_of_self;
  /**
   * Original thrift field:-
   * 12: list<map<string, list<struct module.A>>> list_of_map_of_string_to_list_of_A
   */
  public vec<dict<string, vec<A>>> $list_of_map_of_string_to_list_of_A;

  <<__Rx>>
  public function __construct(?dict<string, string> $map_of_string_to_string = null, ?dict<string, int> $map_of_string_to_i32 = null, ?dict<string, A> $map_of_string_to_A = null, ?dict<string, B> $map_of_string_to_self = null, ?dict<string, vec<A>> $map_of_string_to_list_of_A = null, ?dict<string, dict<string, int>> $map_of_string_to_map_of_string_to_i32 = null, ?dict<string, dict<string, A>> $map_of_string_to_map_of_string_to_A = null, ?vec<string> $list_of_string = null, ?vec<dict<string, A>> $list_of_map_of_string_to_A = null, ?vec<B> $list_of_self = null, ?vec<vec<B>> $list_of_list_of_self = null, ?vec<dict<string, vec<A>>> $list_of_map_of_string_to_list_of_A = null  ) {
    $this->map_of_string_to_string = $map_of_string_to_string ?? dict[];
    $this->map_of_string_to_i32 = $map_of_string_to_i32 ?? dict[];
    $this->map_of_string_to_A = $map_of_string_to_A ?? dict[];
    $this->map_of_string_to_self = $map_of_string_to_self ?? dict[];
    $this->map_of_string_to_list_of_A = $map_of_string_to_list_of_A ?? dict[];
    $this->map_of_string_to_map_of_string_to_i32 = $map_of_string_to_map_of_string_to_i32 ?? dict[];
    $this->map_of_string_to_map_of_string_to_A = $map_of_string_to_map_of_string_to_A ?? dict[];
    $this->list_of_string = $list_of_string ?? vec[];
    $this->list_of_map_of_string_to_A = $list_of_map_of_string_to_A ?? vec[];
    $this->list_of_self = $list_of_self ?? vec[];
    $this->list_of_list_of_self = $list_of_list_of_self ?? vec[];
    $this->list_of_map_of_string_to_list_of_A = $list_of_map_of_string_to_list_of_A ?? vec[];
  }

  <<__Rx>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'map_of_string_to_string'),
      Shapes::idx($shape, 'map_of_string_to_i32'),
      Shapes::idx($shape, 'map_of_string_to_A'),
      Shapes::idx($shape, 'map_of_string_to_self'),
      Shapes::idx($shape, 'map_of_string_to_list_of_A'),
      Shapes::idx($shape, 'map_of_string_to_map_of_string_to_i32'),
      Shapes::idx($shape, 'map_of_string_to_map_of_string_to_A'),
      Shapes::idx($shape, 'list_of_string'),
      Shapes::idx($shape, 'list_of_map_of_string_to_A'),
      Shapes::idx($shape, 'list_of_self'),
      Shapes::idx($shape, 'list_of_list_of_self'),
      Shapes::idx($shape, 'list_of_map_of_string_to_list_of_A'),
    );
  }

  public function getName(): string {
    return 'B';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
        'map_of_string_to_string' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'map_of_string_to_i32' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'map_of_string_to_A' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'map_of_string_to_self' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'map_of_string_to_list_of_A' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'map_of_string_to_map_of_string_to_i32' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'map_of_string_to_map_of_string_to_A' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'list_of_string' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'list_of_map_of_string_to_A' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'list_of_self' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'list_of_list_of_self' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'list_of_map_of_string_to_list_of_A' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
      ],
    );
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }

  <<__Rx>>
  public static function __fromShape(self::TShape $shape): this {
    $me = new static();
    $me->map_of_string_to_string = $shape['map_of_string_to_string'];
    $me->map_of_string_to_i32 = $shape['map_of_string_to_i32'];
    $me->map_of_string_to_A = $shape['map_of_string_to_A']
      |> Dict\map(
        $$,
        $_val0 ==> $_val0
          |> A::__fromShape($$),
      );
    $me->map_of_string_to_self = $shape['map_of_string_to_self']
      |> Dict\map(
        $$,
        $_val1 ==> $_val1
          |> B::__fromShape($$),
      );
    $me->map_of_string_to_list_of_A = $shape['map_of_string_to_list_of_A']
      |> Dict\map(
        $$,
        $_val2 ==> $_val2
          |> Vec\map(
            $$,
            $_val3 ==> $_val3
              |> A::__fromShape($$),
          ),
      );
    $me->map_of_string_to_map_of_string_to_i32 = $shape['map_of_string_to_map_of_string_to_i32'];
    $me->map_of_string_to_map_of_string_to_A = $shape['map_of_string_to_map_of_string_to_A']
      |> Dict\map(
        $$,
        $_val4 ==> $_val4
          |> Dict\map(
            $$,
            $_val5 ==> $_val5
              |> A::__fromShape($$),
          ),
      );
    $me->list_of_string = $shape['list_of_string'];
    $me->list_of_map_of_string_to_A = $shape['list_of_map_of_string_to_A']
      |> Vec\map(
        $$,
        $_val6 ==> $_val6
          |> Dict\map(
            $$,
            $_val7 ==> $_val7
              |> A::__fromShape($$),
          ),
      );
    $me->list_of_self = $shape['list_of_self']
      |> Vec\map(
        $$,
        $_val8 ==> $_val8
          |> B::__fromShape($$),
      );
    $me->list_of_list_of_self = $shape['list_of_list_of_self']
      |> Vec\map(
        $$,
        $_val9 ==> $_val9
          |> Vec\map(
            $$,
            $_val10 ==> $_val10
              |> B::__fromShape($$),
          ),
      );
    $me->list_of_map_of_string_to_list_of_A = $shape['list_of_map_of_string_to_list_of_A']
      |> Vec\map(
        $$,
        $_val11 ==> $_val11
          |> Dict\map(
            $$,
            $_val12 ==> $_val12
              |> Vec\map(
                $$,
                $_val13 ==> $_val13
                  |> A::__fromShape($$),
              ),
          ),
      );
    return $me;
  }

  <<__Rx>>
  public function __toShape(): self::TShape {
    return shape(
      'map_of_string_to_string' => $this->map_of_string_to_string,
      'map_of_string_to_i32' => $this->map_of_string_to_i32,
      'map_of_string_to_A' => $this->map_of_string_to_A
        |> Dict\map(
          $$,
          ($_val0) ==> $_val0->__toShape(),
        ),
      'map_of_string_to_self' => $this->map_of_string_to_self
        |> Dict\map(
          $$,
          ($_val0) ==> $_val0->__toShape(),
        ),
      'map_of_string_to_list_of_A' => $this->map_of_string_to_list_of_A
        |> Dict\map(
          $$,
          ($_val0) ==> $_val0
            |> Vec\map(
              $$,
              ($_val1) ==> $_val1->__toShape(),
            ),
        ),
      'map_of_string_to_map_of_string_to_i32' => $this->map_of_string_to_map_of_string_to_i32,
      'map_of_string_to_map_of_string_to_A' => $this->map_of_string_to_map_of_string_to_A
        |> Dict\map(
          $$,
          ($_val0) ==> $_val0
            |> Dict\map(
              $$,
              ($_val1) ==> $_val1->__toShape(),
            ),
        ),
      'list_of_string' => $this->list_of_string,
      'list_of_map_of_string_to_A' => $this->list_of_map_of_string_to_A
        |> Vec\map(
          $$,
          ($_val0) ==> $_val0
            |> Dict\map(
              $$,
              ($_val1) ==> $_val1->__toShape(),
            ),
        ),
      'list_of_self' => $this->list_of_self
        |> Vec\map(
          $$,
          ($_val0) ==> $_val0->__toShape(),
        ),
      'list_of_list_of_self' => $this->list_of_list_of_self
        |> Vec\map(
          $$,
          ($_val0) ==> $_val0
            |> Vec\map(
              $$,
              ($_val1) ==> $_val1->__toShape(),
            ),
        ),
      'list_of_map_of_string_to_list_of_A' => $this->list_of_map_of_string_to_list_of_A
        |> Vec\map(
          $$,
          ($_val0) ==> $_val0
            |> Dict\map(
              $$,
              ($_val1) ==> $_val1
                |> Vec\map(
                  $$,
                  ($_val2) ==> $_val2->__toShape(),
                ),
            ),
        ),
    );
  }
}

/**
 * Original thrift struct:-
 * C
 */
class C implements \IThriftStruct, \IThriftShapishStruct {
  use \ThriftSerializationTrait;

  const dict<int, this::TFieldSpec> SPEC = dict[
    1 => shape(
      'var' => 'map_of_string_to_string',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::STRING,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'harray',
    ),
    2 => shape(
      'var' => 'map_of_string_to_i32',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::I32,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::I32,
      ),
      'format' => 'harray',
    ),
    3 => shape(
      'var' => 'map_of_string_to_A',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::STRUCT,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::STRUCT,
        'class' => A::class,
      ),
      'format' => 'harray',
    ),
    4 => shape(
      'var' => 'map_of_string_to_self',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::STRUCT,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::STRUCT,
        'class' => B::class,
      ),
      'format' => 'harray',
    ),
    5 => shape(
      'var' => 'map_of_string_to_list_of_A',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::LST,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::LST,
        'etype' => \TType::STRUCT,
        'elem' => shape(
          'type' => \TType::STRUCT,
          'class' => A::class,
        ),
        'format' => 'harray',
      ),
      'format' => 'harray',
    ),
    6 => shape(
      'var' => 'map_of_string_to_map_of_string_to_i32',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::MAP,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::STRING,
        'vtype' => \TType::I32,
        'key' => shape(
          'type' => \TType::STRING,
        ),
        'val' => shape(
          'type' => \TType::I32,
        ),
        'format' => 'harray',
      ),
      'format' => 'harray',
    ),
    7 => shape(
      'var' => 'map_of_string_to_map_of_string_to_A',
      'type' => \TType::MAP,
      'ktype' => \TType::STRING,
      'vtype' => \TType::MAP,
      'key' => shape(
        'type' => \TType::STRING,
      ),
      'val' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::STRING,
        'vtype' => \TType::STRUCT,
        'key' => shape(
          'type' => \TType::STRING,
        ),
        'val' => shape(
          'type' => \TType::STRUCT,
          'class' => A::class,
        ),
        'format' => 'harray',
      ),
      'format' => 'harray',
    ),
    8 => shape(
      'var' => 'list_of_string',
      'type' => \TType::LST,
      'etype' => \TType::STRING,
      'elem' => shape(
        'type' => \TType::STRING,
      ),
      'format' => 'harray',
    ),
    9 => shape(
      'var' => 'list_of_map_of_string_to_A',
      'type' => \TType::LST,
      'etype' => \TType::MAP,
      'elem' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::STRING,
        'vtype' => \TType::STRUCT,
        'key' => shape(
          'type' => \TType::STRING,
        ),
        'val' => shape(
          'type' => \TType::STRUCT,
          'class' => A::class,
        ),
        'format' => 'harray',
      ),
      'format' => 'harray',
    ),
    10 => shape(
      'var' => 'list_of_self',
      'type' => \TType::LST,
      'etype' => \TType::STRUCT,
      'elem' => shape(
        'type' => \TType::STRUCT,
        'class' => B::class,
      ),
      'format' => 'harray',
    ),
    11 => shape(
      'var' => 'list_of_list_of_self',
      'type' => \TType::LST,
      'etype' => \TType::LST,
      'elem' => shape(
        'type' => \TType::LST,
        'etype' => \TType::STRUCT,
        'elem' => shape(
          'type' => \TType::STRUCT,
          'class' => B::class,
        ),
        'format' => 'harray',
      ),
      'format' => 'harray',
    ),
    12 => shape(
      'var' => 'list_of_map_of_string_to_list_of_A',
      'type' => \TType::LST,
      'etype' => \TType::MAP,
      'elem' => shape(
        'type' => \TType::MAP,
        'ktype' => \TType::STRING,
        'vtype' => \TType::LST,
        'key' => shape(
          'type' => \TType::STRING,
        ),
        'val' => shape(
          'type' => \TType::LST,
          'etype' => \TType::STRUCT,
          'elem' => shape(
            'type' => \TType::STRUCT,
            'class' => A::class,
          ),
          'format' => 'harray',
        ),
        'format' => 'harray',
      ),
      'format' => 'harray',
    ),
  ];
  const dict<string, int> FIELDMAP = dict[
    'map_of_string_to_string' => 1,
    'map_of_string_to_i32' => 2,
    'map_of_string_to_A' => 3,
    'map_of_string_to_self' => 4,
    'map_of_string_to_list_of_A' => 5,
    'map_of_string_to_map_of_string_to_i32' => 6,
    'map_of_string_to_map_of_string_to_A' => 7,
    'list_of_string' => 8,
    'list_of_map_of_string_to_A' => 9,
    'list_of_self' => 10,
    'list_of_list_of_self' => 11,
    'list_of_map_of_string_to_list_of_A' => 12,
  ];

  const type TConstructorShape = shape(
    ?'map_of_string_to_string' => ?dict<string, string>,
    ?'map_of_string_to_i32' => ?dict<string, int>,
    ?'map_of_string_to_A' => ?dict<string, A>,
    ?'map_of_string_to_self' => ?dict<string, B>,
    ?'map_of_string_to_list_of_A' => ?dict<string, vec<A>>,
    ?'map_of_string_to_map_of_string_to_i32' => ?dict<string, dict<string, int>>,
    ?'map_of_string_to_map_of_string_to_A' => ?dict<string, dict<string, A>>,
    ?'list_of_string' => ?vec<string>,
    ?'list_of_map_of_string_to_A' => ?vec<dict<string, A>>,
    ?'list_of_self' => ?vec<B>,
    ?'list_of_list_of_self' => ?vec<vec<B>>,
    ?'list_of_map_of_string_to_list_of_A' => ?vec<dict<string, vec<A>>>,
  );

  const type TShape = shape(
    ?'map_of_string_to_string' => ?dict<string, string>,
    ?'map_of_string_to_i32' => ?dict<string, int>,
    ?'map_of_string_to_A' => ?dict<string, A::TShape>,
    ?'map_of_string_to_self' => ?dict<string, B::TShape>,
    ?'map_of_string_to_list_of_A' => ?dict<string, vec<A::TShape>>,
    ?'map_of_string_to_map_of_string_to_i32' => ?dict<string, dict<string, int>>,
    ?'map_of_string_to_map_of_string_to_A' => ?dict<string, dict<string, A::TShape>>,
    ?'list_of_string' => ?vec<string>,
    ?'list_of_map_of_string_to_A' => ?vec<dict<string, A::TShape>>,
    ?'list_of_self' => ?vec<B::TShape>,
    ?'list_of_list_of_self' => ?vec<vec<B::TShape>>,
    ?'list_of_map_of_string_to_list_of_A' => ?vec<dict<string, vec<A::TShape>>>,
    ...
  );
  const int STRUCTURAL_ID = 8031476337653899449;
  /**
   * Original thrift field:-
   * 1: map<string, string> map_of_string_to_string
   */
  public ?dict<string, string> $map_of_string_to_string;
  /**
   * Original thrift field:-
   * 2: map<string, i32> map_of_string_to_i32
   */
  public ?dict<string, int> $map_of_string_to_i32;
  /**
   * Original thrift field:-
   * 3: map<string, struct module.A> map_of_string_to_A
   */
  public ?dict<string, A> $map_of_string_to_A;
  /**
   * Original thrift field:-
   * 4: map<string, struct module.B> map_of_string_to_self
   */
  public ?dict<string, B> $map_of_string_to_self;
  /**
   * Original thrift field:-
   * 5: map<string, list<struct module.A>> map_of_string_to_list_of_A
   */
  public ?dict<string, vec<A>> $map_of_string_to_list_of_A;
  /**
   * Original thrift field:-
   * 6: map<string, map<string, i32>> map_of_string_to_map_of_string_to_i32
   */
  public ?dict<string, dict<string, int>> $map_of_string_to_map_of_string_to_i32;
  /**
   * Original thrift field:-
   * 7: map<string, map<string, struct module.A>> map_of_string_to_map_of_string_to_A
   */
  public ?dict<string, dict<string, A>> $map_of_string_to_map_of_string_to_A;
  /**
   * Original thrift field:-
   * 8: list<string> list_of_string
   */
  public ?vec<string> $list_of_string;
  /**
   * Original thrift field:-
   * 9: list<map<string, struct module.A>> list_of_map_of_string_to_A
   */
  public ?vec<dict<string, A>> $list_of_map_of_string_to_A;
  /**
   * Original thrift field:-
   * 10: list<struct module.B> list_of_self
   */
  public ?vec<B> $list_of_self;
  /**
   * Original thrift field:-
   * 11: list<list<struct module.B>> list_of_list_of_self
   */
  public ?vec<vec<B>> $list_of_list_of_self;
  /**
   * Original thrift field:-
   * 12: list<map<string, list<struct module.A>>> list_of_map_of_string_to_list_of_A
   */
  public ?vec<dict<string, vec<A>>> $list_of_map_of_string_to_list_of_A;

  <<__Rx>>
  public function __construct(?dict<string, string> $map_of_string_to_string = null, ?dict<string, int> $map_of_string_to_i32 = null, ?dict<string, A> $map_of_string_to_A = null, ?dict<string, B> $map_of_string_to_self = null, ?dict<string, vec<A>> $map_of_string_to_list_of_A = null, ?dict<string, dict<string, int>> $map_of_string_to_map_of_string_to_i32 = null, ?dict<string, dict<string, A>> $map_of_string_to_map_of_string_to_A = null, ?vec<string> $list_of_string = null, ?vec<dict<string, A>> $list_of_map_of_string_to_A = null, ?vec<B> $list_of_self = null, ?vec<vec<B>> $list_of_list_of_self = null, ?vec<dict<string, vec<A>>> $list_of_map_of_string_to_list_of_A = null  ) {
    $this->map_of_string_to_string = $map_of_string_to_string;
    $this->map_of_string_to_i32 = $map_of_string_to_i32;
    $this->map_of_string_to_A = $map_of_string_to_A;
    $this->map_of_string_to_self = $map_of_string_to_self;
    $this->map_of_string_to_list_of_A = $map_of_string_to_list_of_A;
    $this->map_of_string_to_map_of_string_to_i32 = $map_of_string_to_map_of_string_to_i32;
    $this->map_of_string_to_map_of_string_to_A = $map_of_string_to_map_of_string_to_A;
    $this->list_of_string = $list_of_string;
    $this->list_of_map_of_string_to_A = $list_of_map_of_string_to_A;
    $this->list_of_self = $list_of_self;
    $this->list_of_list_of_self = $list_of_list_of_self;
    $this->list_of_map_of_string_to_list_of_A = $list_of_map_of_string_to_list_of_A;
  }

  <<__Rx>>
  public static function withDefaultValues(): this {
    return new static();
  }

  <<__Rx>>
  public static function fromShape(self::TConstructorShape $shape): this {
    return new static(
      Shapes::idx($shape, 'map_of_string_to_string'),
      Shapes::idx($shape, 'map_of_string_to_i32'),
      Shapes::idx($shape, 'map_of_string_to_A'),
      Shapes::idx($shape, 'map_of_string_to_self'),
      Shapes::idx($shape, 'map_of_string_to_list_of_A'),
      Shapes::idx($shape, 'map_of_string_to_map_of_string_to_i32'),
      Shapes::idx($shape, 'map_of_string_to_map_of_string_to_A'),
      Shapes::idx($shape, 'list_of_string'),
      Shapes::idx($shape, 'list_of_map_of_string_to_A'),
      Shapes::idx($shape, 'list_of_self'),
      Shapes::idx($shape, 'list_of_list_of_self'),
      Shapes::idx($shape, 'list_of_map_of_string_to_list_of_A'),
    );
  }

  public function getName(): string {
    return 'C';
  }

  public static function getAllStructuredAnnotations(): \TStructAnnotations {
    return shape(
      'struct' => dict[],
      'fields' => dict[
        'map_of_string_to_string' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'map_of_string_to_i32' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'map_of_string_to_A' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'map_of_string_to_self' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'map_of_string_to_list_of_A' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'map_of_string_to_map_of_string_to_i32' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'map_of_string_to_map_of_string_to_A' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'list_of_string' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'list_of_map_of_string_to_A' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'list_of_self' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'list_of_list_of_self' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
        'list_of_map_of_string_to_list_of_A' => shape(
          'field' => dict[],
          'type' => dict[],
        ),
      ],
    );
  }

  public static function getAnnotations(): darray<string, mixed> {
    return darray[
    ];
  }

  <<__Rx>>
  public static function __fromShape(self::TShape $shape): this {
    $me = new static();
    if (Shapes::idx($shape, 'map_of_string_to_string') !== null) {
      $me->map_of_string_to_string = $shape['map_of_string_to_string'];
    }
    if (Shapes::idx($shape, 'map_of_string_to_i32') !== null) {
      $me->map_of_string_to_i32 = $shape['map_of_string_to_i32'];
    }
    if (Shapes::idx($shape, 'map_of_string_to_A') !== null) {
      $me->map_of_string_to_A = $shape['map_of_string_to_A']
        |> Dict\map(
          $$,
          $_val0 ==> $_val0
            |> A::__fromShape($$),
        );
    }
    if (Shapes::idx($shape, 'map_of_string_to_self') !== null) {
      $me->map_of_string_to_self = $shape['map_of_string_to_self']
        |> Dict\map(
          $$,
          $_val1 ==> $_val1
            |> B::__fromShape($$),
        );
    }
    if (Shapes::idx($shape, 'map_of_string_to_list_of_A') !== null) {
      $me->map_of_string_to_list_of_A = $shape['map_of_string_to_list_of_A']
        |> Dict\map(
          $$,
          $_val2 ==> $_val2
            |> Vec\map(
              $$,
              $_val3 ==> $_val3
                |> A::__fromShape($$),
            ),
        );
    }
    if (Shapes::idx($shape, 'map_of_string_to_map_of_string_to_i32') !== null) {
      $me->map_of_string_to_map_of_string_to_i32 = $shape['map_of_string_to_map_of_string_to_i32'];
    }
    if (Shapes::idx($shape, 'map_of_string_to_map_of_string_to_A') !== null) {
      $me->map_of_string_to_map_of_string_to_A = $shape['map_of_string_to_map_of_string_to_A']
        |> Dict\map(
          $$,
          $_val4 ==> $_val4
            |> Dict\map(
              $$,
              $_val5 ==> $_val5
                |> A::__fromShape($$),
            ),
        );
    }
    if (Shapes::idx($shape, 'list_of_string') !== null) {
      $me->list_of_string = $shape['list_of_string'];
    }
    if (Shapes::idx($shape, 'list_of_map_of_string_to_A') !== null) {
      $me->list_of_map_of_string_to_A = $shape['list_of_map_of_string_to_A']
        |> Vec\map(
          $$,
          $_val6 ==> $_val6
            |> Dict\map(
              $$,
              $_val7 ==> $_val7
                |> A::__fromShape($$),
            ),
        );
    }
    if (Shapes::idx($shape, 'list_of_self') !== null) {
      $me->list_of_self = $shape['list_of_self']
        |> Vec\map(
          $$,
          $_val8 ==> $_val8
            |> B::__fromShape($$),
        );
    }
    if (Shapes::idx($shape, 'list_of_list_of_self') !== null) {
      $me->list_of_list_of_self = $shape['list_of_list_of_self']
        |> Vec\map(
          $$,
          $_val9 ==> $_val9
            |> Vec\map(
              $$,
              $_val10 ==> $_val10
                |> B::__fromShape($$),
            ),
        );
    }
    if (Shapes::idx($shape, 'list_of_map_of_string_to_list_of_A') !== null) {
      $me->list_of_map_of_string_to_list_of_A = $shape['list_of_map_of_string_to_list_of_A']
        |> Vec\map(
          $$,
          $_val11 ==> $_val11
            |> Dict\map(
              $$,
              $_val12 ==> $_val12
                |> Vec\map(
                  $$,
                  $_val13 ==> $_val13
                    |> A::__fromShape($$),
                ),
            ),
        );
    }
    return $me;
  }

  <<__Rx>>
  public function __toShape(): self::TShape {
    return shape(
      'map_of_string_to_string' => $this->map_of_string_to_string,
      'map_of_string_to_i32' => $this->map_of_string_to_i32,
      'map_of_string_to_A' => $this->map_of_string_to_A
        |> $$ === null 
          ? null 
          : Dict\map(
            $$,
            ($_val0) ==> $_val0->__toShape(),
          ),
      'map_of_string_to_self' => $this->map_of_string_to_self
        |> $$ === null 
          ? null 
          : Dict\map(
            $$,
            ($_val0) ==> $_val0->__toShape(),
          ),
      'map_of_string_to_list_of_A' => $this->map_of_string_to_list_of_A
        |> $$ === null 
          ? null 
          : Dict\map(
            $$,
            ($_val0) ==> $_val0
              |> Vec\map(
                $$,
                ($_val1) ==> $_val1->__toShape(),
              ),
          ),
      'map_of_string_to_map_of_string_to_i32' => $this->map_of_string_to_map_of_string_to_i32,
      'map_of_string_to_map_of_string_to_A' => $this->map_of_string_to_map_of_string_to_A
        |> $$ === null 
          ? null 
          : Dict\map(
            $$,
            ($_val0) ==> $_val0
              |> Dict\map(
                $$,
                ($_val1) ==> $_val1->__toShape(),
              ),
          ),
      'list_of_string' => $this->list_of_string,
      'list_of_map_of_string_to_A' => $this->list_of_map_of_string_to_A
        |> $$ === null 
          ? null 
          : Vec\map(
            $$,
            ($_val0) ==> $_val0
              |> Dict\map(
                $$,
                ($_val1) ==> $_val1->__toShape(),
              ),
          ),
      'list_of_self' => $this->list_of_self
        |> $$ === null 
          ? null 
          : Vec\map(
            $$,
            ($_val0) ==> $_val0->__toShape(),
          ),
      'list_of_list_of_self' => $this->list_of_list_of_self
        |> $$ === null 
          ? null 
          : Vec\map(
            $$,
            ($_val0) ==> $_val0
              |> Vec\map(
                $$,
                ($_val1) ==> $_val1->__toShape(),
              ),
          ),
      'list_of_map_of_string_to_list_of_A' => $this->list_of_map_of_string_to_list_of_A
        |> $$ === null 
          ? null 
          : Vec\map(
            $$,
            ($_val0) ==> $_val0
              |> Dict\map(
                $$,
                ($_val1) ==> $_val1
                  |> Vec\map(
                    $$,
                    ($_val2) ==> $_val2->__toShape(),
                  ),
              ),
          ),
    );
  }
}

