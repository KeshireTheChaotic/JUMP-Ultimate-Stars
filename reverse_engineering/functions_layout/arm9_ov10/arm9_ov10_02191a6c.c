
int FUN_02191a6c(int param_1,int param_2,undefined2 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_02191bbc(param_3);
  FUN_02053d2c(param_2,param_1,*(undefined1 *)((int)param_3 + 3));
  FUN_02053f5c(param_2 + 0xe0);
  FUN_02053528(param_2 + 0x20,0x2191819,param_2,param_1 + iVar1,*param_3,
               *(undefined1 *)(param_3 + 1));
  FUN_020531dc(param_2 + 0x20);
  return param_1 + iVar1;
}

