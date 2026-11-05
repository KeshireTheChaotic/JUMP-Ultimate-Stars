
uint FUN_020075e0(int param_1,uint param_2)

{
  uint uVar1;
  int iStack_18;
  uint uStack_14;
  undefined4 uStack_10;
  
  uStack_10 = 0;
  iStack_18 = param_1;
  uStack_14 = param_2;
  uVar1 = FUN_02006ec8(0x200759d,&iStack_18);
  if (-1 < (int)uVar1) {
    if (uVar1 < param_2) {
      *(undefined2 *)(param_1 + uVar1 * 2) = 0;
      return uVar1;
    }
    *(undefined2 *)(param_1 + param_2 * 2 + -2) = 0;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

