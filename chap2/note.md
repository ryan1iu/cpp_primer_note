# chap2 变量和基本数据类型

## 数据类型

数据类型是程序的基础，它告诉我们数据的意义以及我们能够在数据上执行的操作

基本数据类型：

- 算数类型
  - 字符
  - 整型
  - 布尔值
  - 浮点数
- 空类型（void)

最佳实践：日常使用int，int 不够用long long，浮点用double,float和double运算效率没有差别

类型转换：
类型所能表示的值的范围决定了转换的过程
切勿混用带符号类型和无符号类型，如果表达式了里既有带符号类型又有无符号类型，带符号数会自动转换为无符号数

字面值常量：
每一个字面值常量都对应一种数据类型，字面值常量的形式和值决定了他的数据类型
默认浮点型字面值是一个double

## 变量

变量：变量对应一个具名的、可供程序操作的存储空间。数据类型决定变量的所占内存空间的大小和布局方式、该空间能存储的值的范围、变量能参与的运算

对C++程序员来说，变量和对象可以混用

### 初始化

变量的初始化：变量在创建时获得了一个特定的值，我们说这个对象被初始化了
在C++中，初始化和赋值是两个完全不同的操作

C++中初始化有很多方式：

```cpp
int i = 0;
int i = {0};
int i{0};
int i(0);
```

用花括号初始化被称为列表初始化（C++11),有一个特点：如果使用列表初始化且初始值存在丢失信息的风险，则编译器将报错

`默认初始化`：由变量的类型和变量定义的位置决定
类型：内置类型、自定义对象
位置：函数体内部、函数体外部
内置类型函数体外部：初始化为0
内置类型函数体内部：不被初始化、未定义
自定义对象如果没有显示初始化，其值由类自己决定

### 声明和定义

声明：基本数据类型 + 声明符
为了支持分离式编译，c++将声明和定义分开来，声明使得名字为程序所知，定义负责创建与名字关联的实体

变量只能被定义一次，但是可以被多次声明

如果要在多个文件中使用同一个变量，就必须将声明和定义分离

### 作用域

同一个名字在不同的作用域中可能指向不同的实体，名字的有效区域始于名字的声明语句，以声明语句所在的作用域末端作为结束

在对象第一次被使用的地方附近定义它是一种好的选择

## 复合类型其二{引用、指针}

理解声明符的概念，一般情况下，变量名就是声明符，但这不代表声明符就是变量名，还有更复杂的声明符，它基于基本数据类型得到更复杂的类型，并把它指定给变量

### 引用

引用的声明符：
&变量名

引用不是对象，不能定义引用的引用

除了两种例外情况，其中一种马上会提到，引用的类型要和绑定的对象严格匹配
引用只能绑定在对象上，不能与字面值或某个表达式的计算结果绑定在一起

### 指针

声明符：\*变量名
指针是对象
除了两种例外情况，其中一种很快会看到，指针的类型要和它所指向的对象严格匹配

指针只能处于以下一种状态：

- 指向一个对象
- 指向紧邻对象所占空间的下一个位置
- 空指针，意味着没有指向任何对象
- 无效指针，上述情况之外的其他值

指向紧邻对象所占空间的下一个位置的解释：
尾后指针 野指针（Dangling Pointer）
合法状态，允许存在但不能解引用。 非法状态，指向已释放或无效的内存。
用于边界判断和迭代。 任何操作（包括比较）都是未定义行为。
合法但受限：尾后指针是 C++ 中一种特殊的设计，用于标记范围的终点，但只能用于比较，不能访问或移动超出它。
安全准则：始终确保指针在解引用或算术运算时指向有效对象，避免未定义行为。

`关键概念`:&和\*用于组成复合类型，在表达式中它们的角色又转变为运算符，在不同场景中出现的虽然是同一个符号，但是由于含义截然不同，所以
我们完全可以把它当作不同的符号来看待

#### void\*

void\*能做的事情比较有限

- 拿它和别的指针比较
- 作为函数的输入输出
- 赋值给另一个void \*指针

不能直接操作void \*所指向的对象

#### 指向指针的引用

变量的定义：基本数据类型 + 一组声明符
在同一条定义语句中，虽然基本的数据类型只有一个，但是声明符的形式可以不同

```cpp
int i = 1024, *p = &i, &r = i;
```

类型修饰符(\* &)只不过是声明符的一部分罢了

面对一条比较复杂的指针或引用的声明语句时，从右向左阅读有助于弄清楚它的真实含义
离变量名最近的符号对变量的类型有最直接的影响，声明符的其他部分用以确定
例如 `int *p; int *&r = p;`
离r最近的是&，因此r是一个引用，&左边的\*说明r引用的是一个指针，最后声明的基本数据类型部分指出r引用的是一个int指针

## const限定符

const限制对象的写操作

默认情况下，const对象仅在文件内有效

如果想在多个文件之间共享const对象，必须在变量的定义之前添加extern关键字

### const的引用

对常量的引用：
常量引用可以引用一个并非const的对象，常量引用仅对引用可参与的操作做出了限制，对与引用的对象本身是不是一个常量并未限定

常量引用的初始化：
之前提到过，引用的类型必须与其所引用的对象的类型一致，但有两个例外，这里就是第一个：`初始化常量引用时允许用任意表达式作为初始值，只要该表达式的结果能转换成引用（可能涉及
隐式类型转换）的类型即可`，尤其，允许为一个常量引用绑定非常量的对象、字面值、甚至时一般表达式

本质或者说这背后发生了什么：是因为c++会创建一个`临时对象`，这个临时对象的类型与常量引用的类型相同，然后让常量引用指向这个临时对象

### 指针和const

和常量引用一样，指向常量的指针也没有规定其所指向的对象必须是一个常量
所谓指向常量的指针和引用，不过是指针和引用自己为是地觉得自己指向了一个常量，从而自觉地不去修改所指对象的值

常量指针：指针跟引用不一样，指针本身是一个对象，所以也可以被定义成常量，这样就不能改变指向了

### top-level const & low-level const

之所以要区分这两个不同的const，是用来判断赋值操作是否合法的
具体的说，作用于普通变量的的const都可以视作top-level const，而只有指针和引用才会涉及到low-level const
top-level const其实就是说这个变量本身不能被修改，而low-level const则是说这个变量指向的变量不能被修改

引用只有low-level const，没有top-level const

对于赋值操作来说，top-level const对赋值操作没什么影响，因为赋值操作并不会改变被拷贝对象的值，所以拷入和拷出的对象是否是常量没什么影响

但是low-level const就不一样了，`const int *p = &i;` p是一个low-level const,假如执行 `int *q = p;`就会报错，因为q可能会修改p所指向的对象，这是不被允许的

### constexpr 和常量表达式

常量表达式是指值不会改变并且在`编译过程`就能得到结果的表达式
在一个复杂系统中，很难分辨一个表达式是不是常量表达式，因此c++11提供了constexpr
由编译器来验证变量的值是否是一个常量表达式，声明为constexpr的变量一定是一个常量，而且必须用常量表达式初始化

尽管不能用普通的函数作为constexpr的变量的初始值，但是新标准允许定义constexpr函数，这种函数应该足够简单到可以在编译时就确定其值

我们把constexpr初始化所用到的类型称为`字面值类型`
算术类型、引用和指针都属于字面值类型

注意：如果在constexpr声明中定义了一个指针，限定符constexpr仅对指针有效，对指针所指的对象无效，换句话说，constexpr赋予指针的时top-level const

## 处理类型

### 指针和typedef

看个例子就懂了：

```cpp
typedef char *pstring;
const pstirng cstr = 0;
const pstring *ps;
```

和变量声明语句一样，这里的声明符也可以包含类型修饰。

需要注意的是，把编译器对typedef的处理理解为直接别名替换是错误的。

例如上面的例子中，第二行，const 作用于cstr，说明cstr是一个常量，然后cstr是一个指向char的指针，所以cstr是一个指向char的常量指针。
如果视作直接替换的话：const char \*cstr = 0；cstr就成了指向const char的指针,完全不一样

### auto类型说明符

编译器自己通过初始值来推断变量类型

#### auto与const

auto 一般会忽略掉top const，保留low const
具体来说

```
const int i = 0;
auto j = i; // j是int
const int *k = &i;
auto l = k; // l是const int *
```

如果希望auto保留top const，需要显示指出
const auto j = i;

`但是`，如果是设置一个类型为auto 的引用，初始值中的top const仍然会保留，
举个例子：

```c++
const int mm  = 0;
auto &kk = mm;
kk = 1; // 错误，kk 是 const int
```

`此外`：要在一条语句中定义多个变量，切记&与\*只属于某个声明符，因此初始值必须是同一种类型

### decltype类型指示符

为了解决一下情况：希望从表达式的类型推断出要定义的变量的类型，但是不想用该表达式初始化变量

两个例子：

1. decltype(fun()) sum = 1;
   编译器不会实际调用fun，而是根据fun的返回值类型
2. const in ci = 0, &cj = ci; decltype(cj) y = x;
   y的类型是const int &，`需要注意`，decltype处理top const与auto不同，如果decltype使用的表达式是一个变量，会返回该
   变量的类型，包括top const和引用

#### decltype和引用

简单的说，如果decltype使用的表达式不是变量，返回表达式结果对应的类型，有一种情况需要特别注意：
`如果表达式的结果对象能够作为一条赋值语句的左值，那么会返回一个引用类型`
举个例子：
int i = 1, * p = &i;
decltype(*p) 是int &, 因为\*p是一个左值

再比如：
`decltype使用的变量加不加括号对结果也有影响`，如果decltype使用的是不加括号的变量，得到的就是该变量的类型，但是如果加了括号，编译器就会把它当作是一个表达式，因为变量是一种可以作为左值的特殊表达式
decltype((i)) 是 int &
