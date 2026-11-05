
void FUN_0217386c(int param_1,int *param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  
  pcVar1 = *(code **)(param_1 + 0x1014);
  iVar2 = 0;
  if (0 < param_3) {
    do {
      if (*param_2 != 0) {
        (*pcVar1)(s_FREE_array_entry_i__label_021a397c,*param_2,0);
        *param_2 = 0;
      }
      if (param_2[1] != 0) {
        (*pcVar1)(s_FREE_array_entry_i__value_021a3998,param_2[1],0);
        param_2[1] = 0;
      }
      param_2 = param_2 + 2;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_3);
  }
  return;
}

