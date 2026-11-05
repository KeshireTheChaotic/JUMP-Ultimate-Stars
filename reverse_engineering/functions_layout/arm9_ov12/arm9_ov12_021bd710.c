
undefined * FUN_021bd710(int param_1,int param_2)

{
  if (param_2 == -1) {
    return &DAT_021d4084;
  }
  return (undefined *)
         (*(int *)(param_1 + 0x10) + param_2 * 4 + *(int *)(*(int *)(param_1 + 0x10) + param_2 * 4))
  ;
}

