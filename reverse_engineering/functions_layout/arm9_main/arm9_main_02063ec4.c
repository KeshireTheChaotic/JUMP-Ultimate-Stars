
void FUN_02063ec4(int *param_1)

{
  if (*param_1 != 0) {
    OS_DisableInterrupts();
    if (param_1[1] != 0) {
      *(int *)(param_1[1] + 8) = param_1[2];
    }
    if (param_1[2] != 0) {
      *(int *)(param_1[2] + 4) = param_1[1];
    }
    *param_1 = 0;
    param_1[2] = 0;
    param_1[1] = param_1[2];
    param_1[7] = param_1[7] & 0xfffffffe;
    if (DAT_020afb14 == param_1) {
      DAT_020afb14 = DAT_020afb10;
      DAT_020afb1c = 0;
      DAT_020afb1a = 0;
      DAT_020afb18 = 0;
    }
    OS_RestoreInterrupts();
  }
  return;
}

