
void FUN_0215e854(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0215d4e0();
  if (iVar1 != 0) {
    FUN_02157450(param_1,0x16);
    FUN_0215e900(*(undefined4 *)(param_1 + 0x1a8),1);
    *(undefined1 *)(param_1 + 0x1e9) = 0xf;
  }
  if (*(char *)(param_1 + 0x1e9) == '\0') {
    FUN_02157494(param_1,0x10,FUN_0215e94c,&LAB_0215e988,0,param_4);
  }
  else {
    *(char *)(param_1 + 0x1e9) = *(char *)(param_1 + 0x1e9) + -1;
    iVar1 = FUN_0215e91c(*(undefined4 *)(param_1 + 0x1a8));
    if (iVar1 == 0) {
      *(undefined2 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x2c) = 0x90;
    }
    else {
      *(undefined2 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x2c) = 0xff70;
    }
  }
  return;
}

