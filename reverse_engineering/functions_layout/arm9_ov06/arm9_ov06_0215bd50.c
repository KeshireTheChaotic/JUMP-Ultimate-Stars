
undefined4 FUN_0215bd50(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x118) == '\0') {
    FUN_02157450(param_1,8);
    *(code **)(param_1 + 0xfc) = FUN_0215bdbc;
  }
  else {
    *(char *)(param_1 + 0x118) = *(char *)(param_1 + 0x118) + -1;
    iVar1 = FUN_0215b62c(*(undefined4 *)(param_1 + 0x1a8));
    if (iVar1 == 0) {
      *(undefined2 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x2c) = 0xa0;
    }
    else {
      *(undefined2 *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x2c) = 0xff60;
    }
  }
  return 0;
}

