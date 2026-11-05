
void FUN_021610f0(undefined4 param_1)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = FUN_0203b3f4();
  iVar1 = FUN_02160d54(0x800002,0x800000,*(undefined4 *)(iVar1 + 0x88),0x57);
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x54) = 0x31305053;
  local_14 = 0x10000;
  local_10 = 0x84000;
  FUN_021511c8(iVar1,&local_10,&local_14);
  FUN_0214e688(param_1,iVar1);
  local_18 = 0x57000;
  FUN_0214e6c0(param_1,&local_18);
  return;
}

