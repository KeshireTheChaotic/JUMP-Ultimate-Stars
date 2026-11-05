
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f2288(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar1 = _DAT_0380fff4;
  iVar3 = _DAT_0380fff4 + 0x194;
  piVar2 = (int *)(_DAT_0380fff4 + 0x53c);
  FUN_027ec62c();
  if ((*(ushort *)(param_1 + 8) & 2) == 0) {
    *piVar2 = *piVar2 + 1;
    if ((*(ushort *)(param_1 + 0x14) & 0x1ff) >> 8 == 0) {
      if ((*(ushort *)(param_1 + 0x18) & 1) == 0) {
        *(int *)(iVar1 + 0x54c) = *(int *)(iVar1 + 0x54c) + 1;
      }
      else {
        *(int *)(iVar1 + 0x550) = *(int *)(iVar1 + 0x550) + 1;
      }
    }
    else if ((*(ushort *)(param_1 + 0x24) & 1) == 0) {
      *(int *)(iVar1 + 0x54c) = *(int *)(iVar1 + 0x54c) + 1;
    }
    else {
      *(int *)(iVar1 + 0x550) = *(int *)(iVar1 + 0x550) + 1;
    }
  }
  else {
    *(int *)(iVar1 + 0x540) = *(int *)(iVar1 + 0x540) + 1;
  }
  if ((*(ushort *)(param_1 + 0x14) & 0x7fff) >> 0xe != 0) {
    *(int *)(iVar1 + 0x554) = *(int *)(iVar1 + 0x554) + 1;
  }
  FUN_027efb30(iVar3,param_1 + -0x10);
  *(undefined2 *)(_DAT_0380fff4 + 0x42c) = 0;
  iVar3 = FUN_027ec27c(*(undefined2 *)(param_1 + 2));
  if ((iVar3 != 0) && ((*(ushort *)(param_1 + 0x14) & 0x2000) == 0)) {
    FUN_027ec4a4(*(undefined2 *)(param_1 + 2));
  }
  if (param_2 != 0) {
    if (*(short *)(iVar1 + 0x19c) == 0) {
      if (((((ushort)(*(short *)(iVar1 + 0x350) - 2U) < 2) && (*(short *)(iVar1 + 0x34c) == 0x40))
          && (*(short *)(iVar1 + 0x352) != 0)) &&
         ((iVar3 = FUN_027ec1c8(*(undefined2 *)(iVar1 + 0x3cc)), iVar3 == 0 &&
          (*(short *)(iVar1 + 0x3d2) == 0)))) {
        FUN_027ea4f0(1);
      }
    }
    else {
      FUN_027f258c(0);
    }
  }
  return;
}

