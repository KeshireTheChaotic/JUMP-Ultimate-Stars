
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f358c(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = _DAT_0380fff4;
  uVar1 = *(undefined2 *)(param_1 + 2);
  iVar3 = FUN_027ec2bc(uVar1);
  if (iVar3 == 0x40) {
    FUN_027ec480(uVar1);
    if (*(short *)(iVar2 + 0x1a8) != 0) {
      FUN_027f258c(1);
    }
    if (*(short *)(iVar2 + 0x19c) != 0) {
      FUN_027f258c(0);
    }
  }
  return;
}

