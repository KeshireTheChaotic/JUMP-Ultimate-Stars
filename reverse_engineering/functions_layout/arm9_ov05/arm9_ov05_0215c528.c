
void FUN_0215c528(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x124);
  if (param_2 == 1) {
    FUN_0215c4a8(iVar2,iVar1,iVar1,param_4,param_4);
    iVar1 = func_0x021b712c(*(undefined4 *)(param_1 + 4));
    if (iVar1 == 0) {
      FUN_0207342c(0x78,3);
      return;
    }
    return;
  }
  if (param_2 == 4) {
    *(bool *)(iVar2 + 0x4f0) = iVar1 == 0;
    func_0x021b7170(*(undefined4 *)(param_1 + 4));
    FUN_0215cb60(iVar2);
    FUN_0207342c(0x78,0);
    return;
  }
  return;
}

