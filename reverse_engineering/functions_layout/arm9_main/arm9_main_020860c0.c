
void FUN_020860c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  for (iVar2 = 0; iVar2 < (int)(uint)*(byte *)(iVar1 + 0x10); iVar2 = iVar2 + 1) {
    FUN_020865fc(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(*(int *)(iVar1 + 8) + iVar2 * 4));
  }
  return;
}

