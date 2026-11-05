
bool FUN_021a117c(int param_1)

{
  if (*(char *)(param_1 + 1) == '\0') {
    return false;
  }
  if ((int)*(uint *)(param_1 + 0x28) < 0) {
    return true;
  }
  return (*(uint *)(param_1 + 0x28) & 0x7fff) == *(uint *)(param_1 + 0x18);
}

