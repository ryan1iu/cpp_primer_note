> 什么是类的静态成员，它有何优点？静态成员与普通成员有何区别？

静态成员是指声明语句之前带有关键字static的类成员，静态成员不是任意单独对象的组成部分，而是由该类的全体对象所共享。

静态成员的有点包括：作用域位于类的范围之内，避免与其他类的成员或者非全局作用域的名字冲突；可以是私有成员，而全局对象不可以；通过阅读程序可以非常容易看出静态成员与特定类相关联，使得程序的含义清晰明了。

静态成员与普通成员的区别主要体现在普通成员与类的对象关联，是某个具体对象的组成部分；而静态成员不从属于任何具体的对象，它由该类的所有对象共享。另外，还有一个细微的区别，静态成员可以作为默认实参，而普通成员不能作为默认实参。