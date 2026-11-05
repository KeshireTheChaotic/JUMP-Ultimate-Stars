
void FUN_02165b60(int param_1,int param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  *param_3 = (*(uint *)(iVar1 + param_2 * 8) & 0x1ff0000) >> 0x10;
  *param_4 = *(uint *)(iVar1 + param_2 * 8) & 0xff;
  return;
}

