
void FUN_02157148(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 != 0) {
    if (*(int *)(*(int *)(iVar2 + 0x70) + 0x30) != 0) {
      FUN_02028384(*(undefined4 *)(param_1 + 4),0x215717d);
      return;
    }
    FUN_02028384(*(undefined4 *)(param_1 + 4),0x21571b5);
  }
  return;
}

