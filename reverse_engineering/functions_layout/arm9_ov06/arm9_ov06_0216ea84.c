
/* WARNING: Removing unreachable block (ram,0x0216eb08) */
/* WARNING: Removing unreachable block (ram,0x0216eb0c) */

undefined4 FUN_0216ea84(int param_1,int param_2,short *param_3,int param_4)

{
  short sVar1;
  bool bVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = *(uint *)(*(int *)(param_1 + 0x10) + 0x78);
  uVar5 = uVar4 & 4;
  if (uVar5 == 0 && (uVar4 & 8) == 0) {
    *(ushort *)(param_2 + 0x26) = *(ushort *)(param_2 + 0x26) & 0xfffb;
    return 0;
  }
  if (((*(uint *)(*(int *)(param_2 + 8) + 8) & 0x800) != 0) &&
     ((*(ushort *)(param_2 + 0x26) & 4) == 0)) {
    sVar1 = *param_3;
    if ((uVar5 == 0) || (sVar1 < 1)) {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if (!bVar2) {
      return 1;
    }
    if (0 < sVar1) {
      uVar5 = 1;
    }
    *param_3 = -*param_3;
    if (sVar1 < 1) {
      uVar5 = 0;
    }
    if ((*(uint *)(*(int *)(param_2 + 8) + 8) & 0x10) == 0) {
      FUN_02083950(param_1,uVar5);
    }
    if (param_4 != 0) {
      piVar3 = *(int **)(*(int *)(param_4 + 4) + 100);
      (**(code **)(*piVar3 + 0x5c))(piVar3,uVar5);
    }
    *(ushort *)(param_2 + 0x26) = *(ushort *)(param_2 + 0x26) | 4;
  }
  return 1;
}

