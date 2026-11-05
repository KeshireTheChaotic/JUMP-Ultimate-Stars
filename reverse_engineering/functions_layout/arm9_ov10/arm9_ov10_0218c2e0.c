
void FUN_0218c2e0(int *param_1,int *param_2)

{
  int iVar1;
  
  if (*param_1 == 0) {
    *param_1 = (int)&DAT_021a66cc;
    *param_2 = 0;
    return;
  }
  if (*param_2 == -1) {
    iVar1 = FUN_02004b04(*param_1);
    *param_2 = iVar1 + 1;
  }
  return;
}

