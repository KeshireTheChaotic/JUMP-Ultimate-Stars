
dword FUN_02007670(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  dword dVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  
  uVar4 = param_4 & 0x7fffffff;
  uVar1 = param_2 & 0x7fffffff;
  if ((0x7ff00000 < ((-param_3 | param_3) >> 0x1f | uVar4)) ||
     (0x7ff00000 < ((param_1 | -param_1) >> 0x1f | uVar1))) {
    dVar2 = FUN_0200b3a0(param_3,param_4,param_1,param_2);
    return dVar2;
  }
  if (param_4 == 0x3ff00000 && param_3 == 0) {
    dVar2 = FUN_020094ac(param_1,param_2);
    return dVar2;
  }
  uVar5 = (int)param_2 >> 0x1f & 1U | (int)param_4 >> 0x1e & 2U;
  if ((param_1 == 0 && uVar1 == 0) && (uVar5 < 4)) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar5) {
    default:
      return param_1;
    case 2:
      return 0x54442d18;
    case 3:
      return 0x54442d18;
    }
  }
  if (param_3 == 0 && uVar4 == 0) {
    if ((int)param_2 < 0) {
      return 0x54442d18;
    }
    return 0x54442d18;
  }
  if (uVar4 == 0x7ff00000) {
    if (uVar1 == 0x7ff00000) {
      if (uVar5 < 4) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar5) {
        case 0:
          return 0x54442d18;
        case 1:
          return 0x54442d18;
        case 2:
          return 0x7f3321d2;
        case 3:
          return 0x7f3321d2;
        }
      }
    }
    else if (uVar5 < 4) {
                    /* WARNING: Switch is manually overridden */
      switch(uVar5) {
      case 0:
        return 0;
      case 1:
        return 0;
      case 2:
        return 0x54442d18;
      case 3:
        return 0x54442d18;
      }
    }
  }
  if (uVar1 == 0x7ff00000) {
    if ((int)param_2 < 0) {
      return 0x54442d18;
    }
    return 0x54442d18;
  }
  iVar3 = (int)(uVar1 - uVar4) >> 0x14;
  if (iVar3 < 0x3d) {
    if (((int)param_4 < 0) && (iVar3 < -0x3c)) {
      uVar6 = 0;
    }
    else {
      FUN_0200d534(param_1,param_2,param_3,param_4);
      FUN_02009910();
      uVar6 = FUN_020094ac();
    }
  }
  else {
    uVar6 = 0x3ff921fb54442d18;
  }
  uVar7 = (undefined4)((ulonglong)uVar6 >> 0x20);
  dVar2 = (dword)uVar6;
  if (uVar5 == 0) {
    return dVar2;
  }
  if (uVar5 == 1) {
    return dVar2;
  }
  if (uVar5 == 2) {
    uVar6 = FUN_0200bc6c(dVar2,uVar7,0x33145c07,0x3ca1a626,uVar6,param_4);
    dVar2 = FUN_0200bc6c(0x54442d18,0x400921fb,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    return dVar2;
  }
  uVar6 = FUN_0200bc6c(dVar2,uVar7,0x33145c07,0x3ca1a626,uVar6,param_4);
  dVar2 = FUN_0200bc6c((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x54442d18,0x400921fb);
  return dVar2;
}

