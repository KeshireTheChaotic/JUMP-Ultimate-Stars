
void FUN_02164a58(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_114;
  undefined1 auStack_110 [256];
  
  FUN_021646f4(param_1,param_2,&local_114,auStack_110);
  func_0x021bac78(*(undefined4 *)(param_1 + 0x84),local_114,auStack_110,param_3,0,0,0,0,0);
  if (*(char *)(param_2 + 2) == '\x01') {
    FUN_02166254(*(undefined4 *)(param_1 + 0x90),(int)*(short *)(param_2 + 4),
                 *(undefined4 *)(param_1 + 0x84));
  }
  while (iVar1 = func_0x021bad2c(*(undefined4 *)(param_1 + 0x84)), iVar1 == 0) {
    (*DAT_020a0e18)();
  }
  return;
}

