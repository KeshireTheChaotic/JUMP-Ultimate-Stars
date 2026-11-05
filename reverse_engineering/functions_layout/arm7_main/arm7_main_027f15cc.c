
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f15cc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(_DAT_0380fff4 + param_1 * 0xc + 0x194);
  while (iVar1 = iVar2, iVar1 != -1) {
    iVar2 = FUN_037f8b44(iVar1);
    if (param_1 != 2) {
      FUN_027ec62c(iVar1 + 0x10);
    }
    *(undefined2 *)(iVar1 + 0x18) = 2;
    if (param_2 != 0) {
      FUN_027efb30(_DAT_0380fff4 + 0x194 + param_1 * 0xc,iVar1);
    }
  }
  return;
}

