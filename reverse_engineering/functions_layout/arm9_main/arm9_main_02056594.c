
void FUN_02056594(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_0205707c(1);
  if (iVar1 == 0) {
    return;
  }
  *(undefined4 *)(iVar1 + 4) = param_1;
  *(undefined4 *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  *(undefined4 *)(iVar1 + 0x10) = param_4;
  *(undefined4 *)(iVar1 + 0x14) = param_5;
  FUN_02057034();
  return;
}

