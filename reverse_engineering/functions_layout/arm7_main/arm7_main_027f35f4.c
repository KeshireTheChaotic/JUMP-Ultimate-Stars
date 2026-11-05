
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f35f4(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *(undefined2 *)(param_1 + 2);
  sVar2 = *(short *)(_DAT_0380fff4 + 0x350);
  if (sVar2 == 1) {
    uVar3 = FUN_027ec2bc(uVar1);
    if (0x20 < uVar3) {
      FUN_027ec560(uVar1,0x20);
      FUN_027eceac(param_1 + 0x1e,*(undefined2 *)(param_1 + 0x2c));
      FUN_027f17f8(uVar1);
    }
  }
  else if ((((sVar2 == 2) || (sVar2 == 3)) && (0x20 < *(ushort *)(_DAT_0380fff4 + 0x34c))) &&
          (iVar4 = FUN_027e9cfc(param_1 + 0x1e,_DAT_0380fff4 + 0x3c6), iVar4 != 0)) {
    FUN_037f9468(0x20);
    FUN_027ea144();
    FUN_027eceac(param_1 + 0x1e,*(undefined2 *)(param_1 + 0x2c));
  }
  return;
}

