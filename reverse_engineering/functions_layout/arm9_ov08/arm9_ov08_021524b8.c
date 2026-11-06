
undefined4 FUN_021524b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_02004b18(&DAT_0216d348,&DAT_0216d530,param_3,param_4,1);
  if (DAT_0216d55c < 4) {
    uVar1 = (*(code *)((int)&switchD_021524de::switchdataD_021524e0 +
                      (int)(short)(&switchD_021524de::switchdataD_021524e0)[DAT_0216d55c]))();
    return uVar1;
  }
  return 0xfffffff9;
}

