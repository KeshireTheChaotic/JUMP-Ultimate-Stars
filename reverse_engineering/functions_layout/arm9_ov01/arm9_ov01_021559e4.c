
void FUN_021559e4(int param_1)

{
  int iVar1;
  int iVar2;
  int local_10;
  int local_c;
  
  local_10 = (int)*(short *)(*(int *)(param_1 + 4) + 0xa2) << 0xc;
  local_c = (int)*(short *)(*(int *)(param_1 + 4) + 0xa0) << 0xc;
  FUN_021511c8(param_1,&local_c,&local_10);
  iVar1 = FUN_02155a9c(param_1,0x31305053);
  if ((DAT_0216de44 != 0) && (*(int *)(DAT_0216de44 + 0x30) != 0)) {
    iVar2 = (*(code *)(&PTR_LAB_0215413c_1_02169d3c)[*(int *)(DAT_0216de44 + 0xf8)])();
    if (iVar2 != 0) {
      iVar2 = (**(code **)(**(int **)(*(int *)(DAT_0216de44 + 0x30) + 4) + 0x194))();
      if (*(byte *)(DAT_0216de44 + *(int *)(DAT_0216de44 + 0xf8) * 0x14 + iVar2 + 0x128) < 3) {
        FUN_02023894(*(undefined4 *)(iVar1 + 4),0x850038,0);
      }
      else {
        FUN_02023894(*(undefined4 *)(iVar1 + 4),0x85000c,0);
      }
      (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
    }
    *(int *)(DAT_0216de44 + 0x7c) = iVar1;
  }
  return;
}

