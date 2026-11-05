
uint FUN_0214db5c(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  return *(uint *)(iVar1 + *(int *)(iVar1 + 0x70) * 4 + 0x18) &
         ~*(uint *)(iVar1 + *(int *)(iVar1 + 0x74) * 4 + 0x18);
}

