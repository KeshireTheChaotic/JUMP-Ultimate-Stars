
void FUN_02158a34(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0207342c(0x78,3,param_3,param_4,param_4);
  FUN_02023894(*(undefined4 *)(*(int *)(iVar1 + 0x2c) + 4),0xb00002,0);
  *(undefined1 *)(iVar1 + 0x9d) = 1;
  thunk_FUN_0205af08();
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar1 + 0x5c) + 4),1);
  func_0x021b7170(*(undefined4 *)(param_1 + 4));
  return;
}

