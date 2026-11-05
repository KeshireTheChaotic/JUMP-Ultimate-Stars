
void FUN_0215d2e4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x1e6);
  if (cVar1 == '\x01') {
    FUN_02157450(param_1,7);
  }
  else if (cVar1 == '\x02') {
    FUN_02157450(param_1,8);
  }
  else if (cVar1 == '\x03') {
    (**(code **)(**(int **)(*(int *)(*(int *)(**(int **)(*(int *)(param_1 + 0x1a0) + 0x174) + 0xc) +
                                    4) + 0x68) + 0xfc))();
  }
  else {
    FUN_02157450(param_1,0);
  }
  if (*(char *)(param_1 + 0xdb) == '\0') {
    FUN_02157494(param_1,0,FUN_0215d3b4,FUN_0215d530,0,param_4);
  }
  else {
    FUN_02157494(param_1,0xd,FUN_0215d564,FUN_0215d6d4,0,param_4);
  }
  return;
}

