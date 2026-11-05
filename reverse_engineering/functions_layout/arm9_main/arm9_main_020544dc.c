
void FUN_020544dc(int param_1,int param_2,int param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  OS_DisableInterrupts();
  puVar1 = (undefined4 *)(param_3 + 0x1fU & 0xffffffe0);
  if (param_2 < 0) {
    param_2 = **(int **)(&DAT_020aadd4 + param_1 * 4);
  }
  param_2 = param_2 * 0xc;
  iVar2 = (*(int **)(&DAT_020aadd4 + param_1 * 4))[4];
  *(uint *)(iVar2 + param_2) = (param_4 & 0xffffffe0) - (int)puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = *(undefined4 *)(iVar2 + param_2);
  *(undefined4 **)(iVar2 + param_2 + 4) = puVar1;
  *(undefined4 *)(iVar2 + param_2 + 8) = 0;
  OS_RestoreInterrupts();
  return;
}

