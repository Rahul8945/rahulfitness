from typing import Any

def ordering_list(attr, count_from: Any | None = ..., **kw): ...

class OrderingList(list[Any]):
    ordering_attr: Any
    ordering_func: Any
    reorder_on_append: Any
    def __init__(
        self, ordering_attr: Any | None = ..., ordering_func: Any | None = ..., reorder_on_append: bool = ...
    ) -> None: ...
    def reorder(self) -> None: ...
    def append(self, entity) -> None: ...
    def insert(self, index, entity) -> None: ...
    def remove(self, entity) -> None: ...
    def pop(self, index: int = ...): ...  # type: ignore[override]
    def __setitem__(self, index, entity) -> None: ...
    def __delitem__(self, index) -> None: ...
    def __setslice__(self, start, end, values) -> None: ...
    def __delslice__(self, start, end) -> None: ...
    def __reduce__(self): ...
