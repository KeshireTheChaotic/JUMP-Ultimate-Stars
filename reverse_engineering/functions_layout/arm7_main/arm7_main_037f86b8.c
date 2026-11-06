
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_037f86b8(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = _DAT_0380fff4;
  OS_DisableIrqMask(0x1000010);
  param_1 = param_1 * 2;
  uVar3 = (uint)*(ushort *)(iVar2 + param_1);
  if (uVar3 != 0xffff) {
    iVar4 = iVar2 + 0xbc;
    *(undefined2 *)(iVar4 + uVar3 * 8 + 2) = 0;
    sVar1 = *(short *)(iVar4 + uVar3 * 8);
    if (sVar1 == -1) {
      *(undefined2 *)(iVar2 + param_1) = 0xffff;
      *(undefined2 *)(iVar2 + param_1 + 8) = 0xffff;
    }
    else {
      *(short *)(iVar2 + param_1) = sVar1;
      *(undefined2 *)(iVar4 + uVar3 * 8) = 0xffff;
    }
  }
  OS_EnableIrqMask();
  return uVar3;
}

