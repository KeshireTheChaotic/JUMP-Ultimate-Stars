
undefined4 FUN_0216cd9c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uStack_20;
  
  piVar2 = *(int **)(param_2 + 4);
  if ((*(ushort *)(param_1 + 0x26) & 1) != 0) {
    if (4 < *(byte *)(param_2 + 0x23)) {
      return 0;
    }
    uVar3 = 0;
    *(byte *)(param_2 + 0x23) = *(byte *)(param_2 + 0x23) + 1;
    do {
      if ((*(byte *)((int)piVar2 + 6) & 1) != 0) {
        uStack_20 = *(undefined4 *)(&DAT_02172a48 + (uint)*(byte *)(param_2 + 0x23) * 4);
        FUN_02023700(*(undefined4 *)(*(int *)(*piVar2 + 8) + 4),&uStack_20);
        iVar1 = *(int *)(*(int *)(*piVar2 + 0x10) + 0x5c);
        *(undefined2 *)(iVar1 + 0x24) = 0;
        *(undefined2 *)(iVar1 + 0x26) = 0;
      }
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (uVar3 < 0x20);
  }
  return 1;
}

