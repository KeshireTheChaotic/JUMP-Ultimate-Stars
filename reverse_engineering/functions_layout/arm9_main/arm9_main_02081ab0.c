
void FUN_02081ab0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((*(uint *)(param_2 + 0x14) & 0x1000000) == 0) {
    iVar1 = *(int *)(param_1 + 0xd8);
    FUN_02037c24(param_1 + 0xd8,iVar1);
    *(undefined4 *)(iVar1 + 8) = param_3;
    FUN_02037b98(param_1 + 0xc0,iVar1);
    return;
  }
  if (*(int *)(*(int *)(param_2 + 0xc) + 0x28) == 0) {
    iVar1 = *(int *)(param_1 + 0xd8);
    FUN_02037c24(param_1 + 0xd8,iVar1);
    *(undefined4 *)(iVar1 + 8) = param_3;
    FUN_02037b98(param_1 + 0xb8,iVar1);
    return;
  }
  return;
}

