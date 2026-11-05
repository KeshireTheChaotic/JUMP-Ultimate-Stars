
void FUN_02150acc(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_020afea8;
  if (DAT_020afea8 == 0) {
    iVar1 = 0x2a30;
  }
  *(int *)(param_1 + 0xb0) = iVar1;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  DAT_020afeac = 18000;
  DAT_020afee4 = 0;
  return;
}

