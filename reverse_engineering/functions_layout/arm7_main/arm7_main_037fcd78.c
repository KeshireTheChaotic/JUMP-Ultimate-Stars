
void FUN_037fcd78(int param_1)

{
  int iVar1;
  
  while (*(int *)(param_1 + 0x6c) != 0) {
    iVar1 = FUN_037fc934(param_1 + 0x6c);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    FUN_037fc460();
  }
  return;
}

