
undefined4 FUN_02195724(undefined1 *param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      uVar2 = (uint)CONCAT11(*param_1,param_1[1]);
      if (param_3 == 3) {
        uVar2 = (uint)CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]);
      }
      if (uVar2 == param_4) {
        return 1;
      }
      param_1 = param_1 + param_3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return 0;
}

