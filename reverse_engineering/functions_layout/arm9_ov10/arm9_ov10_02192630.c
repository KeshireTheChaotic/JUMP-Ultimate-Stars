
void FUN_02192630(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x73) == '\x04') {
    FUN_021924e4();
    return;
  }
  iVar1 = FUN_02192568();
  if ((iVar1 == -6) && ((param_6 & 1) != 0)) {
    FUN_021924e4(param_1,param_2,param_3,param_4,param_5);
  }
  return;
}

