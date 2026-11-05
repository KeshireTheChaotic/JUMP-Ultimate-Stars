
uint FUN_021cb830(int *param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = (uint)*(ushort *)(param_1 + 2);
  do {
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) {
      return 0xffffffff;
    }
  } while (*(ushort *)(*param_1 + uVar1 * param_1[1] + 0xc) != param_2);
  return uVar1;
}

