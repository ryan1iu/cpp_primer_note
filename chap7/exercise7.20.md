> 友元在什么时候有用，请分别列举出使用友元的利弊。

当非成员函数确实需要访问类的私有成员时，我们可以把它声明为该类的友元函数，此时，友元函数可以工作在类的内部，像类的成员一样访问类的所有数据和函数。但是一旦使用不慎（比如随意设定友元），就有可能破坏类的封装性。