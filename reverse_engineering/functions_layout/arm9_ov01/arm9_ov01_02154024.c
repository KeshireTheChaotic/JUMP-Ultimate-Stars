
void FUN_02154024(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  *(uint *)(iVar1 + 0x58) =
       *(uint *)(iVar1 + 0x58) | 1 << (*(int *)(*(int *)(param_1 + 4) + 0x124) - 4U & 0xff);
  return;
}

