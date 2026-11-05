
bool FUN_0215b53c(int param_1)

{
  bool bVar1;
  
  *(short *)(param_1 + 0x110) = *(short *)(param_1 + 0x110) + -1;
  bVar1 = *(short *)(param_1 + 0x110) < 0;
  if (bVar1) {
    *(undefined2 *)(param_1 + 0x110) = 0;
  }
  return bVar1;
}

