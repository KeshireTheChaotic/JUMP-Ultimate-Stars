
void FUN_02196174(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((*(int *)(DAT_020aab78 + 0xa4) != 0) &&
     (iVar1 = *(int *)(*(int *)(DAT_020aab78 + 0xa4) + 0xc), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x814) = param_1;
    *(undefined4 *)(iVar1 + 0x818) = param_2;
  }
  return;
}

