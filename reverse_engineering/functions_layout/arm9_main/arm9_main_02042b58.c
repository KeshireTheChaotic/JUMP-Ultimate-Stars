
void FUN_02042b58(undefined4 param_1,int param_2)

{
  int iVar1;
  
  while (iVar1 = FUN_02061600(param_2), iVar1 == 0) {
    FUN_020552a8();
  }
  if (param_2 == 0) {
    return;
  }
  *(undefined1 *)(DAT_020a0f2c + 0x902) = 1;
  *(undefined1 *)(DAT_020a0e08 + 0x902) = 1;
  return;
}

