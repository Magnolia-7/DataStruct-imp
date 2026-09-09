# DataStruct

使用 C++ 完成数据结构核心 60 个代码任务。目录和文件使用英文命名。

## 练习约定

- 每个 `.cpp` 是一个独立练习，包含自己的 `main()`。
- 当前只有入口和 TODO 注释，没有题目实现，所有任务均未完成。
- 由学习者独立实现，助手负责指导、检查和必要补充。
- 在每题的 `main()` 中添加正常情况和边界情况验证。
- 多个练习分别编译，不合并到同一个可执行程序。

## 学习阶段

- 1～50：必须完全手写。
- 51～58：重点理解并能够实现。
- 59～60：必须熟练。
- 完成后再补充进阶任务。

## 编译与运行

项目默认使用 C++17。安装 CMake 和 C++ 编译器后，在项目根目录运行：

```sh
cmake -S . -B build
cmake --build build --target task_01
./build/task_01
```

将 `task_01` 换成其他任务编号即可编译相应练习。也可以直接编译单个文件：

```sh
c++ -std=c++17 01_sequential_list/01_initialize.cpp -o /tmp/datastruct_task_01
/tmp/datastruct_task_01
```

当前运行占位程序没有输出，也不代表题目已完成。

## 进度

- [ ] 01. [initialize](01_sequential_list/01_initialize.cpp)
- [ ] 02. [get_length](01_sequential_list/02_get_length.cpp)
- [ ] 03. [find_by_position](01_sequential_list/03_find_by_position.cpp)
- [ ] 04. [find_by_value](01_sequential_list/04_find_by_value.cpp)
- [ ] 05. [insert](01_sequential_list/05_insert.cpp)
- [ ] 06. [delete](01_sequential_list/06_delete.cpp)
- [ ] 07. [initialize](02_singly_linked_list/07_initialize.cpp)
- [ ] 08. [find_by_position](02_singly_linked_list/08_find_by_position.cpp)
- [ ] 09. [find_by_value](02_singly_linked_list/09_find_by_value.cpp)
- [ ] 10. [insert](02_singly_linked_list/10_insert.cpp)
- [ ] 11. [delete](02_singly_linked_list/11_delete.cpp)
- [ ] 12. [build_by_head_insertion](02_singly_linked_list/12_build_by_head_insertion.cpp)
- [ ] 13. [build_by_tail_insertion](02_singly_linked_list/13_build_by_tail_insertion.cpp)
- [ ] 14. [traverse](02_singly_linked_list/14_traverse.cpp)
- [ ] 15. [initialize](03_doubly_linked_list/15_initialize.cpp)
- [ ] 16. [insert](03_doubly_linked_list/16_insert.cpp)
- [ ] 17. [delete](03_doubly_linked_list/17_delete.cpp)
- [ ] 18. [array_stack_initialize](04_stack/18_array_stack_initialize.cpp)
- [ ] 19. [array_stack_push](04_stack/19_array_stack_push.cpp)
- [ ] 20. [array_stack_pop](04_stack/20_array_stack_pop.cpp)
- [ ] 21. [array_stack_top](04_stack/21_array_stack_top.cpp)
- [ ] 22. [linked_stack_push](04_stack/22_linked_stack_push.cpp)
- [ ] 23. [linked_stack_pop](04_stack/23_linked_stack_pop.cpp)
- [ ] 24. [circular_queue_initialize](05_queue/24_circular_queue_initialize.cpp)
- [ ] 25. [circular_queue_is_empty](05_queue/25_circular_queue_is_empty.cpp)
- [ ] 26. [circular_queue_is_full](05_queue/26_circular_queue_is_full.cpp)
- [ ] 27. [circular_queue_enqueue](05_queue/27_circular_queue_enqueue.cpp)
- [ ] 28. [circular_queue_dequeue](05_queue/28_circular_queue_dequeue.cpp)
- [ ] 29. [linked_queue_enqueue](05_queue/29_linked_queue_enqueue.cpp)
- [ ] 30. [linked_queue_dequeue](05_queue/30_linked_queue_dequeue.cpp)
- [ ] 31. [bracket_matching](06_stack_applications/31_bracket_matching.cpp)
- [ ] 32. [infix_to_postfix](06_stack_applications/32_infix_to_postfix.cpp)
- [ ] 33. [postfix_evaluation](06_stack_applications/33_postfix_evaluation.cpp)
- [ ] 34. [brute_force_matching](07_string/34_brute_force_matching.cpp)
- [ ] 35. [kmp_next_array](07_string/35_kmp_next_array.cpp)
- [ ] 36. [kmp_matching](07_string/36_kmp_matching.cpp)
- [ ] 37. [node_definition](08_binary_tree/37_node_definition.cpp)
- [ ] 38. [create](08_binary_tree/38_create.cpp)
- [ ] 39. [preorder_recursive](08_binary_tree/39_preorder_recursive.cpp)
- [ ] 40. [inorder_recursive](08_binary_tree/40_inorder_recursive.cpp)
- [ ] 41. [postorder_recursive](08_binary_tree/41_postorder_recursive.cpp)
- [ ] 42. [preorder_iterative](08_binary_tree/42_preorder_iterative.cpp)
- [ ] 43. [inorder_iterative](08_binary_tree/43_inorder_iterative.cpp)
- [ ] 44. [level_order](08_binary_tree/44_level_order.cpp)
- [ ] 45. [get_height](08_binary_tree/45_get_height.cpp)
- [ ] 46. [count_leaves](08_binary_tree/46_count_leaves.cpp)
- [ ] 47. [adjacency_matrix](09_graph/47_adjacency_matrix.cpp)
- [ ] 48. [adjacency_list](09_graph/48_adjacency_list.cpp)
- [ ] 49. [depth_first_search](09_graph/49_depth_first_search.cpp)
- [ ] 50. [breadth_first_search](09_graph/50_breadth_first_search.cpp)
- [ ] 51. [prim](10_graph_algorithms/51_prim.cpp)
- [ ] 52. [kruskal](10_graph_algorithms/52_kruskal.cpp)
- [ ] 53. [dijkstra](10_graph_algorithms/53_dijkstra.cpp)
- [ ] 54. [floyd](10_graph_algorithms/54_floyd.cpp)
- [ ] 55. [topological_sort](10_graph_algorithms/55_topological_sort.cpp)
- [ ] 56. [sequential_search](11_search/56_sequential_search.cpp)
- [ ] 57. [binary_search](11_search/57_binary_search.cpp)
- [ ] 58. [bst_search_and_insert](11_search/58_bst_search_and_insert.cpp)
- [ ] 59. [quick_sort](12_sort/59_quick_sort.cpp)
- [ ] 60. [merge_sort](12_sort/60_merge_sort.cpp)
