
void FUN_020865d8(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if (*(int *)(iVar1 + 4) != 0) {
    FUN_0201b268();
  }
  FUN_0201b244(iVar1);
  return;
}

