
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f1538(int param_1)

{
  undefined2 uVar1;
  
  uVar1 = FUN_027ec8d4(param_1 + 0x18);
  *(undefined2 *)(param_1 + 2) = uVar1;
  if (*(short *)(param_1 + 2) == 0xff) {
    *(undefined2 *)(param_1 + 2) = 0;
  }
  *(short *)(param_1 + 4) = (short)*(undefined4 *)(_DAT_0380fff4 + 0x3ec);
  if ((*(ushort *)(param_1 + 0x14) & 0x4000) != 0) {
    *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 8;
  }
  FUN_027ec698(param_1);
  FUN_037f8a3c(_DAT_0380fff4 + 0x188,_DAT_0380fff4 + 0x1a0,param_1 + -0x10);
  return;
}

