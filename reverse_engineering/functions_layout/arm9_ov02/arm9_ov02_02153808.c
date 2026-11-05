
int FUN_02153808(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while( true ) {
    if ((int)(uint)*(byte *)(param_1 + 0x35f) <= iVar1) {
      return 0;
    }
    if (param_2 == *(int *)(*(int *)(*(int *)(iVar1 * 0x28 + param_1 + 0xd8) + 4) + 0x124)) break;
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}

