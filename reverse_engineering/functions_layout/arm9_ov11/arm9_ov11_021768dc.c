
void FUN_021768dc(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_02183a38 + 8);
  while (iVar1 != 0) {
    FUN_02037c24(DAT_02183a38 + 8,iVar1);
    FUN_020517fc(iVar1,0,0x1c);
    FUN_02037b98(DAT_02183a38 + 0x30,iVar1);
    iVar1 = *(int *)(DAT_02183a38 + 8);
  }
  return;
}

