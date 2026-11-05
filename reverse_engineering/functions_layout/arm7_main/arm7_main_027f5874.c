
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f5874(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(int *)(_DAT_0380fff4 + 0x318) != 0) {
    iVar2 = *(int *)(_DAT_0380fff4 + 0x318) + param_1 + -0x2a;
    for (; param_2 != 0; param_2 = param_2 + -1) {
      uVar1 = FUN_027e93b0(iVar2);
      iVar2 = iVar2 + 1;
      FUN_027e93d0(param_3,uVar1);
      param_3 = param_3 + 1;
    }
  }
  return;
}

