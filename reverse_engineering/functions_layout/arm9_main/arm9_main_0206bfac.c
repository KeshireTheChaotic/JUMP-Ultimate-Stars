
undefined4 FUN_0206bfac(int param_1,int param_2)

{
  int iVar1;
  
  FUN_0206bbd0(*(undefined4 *)(*(int *)(param_1 + 0x30) + 4),(int)*(short *)(param_2 + 4),
               (int)*(short *)(param_2 + 6),1);
  iVar1 = *(int *)(*(int *)(param_1 + 0x30) + 4);
  *(byte *)(iVar1 + 0x14) = *(byte *)(iVar1 + 0x14) | 2;
  return 1;
}

