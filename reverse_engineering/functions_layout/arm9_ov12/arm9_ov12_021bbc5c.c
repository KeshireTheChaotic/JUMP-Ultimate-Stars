
void FUN_021bbc5c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x124);
  if (param_2 == 1) {
    FUN_021bc06c(iVar1,uVar2);
    iVar1 = FUN_021b712c(*(undefined4 *)(param_1 + 4));
    if (iVar1 == 0) {
      FUN_0207342c(0x78,3);
      return;
    }
    return;
  }
  if (param_2 == 4) {
    *(undefined1 *)(iVar1 + 0xa6) = 1;
    *(char *)(iVar1 + 0xa0) = (char)uVar2;
    FUN_021b7170(*(undefined4 *)(param_1 + 4));
    FUN_0207342c(0x78,0);
    return;
  }
  return;
}

