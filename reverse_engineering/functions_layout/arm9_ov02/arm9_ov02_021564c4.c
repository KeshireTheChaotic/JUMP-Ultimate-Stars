
void FUN_021564c4(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar2 + 0x26) == '\0') {
    iVar1 = FUN_0203b3e4();
    FUN_0214ecc0(*(undefined4 *)(iVar1 + 0x88),0,1);
  }
  else {
    iVar1 = FUN_0203b3f4();
    FUN_0214ecc0(*(undefined4 *)(iVar1 + 0x88),0,1);
  }
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar2 + 4) + 4),1);
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar2 + 8) + 4),1);
  return;
}

