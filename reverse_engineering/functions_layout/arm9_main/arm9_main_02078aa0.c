
void FUN_02078aa0(undefined2 *param_1)

{
  int iVar1;
  
  FUN_020517fc(param_1,0,0x5c);
  iVar1 = 0x10;
  do {
    iVar1 = iVar1 + -1;
    *param_1 = 0xffff;
    param_1 = param_1 + 2;
  } while (0 < iVar1);
  return;
}

