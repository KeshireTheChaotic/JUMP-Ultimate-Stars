
void FUN_0214f864(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x50);
  *(undefined4 *)(iVar1 + 0xc) = *param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_2[1];
  *(undefined4 *)(iVar1 + 0x14) = param_2[2];
  FUN_0214f784(iVar1,1);
  return;
}

