
void FUN_02158350(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  
  bVar1 = param_1 != 0;
  if (bVar1) {
    param_1 = param_1 + param_2 * 4;
    param_2 = *(int *)(param_1 + 4);
  }
  if (bVar1 && param_2 != 0) {
    param_1 = (int)*(char *)(param_2 + 1);
  }
  if ((bVar1 && param_2 != 0) && param_1 != 0) {
    FUN_021586c4(*(undefined4 *)(param_2 + 8),param_3,param_4,param_4,param_4);
    return;
  }
  return;
}

