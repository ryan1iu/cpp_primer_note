# What's the difference between begin and cbegin functions?

1. begin()
   - Returns an `iterator` type
   - Can be used to both read and modify the elements in the non-const container.
2. cbegin()
   - Returns an `const_iterator` type
   - It only allows read-only access to the elements in the container.
