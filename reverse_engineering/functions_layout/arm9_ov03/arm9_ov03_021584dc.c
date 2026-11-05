
void FUN_021584dc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  iVar1 = FUN_0203b3f4();
  uVar2 = FUN_0214d4a4(*(undefined4 *)(iVar1 + 0x88),0x851000,0xc,0x60);
  local_18 = 0x10000;
  local_14 = 0x74000;
  FUN_0214e990(uVar2,&local_14,&local_18);
  local_1c = 0xd9000;
  FUN_0214d52c(uVar2,&local_1c);
  FUN_0214e908(param_1,uVar2);
  local_20 = 0x60000;
  FUN_0214d52c(param_1,&local_20);
  (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),1);
  local_28 = 0x100000;
  local_24 = 0x180000;
  FUN_0214e990(param_1,&local_24,&local_28);
  return;
}

