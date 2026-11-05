
int FUN_02079cbc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_c = param_4;
  FUN_020329ec();
  iVar1 = FUN_02011b38();
  FUN_0206c514(iVar1,param_2);
  local_10 = 0x1f000;
  FUN_0206c4d4(iVar1,&local_10);
  local_18 = 0;
  local_14 = 0;
  FUN_0206c9f8(iVar1,&local_14,&local_18);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),0);
  FUN_020282f4(*(undefined4 *)(iVar1 + 4));
  return iVar1;
}

