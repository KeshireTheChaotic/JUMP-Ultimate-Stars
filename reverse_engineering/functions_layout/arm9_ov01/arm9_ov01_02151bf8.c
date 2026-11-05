
void FUN_02151bf8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = FUN_0203b3e4();
  uVar2 = FUN_0214fba8(*(undefined4 *)(iVar1 + 0x88),0x871000,1,0x20);
  local_14 = 0x7000;
  local_10 = 0x6e000;
  FUN_021511c8(uVar2,&local_10,&local_14);
  FUN_0214e688(param_1,uVar2);
  local_18 = 0x7a000;
  FUN_0214e6c0(param_1,&local_18);
  (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),1);
  local_20 = 0x100000;
  local_1c = 0x180000;
  FUN_021511c8(param_1,&local_1c,&local_20);
  return;
}

