
void FUN_02151a48(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  if (*(char *)(DAT_02172960 + 0x16e) != '\0') {
    for (iVar1 = 1; iVar1 < *(int *)(DAT_02172960 + 0x158); iVar1 = iVar1 + 1) {
      iVar2 = iVar1 * 4;
      func_0x0217319c(*(undefined4 *)(DAT_02172960 + iVar2 + 300),7);
      func_0x021731f0(*(undefined4 *)(DAT_02172960 + iVar2 + 300),param_2);
      func_0x0217329c(*(undefined4 *)(DAT_02172960 + iVar2 + 300),0xffffffff,0);
      func_0x0217329c(*(undefined4 *)(DAT_02172960 + iVar2 + 300),param_3,1);
    }
  }
  return;
}

