
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ec698(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_1 + 2);
  iVar1 = FUN_027ec1ac(uVar3);
  uVar2 = OS_DisableIrqMask(0x1000000);
  if ((*(short *)(_DAT_0380fff4 + 0x350) == 1) && (*(short *)(iVar1 + 0x16) == 0)) {
    FUN_027ec0ec(uVar3);
  }
  *(short *)(iVar1 + 0x16) = *(short *)(iVar1 + 0x16) + 1;
  OS_EnableIrqMask(uVar2);
  if (((uint)*(ushort *)(_DAT_0380fff4 + 0x534) & 1 << (uVar3 & 0xff)) == 0) {
    *(undefined2 *)(iVar1 + 0x18) = *(undefined2 *)(iVar1 + 0x1a);
  }
  return;
}

