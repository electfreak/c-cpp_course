#pragma once

#include <cstddef>
#include <memory>

class TreeNode {
public:
  TreeNode() : left{ nullptr }, right{ nullptr } {};

  TreeNode(uint8_t byte) :
    left{ nullptr },
    right{ nullptr },
    byte{ byte },
    freq{ 0 }
  {};

  TreeNode(uint8_t byte, uint64_t freq) :
    freq{ freq },
    left{ nullptr },
    right{ nullptr },
    byte{ byte }
  {};

  TreeNode(TreeNode* left, TreeNode* right) :
    left{ left },
    right{ right },
    freq{ left->freq + right->freq }
  {};

  uint64_t freq;
  TreeNode* left, * right;
  uint8_t byte;
};