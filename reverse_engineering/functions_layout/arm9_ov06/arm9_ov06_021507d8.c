
void FUN_021507d8(int param_1)

{
  int iVar1;
  
  FUN_02150134(param_1,1);
  iVar1 = DAT_020afea8;
  if (DAT_020afea8 == 0) {
    iVar1 = 0x35f;
  }
  *(int *)(param_1 + 0xb0) = iVar1;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (DAT_020afeac == 0) {
    DAT_020afeac = 0x2a30;
  }
  return;
}

