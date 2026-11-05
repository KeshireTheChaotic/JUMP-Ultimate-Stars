
void FUN_02007670(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar5;
  undefined4 uStack_30;
  uint uStack_2c;
  
  uVar3 = param_4 & 0x7fffffff;
  uVar1 = param_2 & 0x7fffffff;
  if ((0x7ff00000 < ((-param_3 | param_3) >> 0x1f | uVar3)) ||
     (0x7ff00000 < ((param_1 | -param_1) >> 0x1f | uVar1))) {
    FUN_0200b3a0(param_3,param_4,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x020076ba. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (param_4 == 0x3ff00000 && param_3 == 0) {
    FUN_020094ac(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x020076d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar4 = (int)param_2 >> 0x1f & 1U | (int)param_4 >> 0x1e & 2U;
  if (param_1 == 0 && uVar1 == 0) {
    switch(uVar4) {
    case 0:
    case 1:
                    /* WARNING: Could not recover jumptable at 0x02007712. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
      return;
    case 2:
                    /* WARNING: Could not recover jumptable at 0x02007720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(0x54442d18,0x400921fb);
      return;
    case 3:
                    /* WARNING: Could not recover jumptable at 0x0200772e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(0x54442d18,uRam020078e8);
      return;
    }
  }
  if (param_3 == 0 && uVar3 == 0) {
    if ((int)param_2 < 0) {
                    /* WARNING: Could not recover jumptable at 0x02007744. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(0x54442d18,0xbff921fb);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x02007750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0x54442d18,0x3ff921fb);
    return;
  }
  if (uVar3 == 0x7ff00000) {
    if (uVar1 == 0x7ff00000) {
      switch(uVar4) {
      case 0:
                    /* WARNING: Could not recover jumptable at 0x02007780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(0x54442d18,uRam020078f4);
        return;
      case 1:
                    /* WARNING: Could not recover jumptable at 0x0200778e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(0x54442d18,uRam020078f8);
        return;
      case 2:
                    /* WARNING: Could not recover jumptable at 0x0200779c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(uRam020078fc,uRam02007900);
        return;
      case 3:
                    /* WARNING: Could not recover jumptable at 0x020077aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(uRam020078fc,uRam02007904);
        return;
      }
    }
    else {
      switch(uVar4) {
      case 0:
                    /* WARNING: Could not recover jumptable at 0x020077d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(0,0);
        return;
      case 1:
                    /* WARNING: Could not recover jumptable at 0x020077de. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(0,0x80000000);
        return;
      case 2:
                    /* WARNING: Could not recover jumptable at 0x020077ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(0x54442d18,0x400921fb);
        return;
      case 3:
                    /* WARNING: Could not recover jumptable at 0x020077fa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(0x54442d18,uRam020078e8);
        return;
      }
    }
  }
  if (uVar1 == 0x7ff00000) {
    if ((int)param_2 < 0) {
                    /* WARNING: Could not recover jumptable at 0x02007812. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(0x54442d18,0xbff921fb);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x0200781e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(0x54442d18,0x3ff921fb);
    return;
  }
  iVar2 = (int)(uVar1 - uVar3) >> 0x14;
  if (iVar2 < 0x3d) {
    if (((int)param_4 < 0) && (iVar2 < -0x3c)) {
      uVar5 = 0;
    }
    else {
      FUN_0200d534(param_1,param_2,param_3,param_4);
      FUN_02009910();
      uVar5 = FUN_020094ac();
    }
  }
  else {
    uVar5 = 0x3ff921fb54442d18;
  }
  uStack_2c = (uint)((ulonglong)uVar5 >> 0x20);
  uStack_30 = (undefined4)uVar5;
  if (uVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x02007878. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uStack_30,uStack_2c);
    return;
  }
  if (uVar4 == 1) {
                    /* WARNING: Could not recover jumptable at 0x02007892. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uStack_30,uStack_2c ^ 0x80000000);
    return;
  }
  if (uVar4 == 2) {
    uVar5 = FUN_0200bc6c(uStack_30,uStack_2c,0x33145c07,0x3ca1a626);
    FUN_0200bc6c(0x54442d18,0x400921fb,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
                    /* WARNING: Could not recover jumptable at 0x020078b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar5 = FUN_0200bc6c(uStack_30,uStack_2c,0x33145c07,0x3ca1a626);
  FUN_0200bc6c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x54442d18,0x400921fb);
                    /* WARNING: Could not recover jumptable at 0x020078d2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}

