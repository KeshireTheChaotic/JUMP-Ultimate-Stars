
void FUN_0216d800(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 0x5c);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 0xc);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(iVar1 + 0x10);
  *(undefined4 *)(iVar1 + 0xc) = *param_2;
  *(undefined4 *)(iVar1 + 0x10) = param_2[1];
  return;
}

