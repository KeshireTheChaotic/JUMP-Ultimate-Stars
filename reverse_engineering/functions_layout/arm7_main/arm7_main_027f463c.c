
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f463c(int param_1)

{
  undefined2 uVar1;
  short sVar2;
  int iVar3;
  
  uVar1 = *(undefined2 *)(param_1 + 2);
  sVar2 = *(short *)(_DAT_0380fff4 + 0x350);
  if (sVar2 == 1) {
    iVar3 = FUN_027ec2bc(uVar1);
    if (iVar3 == 0x40) {
      FUN_027ec560(uVar1,0x30);
      FUN_027ecc44(param_1 + 0x1e,*(undefined2 *)(param_1 + 0x2c));
      FUN_027f17f8(uVar1);
    }
    else {
      if (iVar3 == 0x30) {
        iVar3 = FUN_027f0f2c(param_1 + 0x1e,7);
      }
      else {
        iVar3 = FUN_027f084c(param_1 + 0x1e,7);
      }
      if (iVar3 != 0) {
        FUN_027f15ac();
      }
    }
  }
  else if ((((sVar2 == 2) || (sVar2 == 3)) && (*(short *)(_DAT_0380fff4 + 0x34c) == 0x40)) &&
          (iVar3 = FUN_027e9cfc(param_1 + 0x1e,_DAT_0380fff4 + 0x3c6), iVar3 != 0)) {
    FUN_037f9468(0x30);
    FUN_027ea144();
    FUN_027ecc44(param_1 + 0x1e,*(undefined2 *)(param_1 + 0x2c));
  }
  return;
}

