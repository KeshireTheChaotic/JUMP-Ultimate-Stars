
void FUN_021ce6a8(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_021d6698;
  while (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 8);
    FUN_021cf870(iVar2);
    iVar2 = iVar3;
  }
  iVar2 = 0;
  puVar1 = &DAT_021d66a0;
  do {
    *puVar1 = 0;
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}

