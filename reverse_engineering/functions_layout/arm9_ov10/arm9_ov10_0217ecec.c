
uint FUN_0217ecec(uint param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = 0;
  do {
    if (uVar3 == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = 1 << uVar3;
    }
    if ((((param_1 & uVar4) != 0) && (uVar1 = FUN_021766fc(), uVar3 != uVar1)) &&
       (iVar2 = FUN_0217ed34(uVar3,param_2,param_3), iVar2 == 0)) {
      param_1 = param_1 & ~uVar4;
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 0x20);
  return param_1;
}

