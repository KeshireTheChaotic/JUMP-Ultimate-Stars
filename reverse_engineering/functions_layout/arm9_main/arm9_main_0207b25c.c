
void FUN_0207b25c(int param_1,undefined2 param_2)

{
  if (param_1 == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x18) & 0x20) != 0) {
    *(undefined2 *)(param_1 + 0xc) = param_2;
  }
  return;
}

