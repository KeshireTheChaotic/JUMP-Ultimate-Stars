
void FUN_037fda28(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  undefined4 uVar1;
  
  if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
    FUN_037fe538();
  }
  uVar1 = OS_DisableInterrupts();
  param_1[7] = param_4;
  param_1[8] = param_5;
  param_1[9] = param_2;
  param_1[10] = param_3;
  *param_1 = param_6;
  param_1[1] = param_7;
  FUN_037fdb18(param_1,0,0);
  OS_RestoreInterrupts(uVar1);
  return;
}

