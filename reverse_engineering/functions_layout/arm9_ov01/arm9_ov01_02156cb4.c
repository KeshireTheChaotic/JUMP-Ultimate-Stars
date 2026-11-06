
void FUN_02156cb4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  *(uint *)(iVar1 + 0xec) = *(uint *)(iVar1 + 0xec) | 4;
  *(undefined4 *)(iVar1 + 0xf8) = *(undefined4 *)(*(int *)(param_1 + 4) + 0x124);
  (*(code *)&SUB_021b6214)(*(undefined4 *)(*(int *)(iVar1 + 0x30) + 4),1);
  return;
}

