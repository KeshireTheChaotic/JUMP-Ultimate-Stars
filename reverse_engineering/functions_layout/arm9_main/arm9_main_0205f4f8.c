
void FUN_0205f4f8(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,uint param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_6 < 0x21) {
    FUN_0205f494(param_1 + (param_6 * param_5 + param_4) * 2,param_2,param_3,param_6,param_7,param_8
                );
    return;
  }
  param_3 = param_5 + param_3;
  if (param_3 <= param_5) {
    return;
  }
  do {
    iVar1 = param_5;
    if (0x1f < param_5) {
      iVar1 = param_5 + 0x20;
    }
    for (iVar3 = param_4; iVar3 < param_4 + param_2; iVar3 = iVar3 + 1) {
      iVar2 = iVar3;
      if (0x1f < iVar3) {
        iVar2 = iVar3 + 0x3e0;
      }
      *(ushort *)(param_1 + iVar1 * 0x40 + iVar2 * 2) =
           (ushort)((param_8 & 0xf) << 0xc) | (ushort)param_7;
      param_7 = param_7 + 1;
    }
    param_5 = param_5 + 1;
  } while (param_5 < param_3);
  return;
}

