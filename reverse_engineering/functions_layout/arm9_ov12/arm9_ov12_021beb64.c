
undefined4 FUN_021beb64(int param_1,uint param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(FUN_021d01f4 + param_1 * 4);
  if (iVar2 != 0) {
    if (iVar2 == 1) {
      if ((param_2 < 0x2000000) || (0x23fe7ff < param_2)) {
        if ((param_2 < 0x37f8000) || (0x380efff < param_2)) {
          return 0;
        }
        if (param_2 + param_3 < 0x380f001) {
          return 1;
        }
        return 0;
      }
      uVar3 = param_2 + param_3;
      if ((param_2 < 0x2300000) && (0x2300000 < uVar3)) {
        return 0;
      }
      if (uVar3 < 0x2300001) {
        return 1;
      }
      if ((uVar3 < 0x23fe800) && (param_3 < 0x40001)) {
        return 1;
      }
      return 0;
    }
    if (iVar2 != 2) {
      return 0;
    }
  }
  uVar1 = FUN_021bec1c();
  return uVar1;
}

