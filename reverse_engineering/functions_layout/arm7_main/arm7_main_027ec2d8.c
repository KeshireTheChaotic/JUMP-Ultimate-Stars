
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ec2d8(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = _DAT_0380fff4;
  FUN_027ec040();
  uVar2 = FUN_027ec1e4(param_1);
  if (uVar2 != 0) {
    iVar3 = FUN_027ec1ac(param_1);
    *(undefined2 *)(iVar3 + 2) = 0;
    *(ushort *)(iVar1 + 0x53a) = *(ushort *)(iVar1 + 0x53a) & ~(ushort)(1 << (uVar2 & 0xff));
    *(short *)(iVar1 + 0x538) = *(short *)(iVar1 + 0x538) + -1;
    if (*(short *)(iVar1 + 0x538) == 0) {
      FUN_027ea318();
    }
  }
  return;
}

