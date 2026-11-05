
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f3248(int *param_1)

{
  ushort uVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  
  iVar2 = _DAT_0380fff4;
  iVar8 = *param_1;
  *(undefined2 *)((int)param_1 + 0x12) = *(undefined2 *)(_DAT_0380fff4 + 0x3be);
  if ((*(ushort *)(param_1 + 3) & 0x800) != 0) {
    *(ushort *)((int)param_1 + 10) = *(ushort *)((int)param_1 + 10) | 1;
  }
  puVar6 = (ushort *)(param_1 + 3);
  for (uVar7 = (uint)*(ushort *)(param_1 + 2); 0 < (int)uVar7; uVar7 = uVar7 - (uVar5 + 2)) {
    iVar4 = FUN_027e93b0(iVar8);
    iVar9 = iVar8 + 2;
    uVar5 = FUN_027e93b0(iVar8 + 1);
    switch(iVar4) {
    case 0:
      if (uVar5 < 0x21) {
        *puVar6 = *puVar6 | 1;
        param_1[7] = iVar8;
        if ((uVar5 == 0) && ((*(ushort *)(param_1 + 3) & 0x800) != 0)) {
          *(ushort *)((int)param_1 + 10) = *(ushort *)((int)param_1 + 10) | 1;
        }
        else {
          *(ushort *)((int)param_1 + 10) = *(ushort *)((int)param_1 + 10) & 0xfffe;
          iVar8 = FUN_027e9d38(uVar5 & 0xffff,iVar9);
          if (iVar8 != 0) {
            *(ushort *)((int)param_1 + 10) = *(ushort *)((int)param_1 + 10) | 1;
          }
        }
      }
      break;
    case 1:
      if (uVar5 != 0) {
        *puVar6 = *puVar6 | 4;
        FUN_027e9c20(iVar8,param_1 + 5);
        uVar1 = *(ushort *)(iVar2 + 0x3a4);
        if (((*(ushort *)(param_1 + 5) & ~(uVar1 | *(ushort *)(iVar2 + 0x3a6))) == 0) &&
           (uVar1 == (uVar1 & (*(ushort *)(param_1 + 5) | *(ushort *)((int)param_1 + 0x16))))) {
          *(ushort *)((int)param_1 + 10) = *(ushort *)((int)param_1 + 10) | 4;
        }
        else {
          *(ushort *)((int)param_1 + 10) = *(ushort *)((int)param_1 + 10) & 0xfffb;
        }
      }
      break;
    case 2:
      break;
    case 3:
      if (uVar5 != 0) {
        *puVar6 = *puVar6 | 2;
        uVar3 = FUN_027e93b0(iVar9);
        *(undefined2 *)((int)param_1 + 0x12) = uVar3;
        if (*(short *)((int)param_1 + 0x12) == *(short *)(*(int *)(_DAT_0380fff4 + 0x41c) + 0x4a)) {
          *(ushort *)((int)param_1 + 10) = *(ushort *)((int)param_1 + 10) | 2;
        }
        else {
          *(ushort *)((int)param_1 + 10) = *(ushort *)((int)param_1 + 10) & 0xfffd;
        }
      }
      break;
    case 4:
      if (5 < uVar5) {
        *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x200;
        param_1[8] = iVar8;
      }
      break;
    case 5:
      if (2 < uVar5) {
        *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x100;
        param_1[9] = iVar8;
      }
      break;
    case 6:
      break;
    default:
      if (iVar4 == 0xdd) {
        if ((((uVar5 < 8) || (iVar4 = FUN_027e93b0(iVar9), iVar4 != 0)) ||
            (iVar4 = FUN_027e93b0(iVar8 + 3), iVar4 != 9)) ||
           ((iVar4 = FUN_027e93b0(iVar8 + 4), iVar4 != 0xbf ||
            (iVar4 = FUN_027e93b0(iVar8 + 5), iVar4 != 0)))) {
          *(short *)(param_1 + 6) = (short)param_1[6] + 1;
          *(short *)((int)param_1 + 0x1a) = *(short *)((int)param_1 + 0x1a) + (short)uVar5 + 2;
        }
        else {
          *(ushort *)(param_1 + 3) = *(ushort *)(param_1 + 3) | 0x400;
          param_1[10] = iVar8;
        }
      }
      else {
        *(short *)(param_1 + 6) = (short)param_1[6] + 1;
        *(short *)((int)param_1 + 0x1a) = *(short *)((int)param_1 + 0x1a) + (short)uVar5 + 2;
      }
    }
    iVar8 = iVar9 + uVar5;
  }
  if (((*(ushort *)(param_1 + 3) & 8) != 0) &&
     (((*(ushort *)(iVar2 + 0x3a8) & 1) != 0 || ((*(ushort *)(param_1 + 1) & 0x8000) != 0)))) {
    *(ushort *)((int)param_1 + 10) = *(ushort *)((int)param_1 + 10) | 8;
  }
  if ((*(ushort *)(param_1 + 3) & 0x30) != 0) {
    if ((*(ushort *)((int)param_1 + 6) & 3) == (*(ushort *)(iVar2 + 0x3c0) & 3)) {
      *(ushort *)((int)param_1 + 10) = *(ushort *)((int)param_1 + 10) | 0x10;
    }
    if ((*(ushort *)((int)param_1 + 6) & 0x10) == (*(ushort *)(iVar2 + 0x3c0) & 0x10)) {
      *(ushort *)((int)param_1 + 10) = *(ushort *)((int)param_1 + 10) | 0x20;
    }
  }
  return;
}

