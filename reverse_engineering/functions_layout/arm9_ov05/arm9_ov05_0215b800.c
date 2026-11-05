
void FUN_0215b800(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x124);
  if (param_2 == 1) {
    FUN_0215b88c(puVar1,iVar2);
    iVar2 = func_0x021b712c(*(undefined4 *)(param_1 + 4));
    if (iVar2 == 0) {
      FUN_0207342c(0x78,3);
      return;
    }
    return;
  }
  if (param_2 == 4) {
    FUN_0215bacc(puVar1);
    FUN_0207342c(0x78,0);
    func_0x021b7170(*(undefined4 *)(param_1 + 4));
    FUN_02077508(*puVar1,*(undefined1 *)((int)puVar1 + 0x4dd),*(undefined1 *)((int)puVar1 + 0x4de),
                 iVar2 + 1);
    FUN_020797e4(puVar1[1]);
    return;
  }
  return;
}

