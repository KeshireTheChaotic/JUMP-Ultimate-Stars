
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027efb30(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + (uint)*(ushort *)(param_2 + 0xe) * 2;
  *(undefined2 *)(param_2 + 0xc) = *(undefined2 *)(iVar1 + 0x10);
  *(undefined2 *)(iVar1 + 0x12) = 2;
  *(undefined2 *)(iVar1 + 0x14) = 0;
  *(undefined2 *)(iVar1 + 0x16) = *(undefined2 *)(param_2 + 0x18);
  if (*(short *)(_DAT_0380fff4 + 0x1fc) == 0) {
    iVar1 = FUN_037fcc6c(*(undefined4 *)(_DAT_0380fff4 + 0x304),param_2,0);
    if (iVar1 == 0) {
      FUN_037f8a3c(param_1,_DAT_0380fff4 + 500,param_2);
    }
    else {
      FUN_037f882c(param_1,param_2);
    }
  }
  else {
    FUN_037f8a3c(param_1,_DAT_0380fff4 + 500,param_2);
    FUN_037f85f8(2,0x13);
  }
  return;
}

