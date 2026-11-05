
void FUN_0206bd8c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  do {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(**(int **)(iVar3 + iVar1 + 0x20) + 0xe0) = 0;
  } while (iVar2 < 4);
  iVar2 = *(int *)(*(int *)(iVar3 + 0x30) + 4);
  *(byte *)(iVar2 + 0x14) = *(byte *)(iVar2 + 0x14) & 0xfe;
  FUN_0206bee8(iVar3);
  while ((iVar2 = (*(code *)(&PTR_FUN_0206bf34_1_0209decc)[**(int **)(iVar3 + 8)])(iVar3),
         iVar2 != 0 && (*(short *)(iVar3 + 0x70) == 0))) {
    *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 0xc;
  }
  *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 0xc;
  FUN_0206bf14(iVar3);
  return;
}

