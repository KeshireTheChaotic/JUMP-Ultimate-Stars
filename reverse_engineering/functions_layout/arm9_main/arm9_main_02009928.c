
undefined8 FUN_02009928(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  
  uVar1 = (int)param_2 >> 0x14 & 0x7ff;
  uVar2 = uVar1 - 0x3ff;
  if ((int)uVar2 < 0x14) {
    if ((int)uVar2 < 0) {
      FUN_0200b3a0(0x8800759c,0x7e37e43c,param_1,param_2,param_4);
      bVar4 = false;
      bVar3 = true;
      FUN_0200c26c();
      if (bVar4 && !bVar3) {
        if ((int)param_2 < 0) {
          if ((param_2 & 0x7fffffff) != 0 || param_1 != 0) {
            param_2 = 0xbff00000;
            param_1 = 0;
          }
        }
        else {
          param_1 = 0;
          param_2 = 0;
        }
      }
    }
    else {
      uVar1 = 0xfffff >> (uVar2 & 0xff);
      if ((param_2 & uVar1) == 0 && param_1 == 0) {
        return CONCAT44(param_2,param_1);
      }
      FUN_0200b3a0(0x8800759c,0x7e37e43c,param_1,param_2,param_4);
      bVar4 = false;
      bVar3 = true;
      FUN_0200c26c();
      if (bVar4 && !bVar3) {
        if ((int)param_2 < 0) {
          param_2 = param_2 + (0x100000 >> (uVar2 & 0xff));
        }
        param_2 = param_2 & ~uVar1;
        param_1 = 0;
      }
    }
  }
  else {
    if (0x33 < (int)uVar2) {
      if (uVar2 == 0x400) {
        uVar5 = FUN_0200b3a0(param_1,param_2,param_1,param_2,param_4);
        return uVar5;
      }
      return CONCAT44(param_2,param_1);
    }
    uVar1 = 0xffffffff >> (uVar1 - 0x413 & 0xff);
    if ((param_1 & uVar1) == 0) {
      return CONCAT44(param_2,param_1);
    }
    uVar6 = param_1;
    FUN_0200b3a0(0x8800759c,0x7e37e43c,param_1,param_2);
    bVar4 = false;
    bVar3 = true;
    FUN_0200c26c();
    if (bVar4 && !bVar3) {
      if ((int)param_2 < 0) {
        if (uVar2 == 0x14) {
          param_2 = param_2 + 1;
        }
        else {
          param_1 = param_1 + (1 << (0x34 - uVar2 & 0xff));
          if (param_1 < uVar6) {
            param_2 = param_2 + 1;
          }
        }
      }
      param_1 = param_1 & ~uVar1;
    }
  }
  return CONCAT44(param_2,param_1);
}

