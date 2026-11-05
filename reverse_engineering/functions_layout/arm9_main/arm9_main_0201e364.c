
undefined4 FUN_0201e364(int param_1,ushort param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  
  iVar4 = 0;
  while( true ) {
    if ((int)(uint)*(ushort *)(param_1 + 0x52) <= iVar4) {
      return 0;
    }
    iVar3 = *(int *)(param_1 + 0x4c) + iVar4 * 0x10;
    puVar5 = *(ushort **)(iVar3 + 0xc);
    pcVar2 = *(code **)(**(int **)(iVar3 + 4) + 0x68);
    uVar1 = (*pcVar2)(*(int **)(iVar3 + 4),*(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar4 * 0x10),
                      pcVar2,iVar3,param_4);
    iVar3 = (uVar1 >> 1) + 1;
    for (; param_2 < *puVar5; puVar5 = puVar5 + -iVar3) {
    }
    for (; puVar5[iVar3] <= param_2; puVar5 = puVar5 + iVar3) {
    }
    if (*puVar5 == param_2) break;
    iVar4 = iVar4 + 1;
  }
  return 1;
}

