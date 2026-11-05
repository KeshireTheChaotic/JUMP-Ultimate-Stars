
void FUN_0203d658(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0203d6d0(*(undefined4 *)(param_1 + 0x918));
  if ((iVar1 == 0) && (iVar1 = FUN_0203d6d0(*(undefined4 *)(param_1 + 0x91c),param_3), iVar1 == 0))
  {
    return;
  }
  *(int *)(param_1 + 0x918) = (int)(*param_2 + ((uint)(*param_2 >> 0xb) >> 0x14)) >> 0xc;
  *(int *)(param_1 + 0x91c) = (int)(*param_3 + ((uint)(*param_3 >> 0xb) >> 0x14)) >> 0xc;
  *(int *)(param_1 + 0x928) = *param_2;
  *(int *)(param_1 + 0x92c) = *param_3;
  *(undefined1 *)(param_1 + 0x98c) = 1;
  return;
}

