
void FUN_02159740(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0200d338(param_2 - (param_1 + 0xa64),0x22);
  if (*(int *)(param_1 + 0xbdc) < 0 || iVar1 < *(int *)(param_1 + 0xbdc)) {
    *(int *)(param_1 + 0xbdc) = iVar1;
  }
  return;
}

