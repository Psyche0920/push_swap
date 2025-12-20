#!/bin/bash

echo "=== 基础测试 ==="

echo "1. 测试空参数:"
./push_swap
echo "退出码: $?"

echo -e "\n2. 测试错误输入 (非数字):"
./push_swap 1 a 2 2>&1

echo -e "\n3. 测试重复数字:"
./push_swap 1 2 3 2 2>&1

echo -e "\n4. 测试已排序:"
./push_swap 1 2 3 4 5
echo "指令数: $(./push_swap 1 2 3 4 5 | wc -l)"

echo -e "\n5. 测试 2 个数字:"
echo "输入: 2 1"
./push_swap 2 1
ARG="2 1"
./push_swap $ARG | ./checker_OS $ARG 2>&1

echo -e "\n6. 测试 3 个数字:"
echo "输入: 2 1 3"
./push_swap 2 1 3
ARG="2 1 3"
./push_swap $ARG | ./checker_OS $ARG 2>&1
EOF
