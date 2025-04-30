> 构成迭代器范围的迭代器有何限制

- Must belong to the same container.
- [first, last),Must form a valid Half-Open range.
- Reachability and Dereferenceability:All iterators from first to last must be accessible and dereferenceable.
- first must not come after last; ranges must not be reversed unless using bidirectional iterators explicitly.
- Type compatibility: The iterators must be type-compatible,typically being of the same type or both from the same container.
