
undefined4 FUN_02161dac(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((param_1 == 0 || param_2 == 0) || (param_3 < 1)) || (0x8000 < param_3)) ||
     (iVar1 = FUN_02161e50(), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0201a418(DAT_020a0dd8,0,0xa000);
    FUN_02160194(uVar2,FUN_02161e80,2);
    FUN_0215ff3c(0x80000472,FUN_02161ed4,param_1,param_3,param_2,param_3,s_COMMON_0216a6f8,param_4);
    FUN_02160114();
    uVar2 = 1;
  }
  return uVar2;
}

