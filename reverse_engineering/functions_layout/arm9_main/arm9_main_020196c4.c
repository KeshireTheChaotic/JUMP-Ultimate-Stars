
void FUN_020196c4(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  piVar3 = *(int **)(param_1 + param_3 * 4 + 0xc);
  if (param_2 == piVar3) {
    return;
  }
  uVar4 = 0;
  if ((piVar3 == DAT_020a1054) && (param_2 != (int *)0x0)) {
    uVar4 = (*(uint *)(param_1 + 8) & 0xfffffff) >> 0x19;
    if ((*(uint *)(param_1 + 8) & 0xfffffff) >> 0x19 <= param_3 + 1) {
      uVar4 = param_3 + 1;
    }
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xf1ffffff | (uVar4 & 7) << 0x19;
  }
  else if (piVar3 != DAT_020a1054) {
    piVar3 = param_2;
    if (param_2 == (int *)0x0) {
      piVar3 = (int *)(param_3 + 1);
      uVar4 = *(int *)(param_1 + 8) << 4;
    }
    if (param_2 == (int *)0x0 && piVar3 == (int *)(uVar4 >> 0x1d)) {
      uVar4 = param_3;
      do {
        uVar2 = uVar4 - 1;
        uVar5 = 0;
        if ((int)uVar2 < 0) break;
        uVar5 = uVar4;
        uVar4 = uVar2;
      } while (*(int **)(param_1 + uVar2 * 4 + 0xc) == DAT_020a1054);
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xf1ffffff | (uVar5 & 7) << 0x19;
    }
  }
  if (param_2 == (int *)0x0) {
    (**(code **)(**(int **)(param_1 + param_3 * 4 + 0xc) + 0xc))();
    *(int **)(param_1 + param_3 * 4 + 0xc) = DAT_020a1054;
    return;
  }
  (**(code **)(*param_2 + 8))();
  (**(code **)(**(int **)(param_1 + param_3 * 4 + 0xc) + 0xc))();
  *(int **)(param_1 + param_3 * 4 + 0xc) = param_2;
  param_1 = param_1 + 0x1c;
  iVar1 = param_3 * 2;
  *(ushort *)(param_1 + iVar1) =
       *(ushort *)(param_1 + iVar1) & 0xff3f | (*(byte *)((int)param_2 + 0x29) & 3) << 6;
  *(ushort *)(param_1 + iVar1) =
       *(ushort *)(param_1 + iVar1) & 0xfcff | (*(byte *)((int)param_2 + 0x2a) & 3) << 8;
  return;
}

