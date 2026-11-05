
undefined4 FUN_021ce8b4(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0xffffffff;
  }
  if (2 < param_2) {
    return 0xffffffff;
  }
  DAT_021d66ac = OS_DisableInterrupts();
  iVar2 = param_2 * 4;
  if ((&DAT_021d66b0)[param_2] == 0) {
    (&DAT_021d66b0)[param_2] = param_1;
    *(undefined4 *)((&DAT_021d66b0)[param_2] + 4) = 0;
    *(undefined4 *)((&DAT_021d66b0)[param_2] + 8) = 0;
    *(undefined4 *)(&DAT_021d66c8 + iVar2) = (&DAT_021d66b0)[param_2];
  }
  else {
    iVar1 = *(int *)(&DAT_021d66c8 + iVar2);
    if (iVar1 != 0) {
      do {
        if (*(uint *)(iVar1 + 0x18) < *(uint *)(param_1 + 0x18)) {
          *(int *)(param_1 + 4) = iVar1;
          *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 8);
          *(int *)(iVar1 + 8) = param_1;
          if (*(int *)(param_1 + 8) != 0) {
            *(int *)(*(int *)(param_1 + 8) + 4) = param_1;
          }
          if (iVar1 == *(int *)(&DAT_021d66c8 + iVar2)) {
            *(int *)(&DAT_021d66c8 + iVar2) = param_1;
          }
          goto LAB_021ce93c;
        }
        iVar1 = *(int *)(iVar1 + 4);
      } while (iVar1 != 0);
    }
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = (&DAT_021d66b0)[param_2];
    *(int *)((&DAT_021d66b0)[param_2] + 4) = param_1;
    (&DAT_021d66b0)[param_2] = param_1;
  }
LAB_021ce93c:
  (&DAT_021d66bc)[param_2] = (&DAT_021d66bc)[param_2] + 1;
  OS_RestoreInterrupts(DAT_021d66ac);
  return (&DAT_021d66bc)[param_2];
}

