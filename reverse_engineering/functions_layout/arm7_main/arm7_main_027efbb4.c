
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027efbb4(int param_1,int param_2)

{
  *(undefined2 *)(param_2 + 2) = 1;
  *(undefined2 *)(param_1 + 0xc) = 0xffff;
  *(undefined2 *)(param_1 + 0x12) = 0;
  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_1 + 0x16);
  FUN_027ec698();
  FUN_037f8a3c(_DAT_0380fff4 + 0x200,_DAT_0380fff4 + 0x194,param_1);
  FUN_027f258c(0);
  return 0;
}

