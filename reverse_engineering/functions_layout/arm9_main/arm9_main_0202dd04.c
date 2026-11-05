
void FUN_0202dd04(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_10;
  
  if ((DAT_020a0f14 & 1) == 0) {
    DAT_020a0ef8 = 0;
    DAT_020a0f14 = DAT_020a0f14 | 1;
  }
  local_10 = param_4;
  FUN_020383ec(&local_10,param_3);
  uVar1 = FUN_0200c954(local_10);
  uVar1 = FUN_0200c5ac(uVar1,0x45800000);
  FUN_0200c9e4(0x45800000,uVar1);
  DAT_020a0ef8 = FUN_0200c8e0();
  (**(code **)(*param_1 + 0x24))(param_1,param_2,&DAT_020a0ef8);
  return;
}

