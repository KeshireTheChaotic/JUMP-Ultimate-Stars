
void FUN_02043bb8(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  (**(code **)(*param_2 + 0xc))();
  *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x40) = 0;
  iVar3 = (*(int **)(param_1 + 0x20))[3];
  iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x18))();
  uVar2 = (uint)*(ushort *)(param_1 + 0x2c) * (uint)*(ushort *)(param_1 + 0x2e) * iVar1;
  DC_FlushRange(iVar3,uVar2 >> 3,uVar2,iVar1,param_4);
  return;
}

