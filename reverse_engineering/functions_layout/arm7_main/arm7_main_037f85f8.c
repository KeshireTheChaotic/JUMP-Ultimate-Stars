
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037f85f8(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = _DAT_0380fff4;
  iVar5 = _DAT_0380fff4 + 0xbc;
  OS_DisableIrqMask(0x1000010);
  iVar4 = iVar5 + param_2 * 8;
  if (*(short *)(iVar4 + 2) == 0) {
    *(undefined2 *)(iVar4 + 2) = 1;
    *(undefined2 *)(iVar5 + param_2 * 8) = 0xffff;
    uVar3 = (uint)*(ushort *)(iVar2 + param_1 * 2 + 8);
    uVar1 = (undefined2)param_2;
    if (uVar3 == 0xffff) {
      *(undefined2 *)(iVar2 + param_1 * 2) = uVar1;
    }
    else {
      *(undefined2 *)(iVar2 + uVar3 * 8 + 0xbc) = uVar1;
    }
    *(undefined2 *)(iVar2 + param_1 * 2 + 8) = uVar1;
    if (param_1 < (int)(uint)*(ushort *)(iVar2 + 0x10)) {
      *(short *)(iVar2 + 0x10) = (short)param_1;
    }
  }
  OS_EnableIrqMask();
  if ((param_1 != 3) && (*(short *)(iVar2 + 0x12) == 3)) {
    FUN_037fcc6c(*(undefined4 *)(_DAT_0380fff4 + 0x308),0,0);
  }
  return;
}

