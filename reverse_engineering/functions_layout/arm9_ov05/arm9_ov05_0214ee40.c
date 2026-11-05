
void FUN_0214ee40(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = func_0x021bad2c(*puVar2);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = func_0x021bad10(*puVar2);
  if (iVar1 == 0) {
    *(undefined1 *)((int)puVar2 + 0x42) = 1;
  }
  else if (iVar1 != 1) {
    if (iVar1 == 2) {
      FUN_0214fe9c(puVar2[5]);
      FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0214eeb8);
      return;
    }
    return;
  }
  FUN_0214eb4c(puVar2,0);
  return;
}

