
uint FUN_03807f48(uint param_1)

{
  uint uVar1;
  uint uVar2;
  int extraout_r1;
  int iVar3;
  uint uVar4;
  
  param_1 = param_1 & 0x1fff;
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    for (uVar1 = 0; ((int)uVar1 < 0x10 && ((param_1 & 1 << (uVar1 & 0xff)) == 0)); uVar1 = uVar1 + 1
        ) {
    }
    for (uVar4 = 0xf; (uVar4 != 0 && ((param_1 & 1 << (uVar4 & 0xff)) == 0)); uVar4 = uVar4 - 1) {
    }
    if ((int)(uVar4 - uVar1) < 5) {
      uVar1 = 1 << (uVar1 & 0xff) & 0xffff;
    }
    else {
      uVar2 = FUN_038078c0(uVar4 + uVar1,2);
      for (iVar3 = 0; iVar3 < (int)(uVar4 - uVar1); iVar3 = iVar3 + 1) {
        FUN_038078c0(iVar3,2);
        uVar2 = iVar3 * (extraout_r1 * 2 + -1) + uVar2;
        if ((param_1 & 1 << (uVar2 & 0xff)) != 0) break;
      }
      if (((int)(uVar4 - uVar2) < 5) || ((int)(uVar2 - uVar1) < 5)) {
        uVar1 = (1 << (uVar1 & 0xff) | 1 << (uVar4 & 0xff)) & 0xffff;
      }
      else {
        uVar1 = (1 << (uVar4 & 0xff) | 1 << (uVar2 & 0xff) | 1 << (uVar1 & 0xff)) & 0xffff;
      }
    }
  }
  return uVar1;
}

